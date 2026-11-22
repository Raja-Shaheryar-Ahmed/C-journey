# 🧪 Programming Fundamentals – Lab 2

**Topics:** variables, data types, `sizeof()`, escape sequences, arithmetic formulas, formatted output with `printf`.

All values in this lab are hard-coded in the programs (no user input), so each program prints its report as soon as it runs.

## 📋 Tasks

| Task | File | What it does |
|---|---|---|
| 1 | [Task_01.c](Task_01.c) | Semester academic report with a credit-weighted average |
| 2 | [Task_02.c](Task_02.c) | Cafeteria receipt with 16% GST |
| 3 | [Task_03.c](Task_03.c) | Student profile card using different data types |
| 4 | [Task_04.c](Task_04.c) | Demonstrates C escape sequences |
| 5 | [Task_05.c](Task_05.c) | Prints the memory size of basic data types |
| 6 | [Task_06.c](Task_06.c) | Celsius to Fahrenheit and Kelvin conversion |
| 7 | [Task_07.c](Task_07.c) | Circle diameter, circumference and area |
| 8 | [Task_08.c](Task_08.c) | Final velocity and distance (kinematics) |
| 9 | [Task_09.c](Task_09.c) | Bank loan simple interest and monthly installment |
| 10 | [Task_10.c](Task_10.c) | Monthly salary slip with allowances and tax |

## 📝 Task Details

### Task 1 – Semester Academic Report
Stores marks and credit hours for three courses (Programming Fundamentals, Calculus, Applied Physics) and computes the weighted average: `Σ(marks × credit hours) / total credit hours`.

```text
	SEMESTER ACEDEMIC REPORT
Course		Credit hour	Obtained marks
----------------------------------------------
Programming fund.	3		88.00
Calculus		3		76.50
Applied physics		2		82.00
----------------------------------------------
Total credits:	8	Weighted average:	82.19
```

### Task 2 – Cafeteria Receipt
Calculates line subtotals (quantity × unit price) for tea, samosa and chicken roll, adds 16% GST and prints the grand total in PKR.

```text
Subtotal:			PKR 582.00
GST (16%):			PKR 93.12
Grand total:			PKR 675.12
```

### Task 3 – Student Profile Card
Uses `int`, `char`, `float` and `double` variables to print a profile card (batch year, section, test score, semester fee, motto).

### Task 4 – Escape Sequences
Prints a list showing how to output `\"`, `\\`, `\n`, `\t` and `%%` in a `printf` string.

### Task 5 – Size of Data Types
Uses `sizeof()` to print the memory used by `char`, `int`, `float` and `double`.

```text
char		'R'		1 byte(s)
int		17		4 byte(s)
float		356.7645	4 byte(s)
double		1100.48		8 byte(s)
```

### Task 6 – Temperature Conversion
Converts 25.78 °C to Fahrenheit (`C × 9/5 + 32`) and Kelvin (`C + 273.15`).

```text
Temperature in celsius: 	25.78
Temperature in fahrenheit: 	78.40
Temperature in kelvin: 		298.93
```

### Task 7 – Circle Geometry
For a radius of 5.7, calculates diameter (`2r`), circumference (`2πr`) and area (`πr²`) using π = 3.14.

### Task 8 – Kinematics
With initial velocity 12.5, acceleration 3.2 and time 6, calculates final velocity `vf = vi + at` and distance `s = vi·t + ½at²`.

```text
Calculated final velocity (vf):	31.70
Calculated distance (s):	132.60
```

### Task 9 – Bank Loan Summary
For a principal of 250,000 at 8.5% for 3 years, calculates simple interest `(P × R × T) / 100`, the total payable amount and the monthly installment over 36 months.

```text
Total accrued interest:	PKR 63750.00
Total payable amount:	313750.00
Monthly installment:	8715.28
```

### Task 10 – Monthly Salary Slip
Starting from a basic salary of 85,000, adds 20% house rent and 10% medical allowance, deducts 5% tax from the gross salary and prints the net payable salary.

```text
Gross salary:			PKR 110500.00
Tax deduction (5%):		PKR 5525.00
Net payable salary:	PKR 104975.00
```

## 🚀 How to Run

```bash
gcc Task_01.c -o Task_01
./Task_01          # Linux / macOS
Task_01.exe        # Windows
```

## 👤 Author

**Raja Shaheryar Ahmed**
GitHub: [@Raja-Shaheryar-Ahmed](https://github.com/Raja-Shaheryar-Ahmed)
