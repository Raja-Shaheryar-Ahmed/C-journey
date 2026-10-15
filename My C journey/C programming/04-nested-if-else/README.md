# 04 - Nested If-Else

Decision making where one `if` sits inside another. Each inner check only runs when the outer one passes, which is how real-world rules (PIN, then balance, then limit) are written. The programs start with short examples and end with a full scholarship system.

## 📁 Programs

| File | Description | Input |
|---|---|---|
| `atm_system.c` | Secure ATM: checks PIN, account status, amount, balance, and withdrawal limit in five nested levels. | User input |
| `blood_donation.c` | Checks age first, then weight, to decide blood donation eligibility. | Fixed in code |
| `interview.c` | Written test first, then technical interview, to decide if a candidate is hired. | Fixed in code |
| `largest.c` | Finds the largest of three numbers using nested `if-else` (no `&&`). | Fixed in code |
| `leap_year.c` | Leap year check using three nested levels (4, then 100, then 400). | Fixed in code |
| `number_check.c` | Checks if a number is zero, positive, or negative, then whether it is even or odd. | Fixed in code |
| `scholarship_system.c` | Full scholarship decision from marks, attendance, income, failed subjects, and disciplinary record. | User input |

> **Fixed in code** means the values are written in the program (for example `int year = 2024;`). To test other values, change the variable and run it again.

## 🧠 Program Details

### atm_system.c
The ATM starts with a PIN of `1234`, a balance of Rs. 50,000, and a withdrawal limit of Rs. 20,000. Each check must pass before the next one runs.

1. PIN is correct
2. Account is active
3. Amount is greater than 0
4. Amount is within the balance
5. Amount is within the Rs. 20,000 limit

```
       SECURE ATM SYSTEM
Enter your PIN: 1234

PIN verified successfully!
Account is active.
Current balance: Rs. 50000

Enter amount to withdraw: Rs. 15000

Withdrawal successful!
Amount withdrawn: Rs. 15000
Remaining balance: Rs. 35000
        Thank you!
```

**Concepts:** five-level nesting, `scanf`, matching `else` for every `if`

---

### blood_donation.c
A person must be at least 18 years old. Only then is the weight checked (at least 50 kg). With `age = 22` and `weight = 55.5`:

```
Age requirement met (18 or older).
You are eligible to donate blood!
```

**Concepts:** two-level nesting, `int` and `float` comparison

---

### interview.c
A candidate must pass the written test (70 or more) before reaching the technical interview (80 or more). With scores of `78` and `85`:

```
Passed the written test!
Congratulations! You are hired.
```

**Concepts:** stage-by-stage decisions

---

### largest.c
Compares `a` and `b` first, then compares the winner with `c`. With `a = 10`, `b = 25`, `c = 15`:

```
25 is the largest number.
```

**Concepts:** nested comparison without logical operators

---

### leap_year.c
A year is a leap year if it is divisible by 4, except century years, which must also be divisible by 400. With `year = 2024`:

```
2024 is a Leap Year.
```

| Year | Divisible by 4 | By 100 | By 400 | Result |
|---|:---:|:---:|:---:|---|
| 2024 | Yes | No | n/a | Leap year |
| 1900 | Yes | Yes | No | Not a leap year |
| 2000 | Yes | Yes | Yes | Leap year |
| 2023 | No | n/a | n/a | Not a leap year |

**Concepts:** `%` operator, three-level nesting

---

### number_check.c
Zero is handled first. Any other number is checked for sign, and then for even or odd. With `num = -8`:

```
-8 is Negative.
It is also an Even number.
```

**Concepts:** `!=`, `%`, nesting inside both branches

---

### scholarship_system.c
Reads five values and gives a scholarship result.

```
Enter marks: 92
Enter attendance: 96
Enter monthly family income: 40000
Enter failed subjects: 0
Enter disciplinary record (1 = Yes, 0 = No): 0

FULL MERIT SCHOLARSHIP: 100%
```

**Step 1: Validation.** Marks and attendance must be between 0 and 100, income must be above 0, and failed subjects cannot be negative. Otherwise the program prints `Invalid Input`.

**Step 2: Immediate rejections.** A disciplinary record of `1`, or more than 2 failed subjects, rejects the application.

**Step 3: Students with no failed subjects.**

| Marks | Attendance | Income up to 50,000 | Up to 100,000 | Up to 150,000 | Above 150,000 |
|---|---|---|---|---|---|
| 90 or more | 95 or more | 100% | 75% | 50% | None |
| 90 or more | 85 to below 95 | 75% | 75% | 50% | None |
| 80 to below 90 | 90 or more | 75% | 75% | 50% | None |
| 80 to below 90 | 80 to below 90 | 50% | 50% | 50% | None |
| 70 to below 80 | 85 or more | 50% | 50% | 50% | None |

Attendance below the minimum in each row means `Rejected: Low Attendance`. Marks below 70 means `Rejected: Insufficient Marks`.

**Step 4: Students with 1 or 2 failed subjects.** The maximum scholarship is 50%. They need marks of at least 70 and attendance of at least 85, and income of at most 150,000. Otherwise they are rejected or get no scholarship.

**Concepts:** deeply nested `if-else` (about 10 levels), input validation, rule-based decisions

## 📌 Key Concepts

- A nested `if` runs only when the outer condition is true
- Every `else` belongs to the nearest unmatched `if`, so correct braces and indentation matter
- Order conditions from most restrictive to least, or validate first
- Deep nesting works but gets hard to read. Combining conditions with `&&` and `||` (as in `03-if-else`) can often make the same logic shorter

## 🛠️ Requirements

- A C compiler such as GCC, TDM-GCC, or MinGW.

## 🚀 How to Run

```bash
gcc atm_system.c -o atm_system
./atm_system          # Linux / macOS
atm_system.exe        # Windows
```

## ⬅️ ➡️ Navigation

[03 - If-Else](../03-if-else/) · [05 - Loops](../05-loops/)

## 👤 Author

**Raja Shaheryar Ahmed**
Roll No: P26-0051
GitHub: [@Raja-Shaheryar-Ahmed](https://github.com/Raja-Shaheryar-Ahmed)
