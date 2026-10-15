# 03 - If-Else

Decision making in C using `if`, `else if`, and `else`, along with nested conditions and logical operators. The programs start with simple checks and grow into small real-world systems.

## 📁 Programs

| File | Description | Concepts |
|---|---|---|
| `even_odd.c` | Tells whether an integer is even or odd. | `if-else`, `%` |
| `positive_negative.c` | Tells whether a number is positive, negative, or zero. | `else if` |
| `largest_of_three.c` | Finds the largest of three numbers. | `&&`, `>=` |
| `leap_year.c` | Checks whether a year is a leap year. | `&&`, `\|\|` |
| `age_group.c` | Classifies an age as child, teenager, adult, or senior. | `else if` ladder |
| `grade_evaluator.c` | Converts a percentage into a grade (A+ to F) with a remark. | `else if` ladder |
| `calculator.c` | A calculator for `+`, `-`, `*`, `/` with division-by-zero protection. | `char` input, nested `if` |
| `vowel_consonant.c` | Checks whether a letter is a vowel or consonant. | `ctype.h`, `isalpha`, `tolower` |
| `triangle_classifier.c` | Validates three sides and classifies the triangle. | `&&`, `\|\|` |
| `coordinate_quadrant.c` | Finds where a point lies: origin, axis, or quadrant. | nested `if` |
| `ticket_pricing.c` | Calculates a ticket price from age and weekend surcharge. | `else if`, multiple checks |
| `online_shopping_discount.c` | Applies discounts, shipping fees, and a Prime perk to a cart total. | nested `if` |
| `atm_withdrawal.c` | Verifies a PIN, then checks amount, balance, and daily limit. | deeply nested `if` |
| `scholarship_eligibility.c` | Decides scholarship level from score, income, and attendance. | deeply nested `if` |
| `blood_donation_eligibility.c` | Checks blood donation eligibility using if-else conditions. | `if-else` |

## 🧠 Program Details

### Basic Decisions

#### even_odd.c
Uses `num % 2 == 0` to decide if a number is even.

```
Enter an integer: 7
7 is an odd number.
```

#### positive_negative.c
Checks whether a number is greater than, less than, or equal to zero.

```
Enter a number: -5
-5.00 is a negative number.
```

#### largest_of_three.c
Compares three numbers using `&&` and prints the largest.

```
Enter three numbers: 4 9 2
9.00 is the largest number.
```

#### leap_year.c
A year is a leap year if it is divisible by 4 but not by 100, unless it is also divisible by 400.

```
Enter a year: 2024
2024 is a leap year! (366 days)
```

---

### Else-If Ladders

#### age_group.c
Rejects unrealistic ages (below 0 or above 125), then picks a category.

| Age | Category |
|---|---|
| 0 to 12 | Child |
| 13 to 19 | Teenager |
| 20 to 59 | Adult |
| 60 and above | Senior Citizen |

```
Enter your age: 15
Category: Teenager (Navigating high school and growth)
```

#### grade_evaluator.c
Converts a percentage to a grade and a remark.

| Marks | Grade |
|---|---|
| 90 to 100 | A+ |
| 80 to 89 | A |
| 70 to 79 | B |
| 60 to 69 | C |
| 50 to 59 | D |
| Below 50 | F |

```
Enter your percentage (0-100): 85
Grade: A  | Remark: Excellent work!
```

---

### Operators and Characters

#### calculator.c
Takes an operator and two numbers. Division by zero is caught with a nested `if`, and an unknown operator shows an error.

```
Enter an operator (+, -, *, /): +
Enter two operands: 12 3
Result: 12.00 + 3.00 = 15.00
```

#### vowel_consonant.c
Uses `isalpha()` to reject non-letters, then `tolower()` so uppercase and lowercase letters are treated the same.

```
Enter a character: E
'E' is a Vowel.
```

#### triangle_classifier.c
A triangle is valid when the sum of any two sides is greater than the third. A valid one is then classified by its equal sides.

```
Enter three sides of a triangle: 5 5 8
Valid triangle! Classification: Isosceles Triangle (Two sides equal).
```

---

### Nested Conditions

#### coordinate_quadrant.c
Checks the origin first, then the axes, then uses the signs of `x` and `y` to find the quadrant.

```
Enter coordinates (x y): 3 4
The point (3.0, 4.0) is in Quadrant I (+, +).
```

#### ticket_pricing.c
The base price is $10.

| Rule | Effect |
|---|---|
| Age under 5 | Free |
| Age 5 to 12 | 50% off |
| Age 65 and above | 30% off |
| Weekend (and not free) | +$3 surcharge |

```
Enter your age: 8
Is it a weekend? (Enter 1 for Yes, 0 for No): 1
Child discount applied (50% off).
Weekend surcharge of $3.00 added.
Final Ticket Price: $8.00
```

#### online_shopping_discount.c
Discounts and fees depend on the cart total and Prime membership.

| Cart Total | Discount | Prime Member | Non-Prime |
|---|---|---|---|
| $100 and above | 15% off | extra $10 off | no extra |
| $50 to $99.99 | 10% off | free shipping | +$5 shipping |
| Under $50 | none | free shipping | +$10 shipping |

```
Enter your total cart value ($): 120
Are you a Prime Member? (Enter 1 for Yes, 0 for No): 1
Qualifies for high-tier volume discount (15% off).
Prime Perk: Extra $10 loyalty bonus applied!
Final Checkout Amount: $92.00
```

#### atm_withdrawal.c
A step-by-step check: PIN, then valid amount, then enough balance, then within the daily limit. The program starts with a balance of $5000, a PIN of `1234`, and a daily limit of $2000.

```
Welcome to the ATM
Enter your 4-digit PIN: 1234
PIN correct! Access granted.
Enter amount to withdraw: $1500
Please collect your cash: $1500.00
Remaining Balance: $3500.00
```

#### scholarship_eligibility.c
The decision goes through three levels.

1. Exam score must be at least 80%.
2. Family income decides the tier: under $30,000 goes on to the attendance check, up to $60,000 gets a partial scholarship, and above that is not eligible.
3. For the lowest income tier, attendance of at least 85% gives a full scholarship.

```
Enter exam score percentage (0-100): 85
Enter annual family income ($): 25000
Enter your overall class attendance percentage: 90
Status: APPROVED for Full Scholarship (100% tuition waiver)!
```

#### blood_donation_eligibility.c
Checks whether a person can donate blood by testing the entered details with `if-else` conditions.

## 📌 Key Concepts

- `if`, `else if`, `else` and how the order of conditions matters
- Comparison operators: `==`, `!=`, `<`, `>`, `<=`, `>=`
- Logical operators: `&&` (and), `||` (or), `!` (not)
- Nested `if` statements
- Input validation (rejecting impossible values)

## 🛠️ Requirements

- A C compiler such as GCC, TDM-GCC, or MinGW.

## 🚀 How to Run

```bash
gcc even_odd.c -o even_odd
./even_odd          # Linux / macOS
even_odd.exe        # Windows
```

## ⬅️ ➡️ Navigation

[02 - Data Types](../02-data-types/) · [04 - Nested If-Else](../04-nested-if-else/)

## 👤 Author

**Raja Shaheryar Ahmed**
Roll No: P26-0051
GitHub: [@Raja-Shaheryar-Ahmed](https://github.com/Raja-Shaheryar-Ahmed)
