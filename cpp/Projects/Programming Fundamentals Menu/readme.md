# Programming Fundamentals Menu (C++)

A console program with a login screen and a menu of small exercises, grouped by core C++ topic. Built as a beginner assignment to practice functions, loops, conditionals, arrays, and switch statements in a structured program.

## What's inside

Five main functions, each focused on one concept and holding several small exercises:

1. **Loop-based:** printing sequences, calculating sums, generating patterns
2. **If-else:** decisions based on user input
3. **Switch:** multi-choice problems using `switch-case`
4. **Array:** sum, average, and maximum of values
5. **Combined:** exercises mixing loops, conditionals, and arrays

## Features

- Login with ID and password
- Numbered menu to move between exercises
- Retry an exercise or return to the main menu
- Prompts and output written to be easy to follow

## What I learned

- Splitting a program into functions instead of one long `main()`
- Choosing the right control structure (loop, if-else, or switch) for a problem
- Handling user input and retry flows without breaking the program

## Limitations and next steps

- The login uses hardcoded demo credentials, so it's not real authentication.
- Input validation is basic (non-numeric input isn't handled everywhere).
- Next: add proper input validation and move repeated logic (e.g. the retry/menu code) into shared functions.
