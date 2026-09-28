# Programming Fundamentals Menu (C++)

A console program with a login screen and a menu of small exercises, grouped by core C++ topic. I built it as a beginner assignment to practice one concept per function and to organize a larger program.

## What's inside

The menu has five main functions. Each one holds several small exercises.

| Function | Topic | Example exercises |
|---|---|---|
| Loop-based | `for` / `while` loops | Print sequences, calculate sums, draw patterns |
| If-else | Conditionals | Decisions based on user input |
| Switch | `switch-case` | Multi-choice problems |
| Array | Arrays | Sum, average, maximum of user-entered values |
| Combined | Loops + conditionals + arrays | Multi-step problems that mix the above |

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
- Input validation is basic (for example, non-numeric input isn't handled everywhere).
- Next: add proper input validation, and store exercise data in arrays/structs to reduce repeated code.
