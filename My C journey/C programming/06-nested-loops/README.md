# 06 - Nested Loops

Pattern printing with loops inside loops. The **outer loop** controls the rows, the **inner loop** controls what is printed in each row, and a `printf("\n")` after the inner loop moves to the next line. Most programs take `n` from the user and draw a shape of that size.

## 📁 Programs

| File | Pattern | Input |
|---|---|---|
| `print_rectangle.c` | Solid rectangle of stars | rows, columns |
| `hollow_rectangle.c` | Rectangle with only the border | rows, columns |
| `right_triangle.c` | Star triangle growing downwards | `n` |
| `inverted_right_triangle.c` | Star triangle shrinking downwards (loops count down) | `n` |
| `inverted_triangle_alt.c` | Same inverted triangle, using the formula `n + 1 - i` | `n` |
| `inverted_triangle_alt_02.c` | Same inverted triangle, using a shrinking variable | `n` |
| `number_grid.c` | `n × n` grid of numbers | `n` |
| `number_triangle.c` | Triangle of numbers 1 to `i` in each row | `n` |
| `inverted_number_triangle.c` | Inverted number triangle (loops count down) | `n` |
| `inverted_number_triangle_alt.c` | Same inverted number triangle, using `n + 1 - i` | `n` |
| `floyds_triangle.c` | Floyd's triangle: 1, 2, 3, ... continuing across rows | `n` |
| `odd_triangle.c` | Odd-number triangle using the formula `2 * j - 1` | `n` |
| `odd_triangle_alt.c` | Same odd-number triangle, using a variable that resets each row | `n` |
| `odd_floyds_triangle.c` | Floyd's triangle that continues with odd numbers | `n` |
| `alphabet_grid_variable.c` | `n × n` grid of letters | `n` |
| `alphabet_triangle.c` | Triangle of letters A, B, C, ... | `n` |
| `alternating_rows_triangle_alphabets_and_numbers.c` | Triangle with number rows and letter rows alternating | `n` |
| `plus_sign_variable.c` | `+` shape made of stars | `n` (odd) |
| `x_cross_pattern.c` | `X` shape made of stars | `n` (odd) |

## 🧠 Program Details

### Rectangles and Grids

#### print_rectangle.c
Prints `*` across every column of every row.

```
Enter the rows: 3
Enter the columns: 5
*****
*****
*****
```

**Concepts:** two loops, one for rows and one for columns

#### hollow_rectangle.c
A star is printed only on the border: the first row, the last row, the first column, or the last column. Every other position gets a space.

```
Enter the number of rows: 4
Enter the number of columns: 6
******
*    *
*    *
******
```

**Concepts:** `if` inside nested loops, `||` condition for edges

#### number_grid.c
Prints the numbers 1 to `n` across each row, with `n` rows.

```
Enter the value for n: 4
1234
1234
1234
1234
```

#### alphabet_grid_variable.c
Like the number grid, but with letters. The letter value starts at `65` (ASCII for `A`) at the start of every row and goes up by 1 for each column.

```
Enter the value for n: 4
A B C D
A B C D
A B C D
A B C D
```

**Concepts:** ASCII values, printing a number as a character with `%c`

---

### Star Triangles

All four programs below draw the same shapes. They are different ways of solving the same problem.

#### right_triangle.c
Row `i` prints `i` stars.

```
Enter the value for n: 4
*
**
***
****
```

#### Inverted triangle (three ways)

```
Enter the value for n: 4
****
***
**
*
```

| File | How it works |
|---|---|
| `inverted_right_triangle.c` | The outer loop counts **down** from `n` to 1, and the inner loop prints stars from `i` down to 1. |
| `inverted_triangle_alt.c` | The outer loop counts **up**, and the inner loop runs while `j <= n + 1 - i`, so each row is shorter by one. |
| `inverted_triangle_alt_02.c` | A separate variable `a` starts at `n` and goes down by 1 after each row (`a--`). The inner loop prints `a` stars. |

**Concepts:** counting down with `i--`, deriving the row length from a formula, a shrinking variable

---

### Number Triangles

#### number_triangle.c
Row `i` prints the numbers 1 to `i`.

```
Enter the value for n: 4
1
1 2
1 2 3
1 2 3 4
```

