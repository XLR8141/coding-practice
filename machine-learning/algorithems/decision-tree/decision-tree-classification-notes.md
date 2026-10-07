# Decision Trees for Classification — Intuition Notes

## The Core Idea (one sentence)

At every node, try every possible question you could ask, measure how much each one reduces "messiness" (impurity), ask the best one, then repeat this same process independently on each resulting group until it's pure or a stopping rule kicks in.

---

## Step 0: The impurity baseline

Before asking any question, measure how mixed the current data is.

**Entropy:**
$$\text{Entropy}(S) = -\sum_{i} p_i \log_2 p_i$$

- 0 = perfectly pure (one class only)
- 1 = maximum confusion (50/50 split, for 2 classes)

**Gini impurity** (used by scikit-learn, cheaper to compute — no log):
$$\text{Gini}(S) = 1 - \sum_i p_i^2$$

Both measure the same thing: *how mixed are the labels here?* Either works — they usually agree on which split is best.

---

## Step 1: Generate candidate questions

This is the ONLY place numerical and categorical features behave differently.

### Numerical features (e.g. diameter)
- Sort all values seen in the data.
- Place a candidate threshold at the **midpoint between every pair of adjacent values**.
- n distinct values → n−1 candidate thresholds.
- Each candidate becomes a yes/no question: `diameter < 0.5?`

### Categorical features (e.g. Outlook: Sunny/Overcast/Rain)
- No natural order → no sliding threshold.
- Instead: split into groups by category.
  - Multi-way (ID3-style): one branch per category value.
  - Binary (CART-style, used by scikit-learn): test different groupings, e.g. `Sunny vs {Overcast, Rain}`.

**Intuition:** numeric = "slide a line," categorical = "sort into buckets."

---

## Step 2: Score every candidate with Information Gain

$$\text{Gain} = \text{Impurity(parent)} - \left[\frac{n_{left}}{n}\text{Impurity(left)} + \frac{n_{right}}{n}\text{Impurity(right)}\right]$$

Plain English: *"How much less confused am I after this split, compared to before it?"*

A split is good when it produces child groups that are much purer than the parent — even one perfectly pure child (like Overcast → all "Yes") can be enough to make a feature win.

---

## Step 3: Pick the max → that's the question at this node

Compare gain **across every feature** (not just within one feature). Whichever single question — numeric threshold or categorical grouping — gives the highest gain becomes:
- The **root question**, if this is the first split.
- The **child's question**, if recursing deeper.

---

## Step 4: Recurse — the part that builds the hierarchy

This is the idea most people under-appreciate: **every node re-runs Steps 0–3 completely from scratch**, using:
- Only the **rows** that reached this node (not the whole dataset anymore).
- Only the **features not yet used in this branch** (categorical features get excluded after use in a branch; numeric features *can* be reused at a different threshold deeper down).

**Key insight:** information gain is NOT a fixed property of a feature. It depends entirely on the subset of rows currently being looked at.
> Example: Humidity gave weak gain (0.152) on the *full* tennis dataset, but gave a *perfect* gain (0.971) once restricted to just the Sunny rows — because within that filtered slice, Humidity happened to separate Yes/No perfectly.

Mental model: *"Forget the past ranking. At every fork, ask fresh: of what's left, what best untangles the mess in front of me right now?"*

---

## Step 5: When does it stop? (Leaf nodes)

A branch stops growing and becomes a **leaf** (predicts majority class) when any of these hit:
- **Pure** — entropy/Gini = 0, only one class remains.
- **No features left** to split on in this branch.
- **Stopping rule hit** — max_depth, min_samples_leaf, min impurity decrease, etc.

⚠️ Without any stopping rule, a tree will keep splitting until every leaf is 100% pure — even chasing a single noisy outlier down to its own leaf. This is exactly why unconstrained decision trees overfit.

---

## What splits, what stays whole

- Splitting divides **rows** (which examples go left/right), never columns.
- Each child keeps **all columns**, just fewer rows — and the already-used categorical feature becomes excluded from further splits in that branch (it's now constant, so it can't reduce impurity anymore).

---

## Categorical vs. Numerical — side-by-side

| | Numerical | Categorical |
|---|---|---|
| Candidate splits | Threshold between sorted adjacent values | Grouping by category value |
| Can reuse feature deeper in same branch? | Yes (different threshold) | No (value is now constant) |
| Example question | `diameter < 0.5?` | `Outlook == Sunny?` |
| Scoring method | Same (entropy/Gini → information gain) | Same (entropy/Gini → information gain) |

---

## Worked Mini-Example (Play Tennis dataset)

- Root entropy (9 Yes/5 No) = 0.940
- Outlook wins root split (gain 0.246) — Overcast branch comes out **pure** (all Yes) → immediate leaf
- Inside **Sunny** branch (5 rows): Humidity gives *perfect* split (gain 0.971) → leaf, leaf
- Inside **Rain** branch (5 rows): Wind gives *perfect* split → leaf, leaf

Final tree:
```
                Outlook?
             /     |      \
        Sunny   Overcast   Rain
          |         |         |
      Humidity?    Yes      Wind?
      /    \                /    \
   High   Normal          Weak  Strong
    |        |              |      |
    No      Yes            Yes     No
```

---

## The one paragraph to remember

A decision tree doesn't know any rules in advance. At every node it brute-forces every possible yes/no question (slide a threshold for numeric features, try groupings for categorical ones), scores each candidate by how much it reduces entropy/Gini impurity, and greedily picks the single best one. It then treats each resulting group of rows as a brand-new mini classification problem, repeating the exact same process — recalculating impurity and gain from scratch using only that group's rows — until a branch is pure or a stopping rule forces it to stop. The hierarchy is nothing more than this recursive "best local question" search happening layer after layer.
