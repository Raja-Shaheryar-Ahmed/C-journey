# 07 - Switch Case

Choosing between many fixed options with `switch`. Each program reads a number or a character, picks the matching `case`, and uses `break` to stop. Bad input falls into `default` or is checked with `if` first.

## 📁 Programs

| File | Description | Concept Used |
|---|---|---|
| `simple_calculator.c` | Reads `a op b` and applies `+ - * /`. Blocks division by zero. | `switch` on a `char` |
| `day_of_week.c` | Converts a number 1-7 into a day name. | `switch` on an `int` |
| `grade_to_remarks.c` | Gives remarks for grades A to F (upper or lower case). | Stacked `case` labels |
| `month_days.c` | Prints how many days a month has in a given year. | Grouped `case`, leap year check |
| `vowel_checker_switch.c` | Tells whether a letter is a vowel or consonant. | Many `case` labels, `default` |
| `traffic_light_action.c` | Shows what to do for a red, yellow or green light. | `switch` on a `char` |
| `menu_driven_unit_converter.c` | Shows a menu and converts km, miles, C, F, kg, lb. | Menu with `switch` |

## 🧠 Program Details

#### simple_calculator.c
Reads the whole expression in one `scanf` (`"%f %c %f"`). The division case checks `b == 0` first.

```
Enter an expression (e.g. 8 / 2): 8 / 2
Result: 4.00
```
```
Enter an expression (e.g. 8 / 2): 5 / 0
Error: cannot divide by zero.
```

#### day_of_week.c
```
Enter a day number (1-7): 3
Wednesday
```

#### grade_to_remarks.c
Two labels share one block (`case 'A': case 'a':`), so both cases work. `scanf(" %c")` has a space to skip leftover whitespace.

```
Enter your grade (A, B, C, D or F): b
Remarks: Very good.
```

#### month_days.c
Months with 31 days and months with 30 days are grouped under one block each. February checks for a leap year: divisible by 4, but a century year (1900) must also be divisible by 400.

```
Enter month number (1-12): 2
Enter year: 2024
Month 2 of year 2024 has 29 days.
```
```
Enter month number (1-12): 2
Enter year: 1900
Month 2 of year 1900 has 28 days.
```

#### vowel_checker_switch.c
First checks that the input is a letter, then uses `switch` for the 10 vowels (upper and lower case).

```
Enter an alphabet: E
'E' is a vowel.
```
```
Enter an alphabet: 7
Error: '7' is not an alphabet.
```

#### traffic_light_action.c
```
Enter the light color (R = Red, Y = Yellow, G = Green): g
GREEN: Go.
```

#### menu_driven_unit_converter.c
Prints a menu, rejects choices outside 1-5, then asks for a value. Negative distances and weights are rejected (temperatures can be negative).

```
Enter your choice (1-5): 3
Enter the value: 100
100.00 C = 212.00 F
```
```
Enter your choice (1-5): 5
Enter the value: 70
70.00 kg = 154.32 lb
```

## 📌 Key Concepts

- `switch` compares one value against fixed `case` labels (`int` or `char` only)
- `break` stops the program from running into the next case (fall-through)
- Stacking labels (`case 'a': case 'A':`) lets several values share one block
- `default` handles anything that matches no case
- Use `if-else` instead when you need ranges (like marks 80-100) or float comparisons

## ⚠️ Input Notes

- If a user types letters where a number is expected, `scanf` fails and the variable keeps a garbage value. These programs do not handle that.
- Character cases need single quotes (`'A'`), not double quotes.

## 🛠️ Requirements

- A C compiler such as GCC, TDM-GCC, or MinGW.

## 🚀 How to Run

```bash
gcc simple_calculator.c -o simple_calculator
./simple_calculator          # Linux / macOS
simple_calculator.exe        # Windows
```

## ⬅️ ➡️ Navigation

[06 - Nested Loops](../06-nested-loops/) · [08 - Functions](../08-functions/)

## 👤 Author

**Raja Shaheryar Ahmed**
Roll No: P26-0051
GitHub: [@Raja-Shaheryar-Ahmed](https://github.com/Raja-Shaheryar-Ahmed)
