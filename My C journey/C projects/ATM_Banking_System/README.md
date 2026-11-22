# 🏧 ATM Banking System

A menu-driven ATM simulation in C. It checks a PIN, handles deposits and withdrawals, and keeps a mini statement of the **last 5 transactions**.

## ✨ Features

- PIN verification with **3 attempts**, then the card is blocked (PIN is `1234`)
- Check balance (starts at Rs. 5000)
- Deposit up to Rs. 50,000 at a time
- Withdraw only in multiples of Rs. 100, and never more than the balance
- Mini statement of the last 5 transactions, newest first
- Input validation: letters instead of numbers, negative amounts, wrong menu choices and end of input are all handled

## 🧠 Concepts Used

| Topic | Where it appears |
|---|---|
| Loops | `do-while` main menu, `for` for PIN attempts and the statement |
| `switch` | Menu selection |
| Functions | `deposit()`, `withdraw()`, `verifyPin()`, `showStatement()` and more |
| Pointers | The balance is passed by reference, so functions change it directly |
| 1D arrays | `types[5]` and `amounts[5]` hold the recent transactions |
| Circular buffer | `next = (next + 1) % 5` overwrites the oldest entry once the array is full |

## 🚀 How to Run

```bash
gcc main.c -o atm
./atm          # Linux / macOS
atm.exe        # Windows
```

## 🖥️ Sample Run

```text
Enter your 4-digit PIN (attempt 1 of 3): 1234
PIN accepted.
Enter your choice: 2
Enter amount to deposit (max Rs. 50000): 2500
Rs. 2500 deposited successfully. New balance: Rs. 7500
Enter your choice: 3
Enter amount to withdraw (multiples of 100): 150
This ATM only dispenses multiples of Rs. 100.
Enter your choice: 3
Enter amount to withdraw (multiples of 100): 500
Please take your cash: Rs. 500. New balance: Rs. 7000
Enter your choice: 4

------------ MINI STATEMENT ------------
No.  Type        Amount (Rs.)
1.   Withdraw    500
2.   Deposit     2500
----------------------------------------
```

## 🔮 Ideas to Improve Later

- Store several accounts using `struct` once structures are covered
- Save the balance and history to a file so they survive after the program closes
- Let the user change their PIN

## 👤 Author

**Raja Shaheryar Ahmed**
GitHub: [@Raja-Shaheryar-Ahmed](https://github.com/Raja-Shaheryar-Ahmed)
