# ⌨️ Mini Command Interpreter

A tiny calculator where you **type the name of the operation** (`add`, `divide`, `power` ...) and then two numbers. Instead of a long `if / else` chain, the program stores its operations in a table of **function pointers**.

## ✨ Features

- Commands: `add`, `subtract`, `multiply`, `divide`, `power`
- Short aliases: `+`, `-`, `*`, `/`, `^`
- Extra commands: `help`, `history` (last 5 calculations, newest first) and `exit` / `quit`
- Works with decimal and negative numbers
- Handles unknown commands, text typed instead of a number, division by zero and invalid powers
- Keeps running until you exit, and stops cleanly if the input ends

## 🧠 Concepts Practiced

| Topic | Where it appears |
|---|---|
| **Function pointers** | `Operation operations[]` holds the address of each operation function |
| Functions | Every operation is its own small function |
| Pointers | Each function returns its answer through a `double *result` pointer |
| Arrays | Parallel arrays for command names, aliases and functions, plus history arrays |
| Circular buffer | The history keeps the newest 5 entries and overwrites the oldest |
| Strings | `strcmp` matches typed text against the command names |
| Loops | The main `while` loop keeps reading commands |

## 🔍 What is a function pointer?

A normal pointer stores the address of a **variable**. A function pointer stores the address of a **function**, so you can call a function that is chosen while the program is running.

The type used in this project:

```c
typedef int (*Operation)(double a, double b, double *result);
```

It means: "a pointer to any function that takes two `double` values and a `double` pointer, and returns an `int`". Every operation has exactly that shape, so one array can hold them all:

```c
Operation operations[COMMAND_COUNT] = {add, subtract, multiply, divide, power};
```

Calling the chosen operation:

```c
operations[index](first, second, &result);
```

The return value tells the program whether the operation worked (`1`) or failed (`0`, for example when dividing by zero).

### Two ways to pick an operation

**First approach: an `if / else` chain.** Every new command means editing the chain:

```c
if (strcmp(command, "add") == 0)
	add(first, second, &result);
else if (strcmp(command, "subtract") == 0)
	subtract(first, second, &result);
else if (strcmp(command, "multiply") == 0)
	multiply(first, second, &result);
/* ... and so on ... */
```

**Final approach: a command table.** Find the command's position once, then call through the pointer:

```c
index = findCommand(command, names, aliases);
operations[index](first, second, &result);
```

To add a command now, write one function and add one entry to each of the three tables.

## 🔧 Requirements

- GCC or another C compiler

## 🚀 Compile and Run

```bash
gcc -Wall -Wextra -std=c11 main.c -o interpreter
./interpreter          # Linux / macOS
interpreter.exe        # Windows
```

## 🖥️ Example Session

```text
MINI COMMAND INTERPRETER
Type help to see the commands.

command> add
first number> 10
second number> 5
result> 15

command> divide
first number> 10
second number> 0
error> Cannot divide by zero.

command> *
first number> 4
second number> -2
result> -8

command> power
first number> 2
second number> 10
result> 1024

command> history
history> (newest first)
  1. 2 power 10 = 1024
  2. 4 multiply -2 = -8
  3. 10 add 5 = 15

command> exit
Goodbye!
```

## ⚠️ Limitations

- `power` only accepts whole-number exponents from 0 to 1000
- Numbers are `double`, so very large results lose precision and results are shown with up to 10 significant digits
- Failed calculations (such as dividing by zero) are not saved in the history

## 🔮 Future Improvements

- Add `modulo`, `square root` and other commands (one function plus one table entry each)
- Replace the three parallel arrays with an array of `struct Command` once structs are learned
- Separate command parsing from operation execution into different files

## 👤 Author

**Raja Shaheryar Ahmed**
GitHub: [@Raja-Shaheryar-Ahmed](https://github.com/Raja-Shaheryar-Ahmed)
