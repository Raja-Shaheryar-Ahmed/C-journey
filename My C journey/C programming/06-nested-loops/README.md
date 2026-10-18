# 06 - Nested Loops

Pattern printing with loops inside loops. The **outer loop** controls the rows, the **inner loops** control what is printed in each row, and a `printf("\n")` after the inner loops moves to the next line. Most programs take `n` from the user and draw a shape of that size.

## 📁 Programs

| File | Pattern | Input |
|---|---|---|
| `print_rectangle.c` | Solid rectangle of stars | rows, columns |
| `hollow_rectangle.c` | Rectangle with only the border | rows, columns |
| `right_triangle.c` | Star triangle growing downwards | `n` |
| `right_aligned_star.c` | Star triangle aligned to the right | `n` |
| `inverted_right_triangle.c` | Star triangle shrinking downwards (loops count down) | `n` |
| `inverted_triangle_alt.c` | Same inverted triangle, using the formula `n + 1 - i` | `n` |
| `inverted_triangle_alt_02.c` | Same inverted triangle, using a shrinking variable | `n` |
| `pyramid_star.c` | Centered star pyramid | `n` |
| `star_diamond.c` | Diamond made of stars (pyramid + inverted pyramid) | `n` |
| `number_grid.c` | `n × n` grid of numbers | `n` |
| `number_triangle.c` | Triangle of numbers 1 to `i` in each row | `n` |
| `inverted_number_triangle.c` | Inverted number triangle (loops count down) | `n` |
| `inverted_number_triangle_alt.c` | Same inverted number triangle, using `n + 1 - i` | `n` |
| `floyds_triangle.c` | Floyd's triangle: 1, 2, 3, ... continuing across rows | `n` |
| `odd_triangle.c` | Odd-number triangle using the formula `2 * j - 1` | `n` |
| `odd_triangle_alt.c` | Same odd-number triangle, using a variable that resets each row | `n` |
| `odd_floyds_triangle.c` | Floyd's triangle that continues with odd numbers | `n` |
| `binary_triangle.c` | Triangle of alternating 1s and 0s | `n` |
| `number_pyramid.c` | Centered pyramid of numbers (1 to `2i - 1`) | `n` |
| `number_sequence_pattern.c` | Centered pyramid where each row counts up twice (`1..i`, then `1..i-1`) | `n` |
| `alphabet_grid_variable.c` | `n × n` grid of letters | `n` |
| `alphabet_triangle.c` | Triangle of letters A, B, C, ... | `n` |
| `right_alphabet_triangle.c` | Letter triangle aligned to the right | `n` |
| `alphabet_pyramid.c` | Centered pyramid of letters (A to the `2i - 1`th letter) | `n` |
| `alphabet_sequence_pattern.c` | Centered pyramid where each row's letters count up twice | `n` |
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

#### right_triangle.c
Row `i` prints `i` stars.

```
Enter the value for n: 4
*
**
***
****
```

#### right_aligned_star.c
Two inner loops per row. The first prints `n - i` spaces to push the stars to the right, and the second prints `i` stars.

```
Enter the value of N ---> (lines): 4
   *
  **
 ***
****
```

**Concepts:** two inner loops in one row (spaces, then stars), right alignment with `n - i`

#### Inverted triangle (three ways)

The three programs below draw the same shape. They are different ways of solving the same problem.

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

### Pyramids and Diamond

A pyramid is centered by printing `n - i` spaces first, then an **odd** number of characters, `2 * i - 1`, so every row grows by two.

#### pyramid_star.c
Row `i` prints `n - i` spaces and then `2 * i - 1` stars (1, 3, 5, ...).

```
Enter the value of N ---> (lines): 4
   *
  ***
 *****
*******
```

**Concepts:** centering with leading spaces, the odd-number formula `2 * i - 1`

#### star_diamond.c
Two sets of loops. The **upper half** is the star pyramid, with `n` rows. The **lower half** is an inverted pyramid, with `n - 1` rows, where the outer loop counts down from `n - 1` to 1. The widest row is printed only once.

```
Enter the value of N ---> (lines for upper half): 3
  *
 ***
*****
 ***
  *
```

**Concepts:** two separate outer loops in one program, counting down with `i--`, total rows = `2n - 1`

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

#### binary_triangle.c
Each row prints `i` values that alternate between `1` and `0`. The starting value depends on the row: **odd rows start with 1** and **even rows start with 0**. A variable `a` is set at the start of every row with `(i % 2 != 0) ? 1 : 0`, and after each print it is flipped with `a = 1 - a`.

```
Enter the value of N ---> (lines): 4
 1
 0  1
 1  0  1
 0  1  0  1
```

