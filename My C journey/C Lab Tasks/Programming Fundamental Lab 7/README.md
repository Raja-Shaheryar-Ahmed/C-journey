# 🧪 Programming Fundamentals – Lab 7

**Topics:** user-defined functions, function prototypes, parameters and return values, `void` functions, `math.h` (`sqrt`, `pow`, `ceil`, `floor`), menu-driven programs built from functions.

## 📋 Tasks

| Task | File | What it does |
|---|---|---|
| 1 | [Task_01.c](Task_01.c) | Print a square of any character using functions |
| 2 | [Task_02.c](Task_02.c) | Hypotenuse and area of a right triangle |
| 3 | [Task_03.c](Task_03.c) | Electricity bill with slab rates |
| 4 | [Task_04.c](Task_04.c) | Celsius–Fahrenheit table and converter |
| 5 | [Task_05.c](Task_05.c) | Number report: prime, perfect, palindrome and more |
| 6 | [Task_06.c](Task_06.c) | Mini math toolkit menu (power, factorial, GCD, LCM) |

## 📝 Task Details

### Task 1 – Pattern Printer
Functions: `welcome()` and `PrintSquare(int side, char ch)`. Prints a banner, reads a side length and a character, draws a filled square, then prints the banner again.

```text
Enter side: 4
Enter character: #
####
####
####
####
```

### Task 2 – Right Triangle
Reads sides `a` and `b`, then prints the hypotenuse `√(a² + b²)` (rounded up and down using `ceil` and `floor`) and the area `½ × a × b`.

```text
Enter side a: 3
Enter side b: 4
Hypotenuse: 5.00
Rounded up: 5
Rounded down: 5
Area: 6.00
```

### Task 3 – Electricity Bill
Functions: `readUnits()` (re-asks until the input is not negative) and `calculateBill(int units)`.

| Units | Rate per unit |
|---|---|
| first 100 | Rs 10 |
| 101 – 300 | Rs 15 |
| above 300 | Rs 20 |

A 5% surcharge is added when the bill exceeds Rs 3000.

```text
Enter units consumed: 350
Units consumed: 350
Total bill: 5250.00
```

### Task 4 – Temperature Table
Functions: `toFahrenheit()`, `toCelsius()` and `printTable(start, end, step)`. Prints a Celsius-to-Fahrenheit table for the chosen range, then converts one Fahrenheit value back to Celsius.

```text
Start: 0
End: 40
Step: 10
Celsius	Fahrenheit
0	32.00
10	50.00
20	68.00
30	86.00
40	104.00
Enter a temperature in Fahrenheit: 98.6
98.60 F = 37.00 C
```

### Task 5 – Number Report
Functions: `isPrime`, `isPerfect`, `reverseNumber`, `isPalindrome`, `digitSum` and `report`. For a positive number the program prints whether it is prime, whether it is perfect, its reverse, whether it is a palindrome, the sum of its digits, and all primes from 1 up to the number.

```text
Enter a positive number: 28
Prime: No
Perfect: yes
Reverse: 82
Palindrome: No
Sum of digits: 10
Primes from 1 to 28: 2 3 5 7 11 13 17 19 23
```

### Task 6 – Mini Math Toolkit
A menu loop built from small functions: `showMenu`, `readNonNegative`, `printLine`, `power`, `factorial`, `gcd` and `lcm`.

| Choice | Action |
|---|---|
| 1 | Power (`base ^ exp`) |
| 2 | Factorial |
| 3 | GCD and LCM of two numbers |
| 4 | Exit |

```text
Choice: 1
Enter a non negative number: 2
Enter a non negative number: 10
--------------------
2 ^ 10 = 1024
--------------------
```

## 🚀 How to Run

```bash
gcc Task_01.c -o Task_01
./Task_01          # Linux / macOS
Task_01.exe        # Windows
```

Task 2 uses `math.h`, so on Linux/macOS compile it with:

```bash
gcc Task_02.c -o Task_02 -lm
```

## 👤 Author

**Raja Shaheryar Ahmed**
GitHub: [@Raja-Shaheryar-Ahmed](https://github.com/Raja-Shaheryar-Ahmed)
