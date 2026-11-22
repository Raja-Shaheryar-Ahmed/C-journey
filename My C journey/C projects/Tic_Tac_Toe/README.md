# ❌⭕ Tic Tac Toe

A two-player Tic Tac Toe game for the terminal. It keeps a scoreboard across rounds and lets the players start a new round as often as they like.

## ✨ Features

- Two players, **X** and **O**, take turns choosing a cell from 1 to 9
- Detects all 8 winning lines and draws
- Rejects letters, numbers outside 1 to 9, and cells that are already taken
- Scoreboard for X wins, O wins and draws
- The player who starts alternates every round
- "Play again?" question that accepts `y` or `n` in any case

## 🧠 Concepts Used

| Topic | Where it appears |
|---|---|
| 1D arrays | The whole 3x3 board is one array of 9 characters |
| Functions | `printBoard()`, `hasWon()`, `isBoardFull()`, `playRound()` and more |
| Pointers | `updateScore()` changes the three score counters through pointers |
| Loops | Round loop, move-input loop, board printing and reset |
| `if / else` | Win and draw checks, input validation |

The board positions map to array indexes like this:

```text
 1 | 2 | 3        index 0 | 1 | 2
---+---+---       -----------------
 4 | 5 | 6        index 3 | 4 | 5
---+---+---       -----------------
 7 | 8 | 9        index 6 | 7 | 8
```

## 🚀 How to Run

```bash
gcc main.c -o tictactoe
./tictactoe          # Linux / macOS
tictactoe.exe        # Windows
```

## 🖥️ Sample Run

A game that ends in a draw (moves: X5, O1, X9, O3, X2, O8, X4, O6, X7):

```text
 O | X | O
---+---+---
 X | X | O
---+---+---
 X | O | X

*** It's a draw! ***

------------- SCOREBOARD -------------
Player X wins : 0
Player O wins : 0
Draws         : 1
--------------------------------------

Play again? (y/n): n

Thanks for playing. Goodbye!
```

## 🔮 Ideas to Improve Later

- Add a single-player mode where the computer picks a move
- Use a 2D array for the board once arrays of arrays are covered
- Let players enter their names with strings

## 👤 Author

**Raja Shaheryar Ahmed**
GitHub: [@Raja-Shaheryar-Ahmed](https://github.com/Raja-Shaheryar-Ahmed)
