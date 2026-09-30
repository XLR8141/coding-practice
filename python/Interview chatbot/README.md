# Mock Interview UI (Tkinter)

A desktop GUI built with Python's Tkinter library that simulates a basic mock interview chat. It asks preset coding or system-design questions and gives feedback based on keyword matching.

## What it does

- Presents a dark-themed chat window with a scrollable message area and a text input box
- User types `coding` or `design` to pick a question track
- Bot asks questions one at a time from a fixed list for that track
- User types a free-text answer
- Bot checks the answer for specific keywords (e.g. "reverse", "stack", "database", "cache") and responds with generic positive or corrective feedback
- Typing `restart` resets the session back to the start

## What it is NOT

- **No real language understanding.** Feedback is plain keyword matching (`if "reverse" in answer`), not NLP or semantic evaluation.
- **No AI model involved.** There's no LLM call, no API request, no trained model — all questions and responses are hardcoded.
- **Not adaptive.** Questions are fixed lists (3 coding, 2 design); the bot doesn't generate new questions or tailor difficulty.

## Tech used

- Python 3
- Tkinter (`tkinter`, `scrolledtext`, `font`) — standard library only, no external dependencies

## How to run

```bash
python main.py
```

## Why this exists

Built as practice for GUI event handling in Tkinter — layout, widget styling, text insertion/tagging, and binding input events (button click + Enter key) to a handler function.

## Possible next step

Replace the keyword-matching logic with an actual LLM call (e.g. OpenAI API) to evaluate answers and generate follow-up questions dynamically. That would turn this from a UI exercise into a functional AI-assisted interview tool.