**Concepts:** the ternary operator `? :`, `%` to test odd or even, flipping a value with `1 - a`, a variable that resets every row

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

### Number Pyramids

#### number_pyramid.c
Row `i` prints `n - i` spaces, then the numbers `1` up to `2 * i - 1`. A variable `m` is set to 1 at the start of every row and goes up by 1 after each number.

```
Enter the value of N ---> (lines): 4
   1
  123
 12345
1234567
```

**Concepts:** pyramid shape with numbers, `m` reset inside the outer loop

#### number_sequence_pattern.c
Each row has **two counting sequences** one after the other. The first prints `1` up to `i`. The second prints `1` up to `i - 1`. Each sequence has its own variable (`m` and `o`), and both are set to 1 at the start of the row.

```
Enter the value of N ---> (lines): 4
   1
  121
 12312
1234123
```

**Concepts:** three inner loops in one row (spaces, first sequence, second sequence), a separate counter for each sequence

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

#### right_alphabet_triangle.c
The right-aligned version of the letter triangle. Row `i` prints `n - i` spaces, then `i` letters starting from `A`. The variable `m` starts at `65` in every row.

```
Enter the value of N ---> (lines): 4
   A
  AB
 ABC
ABCD
```

**Concepts:** right alignment with spaces, ASCII values, `%c`

#### alphabet_pyramid.c
The letter version of the number pyramid. Row `i` prints `n - i` spaces, then `2 * i - 1` letters starting from `A`.

```
Enter the value of N ---> (lines): 4
   A
  ABC
 ABCDE
ABCDEFG
```

**Concepts:** pyramid shape with letters, `m` reset to `65` every row

#### alphabet_sequence_pattern.c
The letter version of `number_sequence_pattern.c`. Each row prints the letters `A` up to the `i`th letter, and then `A` up to the `(i - 1)`th letter. Two variables (`m` and `o`) both start at `65` in every row.

```
Enter the value of N ---> (lines): 4
   A
  ABA
 ABCAB
ABCDABC
```

**Concepts:** two sequences in one row, separate counters, ASCII values

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

- The outer loop is for rows, the inner loops are for what is printed in each row
- `printf("\n")` goes **after** the inner loops, once per row
- A row can have **more than one inner loop**: one for spaces and one for the characters (right-aligned shapes and pyramids), or even three (sequence patterns)
- Leading spaces use `n - i`. A centered pyramid prints `2 * i - 1` characters, which gives the odd numbers 1, 3, 5, ...
- A variable declared **outside** the loops keeps its value across rows (Floyd's triangle). A variable declared **inside** the outer loop resets every row (odd triangle, alphabet and number pyramids, binary triangle)
- The same pattern can be built in different ways: counting down, using a formula like `n + 1 - i`, or using a shrinking variable
- A program can use **two outer loops** one after the other, such as the upper and lower halves of the diamond
- Conditions on `i` and `j` (`i == j`, `i + j == n + 1`, `i == mid`) let you draw shapes by choosing between a star and a space
- `i % 2` tells odd rows from even rows, and `a = 1 - a` flips a value between 0 and 1
- A number can be printed as a character with `%c` (`65` prints `A`)

## ⚠️ Notes

- For letter triangles, keep `n` at 26 or less. Beyond `Z`, the ASCII values continue into other symbols.
- For `alphabet_pyramid.c`, row `n` prints `2n - 1` letters, so keep `n` at 13 or less. For `alphabet_sequence_pattern.c`, keep `n` at 13 or less as well.
- For `number_pyramid.c`, keep `n` at 5 or less. Row `n` prints the numbers up to `2n - 1`, and numbers above 9 have two digits, which breaks the shape. For `number_sequence_pattern.c`, keep `n` at 9 or less.
- For `plus_sign_variable.c` and `x_cross_pattern.c`, use an **odd** `n` so the center lines up.
- For `star_diamond.c`, `n` is the number of rows in the **upper half**. The whole diamond has `2n - 1` rows.

## 🛠️ Requirements

- A C compiler such as GCC, TDM-GCC, or MinGW.

## 🚀 How to Run

```bash
gcc pyramid_star.c -o pyramid_star
./pyramid_star          # Linux / macOS
pyramid_star.exe        # Windows
```

## ⬅️ Navigation

[05 - Loops](../05-loops/) · 07 - Arrays *(coming soon)*

## 👤 Author

**Raja Shaheryar Ahmed**
Roll No: P26-0051
GitHub: [@Raja-Shaheryar-Ahmed](https://github.com/Raja-Shaheryar-Ahmed)
