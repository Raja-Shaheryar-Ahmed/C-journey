# 🧪 Programming Fundamentals – Lab 5

**Topics:** loops (`for`, `while`, `do-while`), `break`, counters and accumulators, menu-driven programs.

## 📋 Tasks

| Task | File | Loop used | What it does |
|---|---|---|---|
| 1 | [Task_01.c](Task_01.c) | `for` | Cricket over: total runs, sixes and dot balls |
| 2 | [Task_02.c](Task_02.c) | `while` | Months needed to save for a laptop |
| 3 | [Task_03.c](Task_03.c) | `do-while` | ATM PIN check with 3 attempts |
| 4 | [Task_04.c](Task_04.c) | `for` | Class result: pass/fail count, highest and average |
| 5 | [Task_05.c](Task_05.c) | `do-while` | Cafeteria menu with billing and discount |

## 📝 Task Details

### Task 1 – Cricket Over
Reads the runs scored on each of 6 balls, then prints the total runs, the number of sixes and the number of dot balls (0 runs).

```text
Ball 1 runs: 6
Ball 2 runs: 0
Ball 3 runs: 4
Ball 4 runs: 0
Ball 5 runs: 1
Ball 6 runs: 6
Total runs: 17
Boundaries : 2
Dot balls: 2
```

### Task 2 – Laptop Savings Planner
Reads the laptop price, current savings and monthly savings. A `while` loop adds the monthly amount until the savings reach the price, printing the balance each month.

```text
Enter laptop price: 100000
Enter your current savings: 20000
Enter amount you wanna save monthly: 15000
Month 1: savings = 35000.00
Month 2: savings = 50000.00
...
Month 6: savings = 110000.00
Sara can buy laptop after 6 month(s):
```

### Task 3 – ATM PIN Verification
Gives the user 3 attempts to enter the correct PIN (`4321`). It prints the attempts left after each wrong try, `Access granted` on success, or `Card blocked` after the third failure.

```text
Enter PIN: 1111
Wrong PIN. 2 attempt(s) left.Enter PIN: 2222
Wrong PIN. 1 attempt(s) left.Enter PIN: 4321
Access granted
```

### Task 4 – Class Result Summary
Reads the number of students and each student's marks. Marks of 50 or more count as a pass, below 50 as a fail. Prints passed count, failed count, highest passing mark and the class average.

```text
Enter number of students: 3
Marks of student 1: 80
Marks of student 2: 40
Marks of student 3: 95
Passed : 2
Failed : 1
Highest : 95
Average : 71.000000
```

### Task 5 – Cafeteria Menu
A menu-driven billing program that repeats until the user chooses **4 (Checkout)**:

| Choice | Item | Price (Rs) |
|---|---|---|
| 1 | Tea | 60 |
| 2 | Samosa | 40 |
| 3 | Sandwich | 180 |
| 4 | Checkout | – |

The running bill is shown after each item. At checkout, a **10% discount** is applied when the bill is above Rs 1000, and the program prints total items, bill, discount and payable amount. Invalid choices ask the user to try again.

## 🚀 How to Run

```bash
gcc Task_01.c -o Task_01
./Task_01          # Linux / macOS
Task_01.exe        # Windows
```

## 👤 Author

**Raja Shaheryar Ahmed**
GitHub: [@Raja-Shaheryar-Ahmed](https://github.com/Raja-Shaheryar-Ahmed)
