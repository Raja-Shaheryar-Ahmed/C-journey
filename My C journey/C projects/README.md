# 🛠️ C Projects

Small complete programs that combine several topics from the course. Each project has its own folder, source file and README with a sample run.

## 📁 Projects

| Project | What it does | Main topics |
|---|---|---|
| [ATM Banking System](ATM_Banking_System/) | PIN login, balance, deposit, withdraw and a last-5 mini statement | Functions, pointers, arrays, `switch`, loops |
| [Tic Tac Toe](Tic_Tac_Toe/) | Two-player game with win and draw detection and a scoreboard | 1D arrays, functions, pointers, loops |
| [Student Marks Manager](Student_Marks_Manager/) | Stores marks for up to 30 students, with statistics, search and sorting | Parallel arrays, sorting, searching, pointers |
| [Quiz Game](Quiz_Game/) | 8-question C quiz with scoring, grade and an answer summary | `switch`, arrays, functions |
| [Inventory Management System](Inventory_Management_System/) | Shop stock with add, search, update, delete, total value and low-stock warnings | Parallel arrays, 2D `char` array, functions, pointers |
| [Dynamic Contact Manager](Dynamic_Contact_Manager/) | Contact book whose memory grows while the program runs | `malloc`, `realloc`, `free`, pointers, strings |
| [Mini Command Interpreter](Mini_Command_Interpreter/) | Type `add`, `divide`, `power` and more, run through a table of function pointers | Function pointers, arrays, strings |
| [Dynamic Grade Calculator](Dynamic_Grade_Calculator.c) | Grades for any number of subjects, sized at run time | Pointers and `malloc` from `stdlib.h` |

**Levels:** ATM, Tic Tac Toe, Student Marks Manager and Quiz Game use only 1D arrays, functions and pointers and are the best place to start. Inventory Management adds text handling, and the Dynamic Contact Manager and Mini Command Interpreter are the most advanced because they use dynamic memory and function pointers. Structs and file handling are not used anywhere yet; each README lists them as a future upgrade.

## 🚀 How to Run

```bash
cd ATM_Banking_System
gcc main.c -o atm
./atm          # Linux / macOS
atm.exe        # Windows
```

## 👤 Author

**Raja Shaheryar Ahmed**
GitHub: [@Raja-Shaheryar-Ahmed](https://github.com/Raja-Shaheryar-Ahmed)
