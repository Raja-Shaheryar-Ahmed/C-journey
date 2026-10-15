# 02 - Data Types

Everything about how C stores data: basic types, sizes and limits, constants, enums, and converting between types.

## 📁 Programs

| File | Description |
|---|---|
| `basic_types.c` | Prints an `int`, `float`, `double`, and `char` side by side. |
| `boolean_type.c` | Uses `bool` from `<stdbool.h>` and shows that `true` is `1` and `false` is `0`. |
| `char_and_ascii.c` | Shows that a `char` is also a number (its ASCII value) and does arithmetic on it. |
| `constants_and_literals.c` | Defines constants with `#define` and `const`. |
| `enums_and_typedef.c` | Creates a custom type with `typedef` and a list of named values with `enum`. |
| `explicit_type_casting.c` | Shows how an explicit cast fixes integer division. |
| `float_double_precision.c` | Compares how many decimal digits `float` and `double` can hold. |
| `implicit_type_casting.c` | Shows C automatically converting `int` to `float` in an expression. |
| `integer_modifiers.c` | Uses `short`, `long`, `long long`, and `unsigned` integers. |
| `type_limits.c` | Prints the minimum and maximum values of types using `<limits.h>` and `<float.h>`. |

## 🧠 Program Details

### basic_types.c
Prints one variable of each basic type.

```
Integer (int): 22
Float (float): 98.60
Double (double): 3.1415926535
Character (char): A
```

**Concepts:** `int`, `float`, `double`, `char`, `%d`, `%.2f`, `%.10lf`, `%c`

---

### boolean_type.c
Uses `true` and `false` from `<stdbool.h>` and an `if` check.

```
Coding is fun!
Value of true: 1
Value of false: 0
```

**Concepts:** `bool`, `stdbool.h`, `if`

---

### char_and_ascii.c
Prints a character and its ASCII number, then adds 1 to get the next character.

```
Character: A
ASCII Value (as integer): 65
Next Character: B
```

**Concepts:** `char`, ASCII values, arithmetic on characters

---

### constants_and_literals.c
Defines a macro constant with `#define` and a read-only variable with `const`.

```
Days in a week: 7
Acceleration due to gravity: 9.81 m/s^2
```

**Concepts:** `#define`, `const`, constants vs. variables

---

### enums_and_typedef.c
Creates an alias `ulong` for `unsigned long`, and an `enum Day` that starts at `SUN = 1`, so `WED` is `4`.

```
World Population: 8000000000
Day number of Wednesday: 4
```

**Concepts:** `typedef`, `enum`, `unsigned long`

> **Note:** On Windows compilers (MinGW / TDM-GCC), `unsigned long` is only 32 bits, so `8000000000` is too big and the population prints a wrapped-around value. On Linux/macOS it prints correctly. Using `unsigned long long` with `%llu` works on every platform.

---

### explicit_type_casting.c
Calculates a percentage from `450` out of `500` two ways: without a cast (integer division gives `0`) and with `(float)` (keeps the decimals).

```
Wrong Percentage (Truncated): 0.00%
Correct Percentage (Explicit Cast): 90.00%
```

**Concepts:** integer division, explicit casting `(float)`

---

### float_double_precision.c
Stores π in both a `float` and a `double` and prints 15 decimal places. The `float` loses accuracy after about 7 digits, while the `double` stays accurate to about 15.

```
Float Pi (6-7 digits): 3.141592741012573
Double Pi (15 digits): 3.141592653589793
```

**Concepts:** `float` vs. `double` precision

---

### implicit_type_casting.c
Adds an `int` and a `float`. C automatically converts the `int` to `float` first.

```
Integer value: 10
Float value: 5.50
Result of int + float: 15.50 (Type: float)
```

**Concepts:** implicit (automatic) type conversion

---

### integer_modifiers.c
Prints values stored in `short`, `long`, `long long`, and `unsigned int`.

```
Short: 32767
Long: 100000
Long Long: 10000000000
Unsigned Int: 4000000000
```

**Concepts:** `short`, `long`, `long long`, `unsigned`, `%ld`, `%lld`, `%u`

---

### type_limits.c
Prints the smallest and largest values for `int`, `unsigned int`, and `float` using constants from the standard headers.

```
Minimum Int: -2147483648
Maximum Int: 2147483647
Maximum Unsigned Int: 4294967295
Minimum Float: 1.175494E-38
Maximum Float: 3.402823E+38
```

**Concepts:** `limits.h`, `float.h`, `INT_MIN`, `INT_MAX`, `UINT_MAX`, `FLT_MIN`, `FLT_MAX`, `%E`

## 📌 Quick Reference

| Type | Specifier | Typical Use |
|---|---|---|
| `int` | `%d` | Whole numbers |
| `float` | `%f` | Decimals (about 7 digits) |
| `double` | `%lf` | Decimals (about 15 digits) |
| `char` | `%c` | A single character |
| `long` | `%ld` | Larger whole numbers |
| `long long` | `%lld` | Very large whole numbers |
| `unsigned int` | `%u` | Non-negative whole numbers |

## 🛠️ Requirements

- A C compiler such as GCC, TDM-GCC, or MinGW.

## 🚀 How to Run

```bash
gcc basic_types.c -o basic_types
./basic_types          # Linux / macOS
basic_types.exe        # Windows
```

## ⬅️ ➡️ Navigation

[01 - Basics](../01-basics/) · [03 - If-Else](../03-if-else/)

## 👤 Author

**Raja Shaheryar Ahmed**
Roll No: P26-0051
GitHub: [@Raja-Shaheryar-Ahmed](https://github.com/Raja-Shaheryar-Ahmed)
