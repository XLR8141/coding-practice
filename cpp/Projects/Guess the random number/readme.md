# Guess the Random Number

A menu-driven console game in C++. The program picks a secret number between 1 and 100, and you try to guess it within a limited number of attempts.

## Features
- **Three difficulty levels:** Easy (X attempts), Medium (Y), Hard (Z)
- **Hints:** after every guess, the game says whether you were too high or too low
- **Replay without restarting:** after a win or loss, play again, change difficulty, or exit
- **Different number every run:** generated with `rand()`, seeded with `srand(time(0))`

## Concepts practiced
- Loops and conditionals for game flow, attempt counting, and win/loss checks
- Reading user input and giving feedback
- Menu-driven program design

## What I learned
- Why `srand(time(0))` is needed: without it, `rand()` gives the same "random" number every run
- Splitting game logic into functions instead of keeping it all in `main()`
- (Add one real bug you fixed, e.g. an off-by-one in the attempts counter)

## Possible improvements
- Validate non-numeric input (typing a letter shouldn't break the loop)
- Track best score or win/loss stats across rounds
- Replace `rand()` with `<random>` (`std::mt19937`), the modern C++ approach
