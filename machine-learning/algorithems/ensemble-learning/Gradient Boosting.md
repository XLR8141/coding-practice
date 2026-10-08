# Gradient Boosting Workflow in Simple Terms

## 1. Baseline prediction
- Start with a constant guess.
- For regression: the mean of all labels.
- For classification: the log odds of the class distribution.

## 2. Residuals (errors)
- Compute how far off the baseline is:  
  `Residual = Actual value − Prediction`

## 3. Train a weak learner (tree)
- Fit a small decision tree to predict these residuals.
- The tree learns where the baseline went wrong.

## 4. Update the prediction
- Adjust the old prediction using the tree’s correction:  
  `New prediction = Old prediction + Learning rate × Tree’s prediction`

## 5. Repeat
- Recalculate residuals based on the updated prediction.
- Train another tree to fix those new errors.
- Keep stacking corrections until the model is strong.



## Residuals
### the resuidual or loss funtion isnt limited to just MSE(y - yhat) we can also use different

![alt text](image.png)