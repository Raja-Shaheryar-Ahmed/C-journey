# 08 - Functions

Splitting a program into small reusable pieces. Each program declares a function prototype above `main`, writes the function below it, and calls it. Some functions return a value (`int`, `long long`, `float`) and some are `void` and only print.

## 📁 Programs

| File | Description | Function Type |
|---|---|---|
| `even_odd_function.c` | Checks whether a number is even or odd. | Returns `int` (1 or 0) |
| `factorial_function.c` | Calculates `n!` for 0 to 20. | Returns `long long` |
| `prime_checker_function.c` | Checks whether a number is prime. | Returns `int` (1 or 0) |
| `power_function.c` | Calculates `base ^ exponent` without `math.h`. | Returns `long long` |
| `gcd_lcm_functions.c` | Finds the GCD and LCM of two numbers. | Two functions, one calls the other |
| `fibonacci_function.c` | Prints Fibonacci terms with a loop and with recursion. | `void` and recursive `int` |
| `digit_functions.c` | Counts, sums and reverses the digits of a number. | Three `int` functions |
| `pattern_function.c` | Prints a star triangle of size `n`. | `void` |
| `temperature_table_function.c` | Prints a Celsius to Fahrenheit table. | Returns `float` and `void` |

## 🧠 Program Details

#### even_odd_function.c
`is_even` returns `n % 2 == 0`, which is 1 (true) or 0 (false), so it can be used directly in an `if`.

```
Enter an integer: 7
7 is Odd.
```

#### factorial_function.c
Uses `long long` so values up to `20!` fit. Negative numbers and numbers above 20 are rejected.

```
Enter a number (0-20): 20
20! = 2432902008176640000
```
```
Enter a number (0-20): -1
Factorial is not defined for negative numbers.
```

#### prime_checker_function.c
Tests divisors from 2 while `i * i <= n`. A number below 2 is not prime.

```
Enter a number: 29
29 is a Prime number.
```
```
Enter a number: 49
49 is NOT a Prime number.
```

#### power_function.c
Multiplies `base` by itself `exp` times in a loop. Negative exponents are rejected.

```
Enter base: 2
Enter exponent: 10
2 ^ 10 = 1024
```

#### gcd_lcm_functions.c
`gcd` uses Euclid's method (`a % b` until the remainder is 0). `lcm` reuses `gcd` with `a / gcd * b`. Both numbers must be positive.

```
Enter two positive numbers: 12 18
GCD = 6
LCM = 36
```

#### fibonacci_function.c
Shows two versions side by side. `print_fibonacci` is a `void` loop version. `fib_recursive` is the only recursive function in this folder: it calls itself with smaller values and stops at the base cases 0 and 1. It is slow for large `n`.

```
Enter the number of terms: 8
Loop version     : 0 1 1 2 3 5 8 13 
Recursive version: 0 1 1 2 3 5 8 13 
```

#### digit_functions.c
Uses the same `% 10` and `/ 10` steps as the loops folder, but wrapped in three functions. Note that reversing `1200` gives `21`, because the number stores no leading zeros.

```
Enter a positive integer: 12345
Digits  : 5
Sum     : 15
Reversed: 54321
```

#### pattern_function.c
`print_triangle` is a `void` function with a nested loop: row `i` prints `i` stars.

```
Enter the size of the triangle: 4
* 
* * 
* * * 
* * * * 
```

#### temperature_table_function.c
`celsius_to_fahrenheit` returns a value, and `print_table` (void) calls it for every row. The step must be positive and start must not exceed end.

```
Enter start, end and step (in Celsius): 0 40 10

 Celsius | Fahrenheit
---------|-----------
       0 |      32.0
      10 |      50.0
      20 |      68.0
      30 |      86.0
      40 |     104.0
```

## 📌 Key Concepts

- A prototype (`int is_even(int n);`) tells the compiler about a function before `main` uses it
- `return` sends a value back to the caller; `void` functions return nothing
- Parameters are copies, so changing them inside the function does not change the caller's variables
- A function can call another function (`lcm` calls `gcd`, `print_table` calls `celsius_to_fahrenheit`)
- Recursion means a function calling itself, and it always needs a base case

## ⚠️ Input Notes

- `int` overflows for large results, so factorial and power use `long long`. `power` can still overflow with big inputs, such as `10 ^ 19`.
- The digit functions work for 0 and positive integers only.

## 🛠️ Requirements

- A C compiler such as GCC, TDM-GCC, or MinGW. No `-lm` is needed, because `math.h` is not used.

## 🚀 How to Run

```bash
gcc gcd_lcm_functions.c -o gcd_lcm_functions
./gcd_lcm_functions          # Linux / macOS
gcd_lcm_functions.exe        # Windows
```

## ⬅️ ➡️ Navigation

[07 - Switch Case](../07-switch-case/)

## 👤 Author

**Raja Shaheryar Ahmed**
Roll No: P26-0051
GitHub: [@Raja-Shaheryar-Ahmed](https://github.com/Raja-Shaheryar-Ahmed)
