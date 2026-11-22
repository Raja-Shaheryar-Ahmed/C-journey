# 🧪 Programming Fundamentals – Lab 8

**Topics:** pointers, the address-of (`&`) and dereference (`*`) operators, pass by reference, returning multiple values through pointer parameters.

## 📋 Tasks

| Task | File | What it does |
|---|---|---|
| 1 | [Task_01.c](Task_01.c) | Pointers to `int`, `float` and `char`; reading and changing values through them |
| 2 | [Task_02.c](Task_02.c) | Swap and sort three numbers using pointers |
| 3 | [Task_03.c](Task_03.c) | Circle area and circumference returned through pointers |
| 4 | [Task_04.c](Task_04.c) | Seconds to `HH:MM:SS` and adding extra seconds |
| 5 | [Task_05.c](Task_05.c) | Bank account menu using pass by reference |
| 6 | [Task_06.c](Task_06.c) | Quadratic solver returning two roots through pointers |

## 📝 Task Details

### Task 1 – Pointer Basics
Declares an `int`, a `float` and a `char`, each with its own pointer. Prints the value, the address (`&`) and the pointer's contents, then changes all three variables through their pointers (`age + 1`, `cgpa + 0.25`, `grade + 1`).

Addresses differ on every run, so only the final line is shown here:

```text
After changing through pointers:
age = 22, cgpa = 3.8, grade = B
```

### Task 2 – Sort Three Numbers
Functions: `swap(int *x, int *y)` and `sortThree(int *a, int *b, int *c)`. The numbers are passed by address, so the swaps made inside the functions change the original variables in `main`.

```text
Enter three numbers: 7 3 9
Before: 7 3 9
After: 3 7 9
```

### Task 3 – Circle Info
Function: `circleInfo(float radius, float *area, float *circumference)`. Returns two results at once through pointer parameters. The radius is re-asked while it is negative.

```text
Enter radius: 5
Area: 78.54
Circumference: 31.42
```

### Task 4 – Time Converter
Functions: `convertTime(totalSeconds, &h, &m, &s)` and `addSeconds(&h, &m, &s, extra)`. Converts a number of seconds to hours, minutes and seconds, then adds more seconds and prints the new time.

```text
Enter total seconds: 3725
Time: 01:02:05

Enter seconds to add: 100
New Time: 01:03:45
```

### Task 5 – Bank Account
A menu-driven account that starts with a balance of Rs 5000. Functions: `showBalance`, `deposit` and `withdraw`, all working on the balance through a pointer. Invalid amounts and insufficient balance are handled.

| Choice | Action |
|---|---|
| 1 | Show balance |
| 2 | Deposit |
| 3 | Withdraw |
| 4 | Exit |

### Task 6 – Quadratic Solver
Function: `solveQuadratic(a, b, c, &r1, &r2)` returns the number of real roots (0, 1 or 2) and stores the roots through pointers. `main` rejects `a = 0`.

```text
Enter a, b, c : 1 -3 2
Two roots: 2.00 and 1.00
```

## 🚀 How to Run

```bash
gcc Task_01.c -o Task_01
./Task_01          # Linux / macOS
Task_01.exe        # Windows
```

Task 6 uses `math.h`, so on Linux/macOS compile it with:

```bash
gcc Task_06.c -o Task_06 -lm
```

## 👤 Author

**Raja Shaheryar Ahmed**
GitHub: [@Raja-Shaheryar-Ahmed](https://github.com/Raja-Shaheryar-Ahmed)
