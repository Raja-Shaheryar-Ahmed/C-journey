# 🧪 Programming Fundamentals – Lab 3

**Topics:** user input with `scanf`, arithmetic operators, `%` modulus, type casting, `math.h`, basic `if/else`.

## 📋 Tasks

| Task | File | What it does |
|---|---|---|
| 1 | [Task_01.c](Task_01.c) | Speed from distance and time |
| 2 | [Task_02.c](Task_02.c) | Swap two numbers using a temporary variable |
| 3 | [Task_03.c](Task_03.c) | Tax amount and net salary |
| 4 | [Task_04.c](Task_04.c) | Minimum coins for an amount in pennies |
| 5 | [Task_05.c](Task_05.c) | Roots of a quadratic equation |
| 6 | [Task_06.C](Task_06.C) | Integer vs float division and casting |
| 7 | [Task_07.c](Task_07.c) | Total and average of three subjects |
| 8 | [Task_08.c](Task_08.c) | Float to int conversion and the lost fraction |

## 📝 Task Details

### Task 1 – Speed Calculator
Reads the hours travelled and the distance in km, then prints `speed = distance / time`.

```text
Enter the number of hours travelled: 4
Enter the distance (in KM): 200
The speed is: 50.00
```

### Task 2 – Swap Two Numbers
Reads two integers and swaps them with a third (`box`) variable.

```text
Enter 1st number: 10
Enter 2nd number: 20
After swapping:
The 1st number is: 20
The 2nd number is: 10
```

### Task 3 – Salary After Tax
Reads a salary and a tax rate (%), then prints the tax amount and the net salary.

```text
Enter the salary: 50000
Enter the tax rate (%): 10
Tax amount: 5000.00
Net salary after tax: 45000.00
```

### Task 4 – Coin Change
Breaks 368 pennies into the fewest coins using `/` and `%`: quarters (25), dimes (10), nickels (5) and pennies (1).

```text
Quarters (25c): 14
Dimes (10c): 1
Nickels (5c): 1
Pennies (1c): 3
```

### Task 5 – Quadratic Equation
Reads `a`, `b`, `c`, computes the discriminant `b² − 4ac` and prints both roots with `sqrt()` from `math.h`. If the discriminant is negative it reports that the roots are complex.

```text
Enter the value of a: 1
Enter the value of b: -3
Enter the value of c: 2
Root 1: 2.000
Root 2: 1.000
```

### Task 6 – Type Casting
Compares three ways of dividing two integers (`7` and `2`):

| Variable | Expression | Result |
|---|---|---|
| `v1` | `a / b` | 3.00 (integer division first) |
| `v2` | `(float) a / b` | 3.50 (cast before dividing) |
| `v3` | `(float) (a / b)` | 3.00 (cast after dividing) |

### Task 7 – Total and Average Marks
Reads marks for three subjects and prints the total and the average (using `3.0` to avoid integer division).

```text
Total marks are: 240
Average marks are: 80.00
```

### Task 8 – Float to Int Conversion
Reads a float, stores it in an `int` (the fractional part is dropped) and prints the difference between the converted and original values.

```text
Enter float value between -1000 and 1000: 5.75
Original value you entered: 5.750000
Converted value: 5
-0.750000
```

## 🚀 How to Run

```bash
gcc Task_01.c -o Task_01
./Task_01
```

Task 5 uses `math.h`, so on Linux/macOS compile it with the math library:

```bash
gcc Task_05.c -o Task_05 -lm
```

`Task_06.C` has a capital `.C` extension, so on Linux/macOS tell GCC it is C code:

```bash
gcc -x c Task_06.C -o Task_06
```

## 👤 Author

**Raja Shaheryar Ahmed**
GitHub: [@Raja-Shaheryar-Ahmed](https://github.com/Raja-Shaheryar-Ahmed)
