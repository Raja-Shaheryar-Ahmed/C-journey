# 🧪 Programming Fundamentals – Lab 6

**Topics:** nested loops, pattern printing, series summation, perfect numbers.

## 📋 Tasks

| Task | File | What it does |
|---|---|---|
| 1 | [Task_01.c](Task_01.c) | Two right-aligned star triangles |
| 2 | [Task_02.c](Task_02.c) | Hash and star "hourglass-style" triangle patterns |
| 3 | [Task_03.c](Task_03.c) | Sum of the series `x^k / k!` |
| 4 | [Task_04.c](Task_04.c) | First four perfect numbers with their divisors |

## 📝 Task Details

### Task 1 – Triangle Patterns
Uses an outer loop for rows and inner loops for leading spaces and stars to print an inverted and a standard right-aligned triangle.

```text
Pattern 01:
 *****
  ****
   ***
    **
     *

Pattern 02:
     *
    **
   ***
  ****
 *****
```

### Task 2 – Increasing and Decreasing Triangles
Prints a `#` pattern and a `*` pattern. Each one grows from 1 to 5 characters per row and then shrinks back from 5 to 1.

```text
Pattern 01:

#
##
###
####
#####
#####
####
###
##
#
```

(Pattern 02 is the same shape drawn with `*`.)

### Task 3 – Series Sum
Reads `n` and `x`, then adds the terms `x¹/1! + x²/2! + … + xⁿ/n!`. Inside the outer loop, two inner loops compute the power and the factorial of the current term.

```text
Enter the value for n: 4
Enter the value for x: 2
s = 6.00
```

### Task 4 – Perfect Numbers
A number is perfect when the sum of its proper divisors equals the number itself. The program searches upward from 2 with a `while` loop and stops after finding four perfect numbers, printing each divisor breakdown.

```text
6 is a perfect number
1+2+3=6
28 is a perfect number
1+2+4+7+14=28
496 is a perfect number
1+2+4+8+16+31+62+124+248=496
8128 is a perfect number
1+2+4+8+16+32+64+127+254+508+1016+2032+4064=8128
```

Finding 8128 takes a moment because every number is checked by trial division.

## 🚀 How to Run

```bash
gcc Task_01.c -o Task_01
./Task_01          # Linux / macOS
Task_01.exe        # Windows
```

## 👤 Author

**Raja Shaheryar Ahmed**
GitHub: [@Raja-Shaheryar-Ahmed](https://github.com/Raja-Shaheryar-Ahmed)
