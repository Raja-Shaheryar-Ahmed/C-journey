# 05 - Loops

Repeating work with `for` and `while` loops. Most programs here take an integer and process it digit by digit, using `% 10` to get the last digit and `/ 10` to remove it. They also cover running sums, factorials, and the Fibonacci series.

## 📁 Programs

| File | Description | Loop Used |
|---|---|---|
| `alternate_sign_sum.c` | Calculates 1 - 2 + 3 - 4 + ... up to `n`. | `for` |
| `count_digits.c` | Counts how many digits a number has. | `while` |
| `factorial_calculator.c` | Calculates the factorial of a number. | `for` |
| `fibonacci_series.c` | Prints the first `n` Fibonacci numbers. | `for` |
| `max_digit.c` | Finds the largest digit in a number. | `while` |
| `palindrome_number.c` | Checks whether a number reads the same forwards and backwards. | `while` |
| `print_factorial_series.c` | Prints 1!, 2!, 3! ... up to `n!`. | `for` |
| `reverse_and_sum.c` | Prints the digits in reverse and their sum. | `while` |
| `reverse_number.c` | Prints the digits of a number in reverse order. | `while` |
| `sum_of_digits.c` | Adds up all the digits of a number. | `while` |

## 🧠 Program Details

### Number Series

#### alternate_sign_sum.c
Adds odd numbers and subtracts even numbers from 1 to `n`, so the sum goes 1 - 2 + 3 - 4 and so on.

```
Enter any integer number : 5

Sum is: 3
```
(1 - 2 + 3 - 4 + 5 = 3)

**Concepts:** `for` loop, `if-else` inside a loop, `%` to test odd or even

#### fibonacci_series.c
Prints the first `n` terms, where each term is the sum of the two before it. The first two terms (`0` and `1`) are printed directly with `continue`.

```
Enter the number of terms: 7

Fibonacci Series: 0 1 1 2 3 5 8
```

**Concepts:** `for` loop, `continue`, swapping values to move forward

---

### Factorials

#### factorial_calculator.c
Multiplies 1 × 2 × 3 × ... × n. Zero is handled first because 0! is 1.

```
Enter any integer number : 5

The factorial of 5 is: 120
```

#### print_factorial_series.c
Prints the factorial at every step instead of only the final answer.

```
Enter any integer number : 5

1! = 1
2! = 2
3! = 6
4! = 24
5! = 120
```

**Concepts:** `for` loop, running product (`fact = fact * i`)

> **Note:** Both programs store the result in an `int`, which overflows after `12!` (479001600). For larger values, use `long long` with `%lld`.

---

### Digit Extraction

These programs all use the same two steps inside a `while (n > 0)` loop:

| Step | Code | What it does |
|---|---|---|
| Get the last digit | `ld = n % 10;` | `1234 % 10` gives `4` |
| Remove the last digit | `n = n / 10;` | `1234 / 10` gives `123` |

#### count_digits.c
Adds 1 to a counter each time a digit is removed. Zero is a special case and counts as 1 digit.

```
Enter any integer number : 12345

Total number of digits: 5
```

#### sum_of_digits.c
Adds each extracted digit to a running total.

```
Enter any integer number : 456

Sum of the digits: 15
```

#### max_digit.c
Keeps the largest digit seen so far.

```
Enter any integer number : 4825

The maximum digit is: 8
```

#### reverse_number.c
Prints each digit as it is extracted, so the number appears reversed.

```
Enter any integer number : 1234
Reversed number: 4321
```

> **Note:** The digits are printed one at a time, not stored as a number. So `1200` prints as `0021`, with the zeros kept.

#### reverse_and_sum.c
Prints the reversed digits and also adds them up in the same loop.

```
Enter any integer number : 1234
Reversed digits: 4321
Sum is: 10
```

#### palindrome_number.c
Builds the reversed number with `reversed = (reversed * 10) + ld`, then compares it to the original number that was saved first.

```
Enter any integer number : 121

121 is a Palindrome number.
```

```
Enter any integer number : 123

123 is NOT a Palindrome number.
```

**Concepts:** `while` loop, `%` and `/`, saving the original value before changing it

## 📌 Key Concepts

- `for` loops when the number of repeats is known, `while` loops when it depends on a condition
- The loop has three parts: start, condition, and update
- Running totals (`sum`, `fact`, `count`) that start before the loop and change inside it
- `continue` to skip the rest of one pass
- Digit extraction with `% 10` and `/ 10`

## ⚠️ Input Notes

- The digit programs only work for positive integers. For `0` or negative numbers, the `while (n > 0)` loop doesn't run (only `count_digits.c` handles `0` as a special case).
- Factorial values overflow `int` after `12!`.

## 🛠️ Requirements

- A C compiler such as GCC, TDM-GCC, or MinGW.

## 🚀 How to Run

```bash
gcc fibonacci_series.c -o fibonacci_series
./fibonacci_series          # Linux / macOS
fibonacci_series.exe        # Windows
```

## ⬅️ ➡️ Navigation

[04 - Nested If-Else](../04-nested-if-else/) · [06 - Nested Loops](../06-nested-loops/)

## 👤 Author

**Raja Shaheryar Ahmed**
Roll No: P26-0051
GitHub: [@Raja-Shaheryar-Ahmed](https://github.com/Raja-Shaheryar-Ahmed)
