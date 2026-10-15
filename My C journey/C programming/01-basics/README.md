# 01 - Basics

The very first step of the journey: printing output and working with simple variables.

## 📁 Programs

| File | Description |
|---|---|
| `hello_world.c` | The classic first program. Prints `Hello, World!` to the screen. |
| `variables_and_output.c` | Declares an `int`, a `float`, and a `char`, then prints each one using format specifiers. |

## 🧠 Program Details

### hello_world.c
Prints a single line using `printf`.

```
Hello, World!
```

**Concepts:** `#include <stdio.h>`, `main()`, `printf`, `return 0`

---

### variables_and_output.c
Stores an age, a temperature, and a grade, then prints them with the matching format specifiers.

```
Age: 20
Temperature: 36.60 °C
Grade: A
```

**Concepts:** variables, `int` / `float` / `char`, format specifiers (`%d`, `%.2f`, `%c`)

## 📌 Format Specifiers Used

| Specifier | Type | Example |
|---|---|---|
| `%d` | `int` | `20` |
| `%.2f` | `float` (2 decimal places) | `36.60` |
| `%c` | `char` | `A` |

## 🛠️ Requirements

- A C compiler such as GCC, TDM-GCC, or MinGW.

## 🚀 How to Run

```bash
gcc hello_world.c -o hello_world
./hello_world          # Linux / macOS
hello_world.exe        # Windows
```

## ➡️ Next Topic

[02 - Data Types](../02-data-types/)

## 👤 Author

**Raja Shaheryar Ahmed**
Roll No: P26-0051
GitHub: [@Raja-Shaheryar-Ahmed](https://github.com/Raja-Shaheryar-Ahmed)