#### Inverted number triangle (two ways)

```
Enter the value for n: 4
1 2 3 4
1 2 3
1 2
1
```

| File | How it works |
|---|---|
| `inverted_number_triangle.c` | The outer loop counts down from `n` to 1, and the inner loop prints 1 to `i`. |
| `inverted_number_triangle_alt.c` | The outer loop counts up, and the inner loop prints 1 to `n + 1 - i`. |

#### floyds_triangle.c
**Floyd's triangle** keeps one counter `a` that never resets, so the numbers continue from one row to the next.

```
Enter n: 4
 1
 2 3
 4 5 6
 7 8 9 10
```

**Concepts:** a counter declared outside the loops, so it keeps its value

---

### Odd Number Patterns

#### odd_triangle.c
Prints the odd numbers 1, 3, 5, ... in each row, using the formula `2 * j - 1` for column `j`.

```
Enter the value for n: 4
1
1 3
1 3 5
1 3 5 7
```

#### odd_triangle_alt.c
Same output, but uses a variable `a` that is set to 1 at the start of every row and goes up by 2 after each number.

#### odd_floyds_triangle.c
Like Floyd's triangle, but the counter goes up by 2 and never resets, so the odd numbers continue across rows.

```
Enter n: 4
 1
 3 5
 7 9 11
 13 15 17 19
```

**Concepts:** formula vs. variable approaches, `a += 2`

---

### Alphabet Patterns

#### alphabet_triangle.c
Row `i` prints `i` letters, starting from `A` again in every row.

```
Enter the value for n: 4
A
A B
A B C
A B C D
```

#### alternating_rows_triangle_alphabets_and_numbers.c
The row number decides what is printed. Odd rows print numbers (1, 2, 3, ...) and even rows print letters (A, B, C, ...). Each row has `i` items.

```
Enter the value for n: 5
1
A B
1 2 3
A B C D
1 2 3 4 5
```

**Concepts:** `if-else` inside a loop, `%` to test odd or even rows, `%d` and `%c`

---

### Shapes

#### plus_sign_variable.c
Draws a `+` using stars in the middle row and the middle column. The middle position is found with `mid = n / 2 + 1`. This only works as a centered plus when `n` is odd.

```
Enter the value for n (use an odd number): 5
  *
  *
*****
  *
  *
```

**Concepts:** integer division, finding the center, `||` condition

#### x_cross_pattern.c
Draws an `X`. A star is printed when the position is on one of the two diagonals:

| Condition | Diagonal |
|---|---|
| `i == j` | Top-left to bottom-right |
| `i + j == n + 1` | Top-right to bottom-left |

```
Enter n (use an odd number for a centered intersection): 5
*   *
 * * 
  *  
 * * 
*   *
```

**Concepts:** row and column relationships, `||` condition

## 📌 Key Concepts

- The outer loop is for rows, the inner loop is for columns
- `printf("\n")` goes **after** the inner loop, once per row
- A variable declared **outside** the loops keeps its value across rows (Floyd's triangle). A variable declared **inside** the outer loop resets every row (odd triangle, alphabet patterns)
- The same pattern can be built in different ways: counting down, using a formula like `n + 1 - i`, or using a shrinking variable
- Conditions on `i` and `j` (`i == j`, `i + j == n + 1`, `i == mid`) let you draw shapes by choosing between a star and a space
- A number can be printed as a character with `%c` (`65` prints `A`)

## ⚠️ Notes

- For letter patterns, keep `n` at 26 or less. Beyond `Z`, the ASCII values continue into other symbols.
- For `plus_sign_variable.c` and `x_cross_pattern.c`, use an **odd** `n` so the center lines up.

## 🛠️ Requirements

- A C compiler such as GCC, TDM-GCC, or MinGW.

## 🚀 How to Run

```bash
gcc x_cross_pattern.c -o x_cross_pattern
./x_cross_pattern          # Linux / macOS
x_cross_pattern.exe        # Windows
```

## ⬅️ Navigation

[05 - Loops](../05-loops/) · 07 - Arrays *(coming soon)*

## 👤 Author

**Raja Shaheryar Ahmed**
Roll No: P26-0051
GitHub: [@Raja-Shaheryar-Ahmed](https://github.com/Raja-Shaheryar-Ahmed)
