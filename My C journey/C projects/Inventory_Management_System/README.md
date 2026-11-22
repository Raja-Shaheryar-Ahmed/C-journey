# 📦 Inventory Management System

A menu-driven shop inventory program in C. It stores product IDs, names, quantities and prices, and helps you add, search, update, delete and value your stock, with a **low-stock warning**.

## ✨ Features

- Add a product with a unique ID, name, quantity and unit price
- Display all products in a formatted table with an OK / LOW status
- Search a product by ID
- Update stock: a positive number for stock received, a negative number for stock sold (stock can never go below zero)
- Delete a product, shifting the later products left
- Calculate the total inventory value (`quantity × price` for every product)
- Show low-stock warnings, with a low-stock limit you can change (default is 5)
- Input validation: duplicate IDs, empty names, negative quantities, zero or negative prices, letters instead of numbers, and a full inventory

## 🧠 Concepts Practiced

| Topic | Where it appears |
|---|---|
| Arrays | Four **parallel arrays**, so `ids[i]`, `names[i]`, `quantities[i]` and `prices[i]` all describe product `i` |
| 2D `char` array | `names[100][50]` holds 100 product names of up to 49 characters |
| Functions | One function per job: `addProduct()`, `findProductById()`, `calculateInventoryValue()` and more |
| Pointers | `count` and the low-stock limit are passed by address so functions can change them |
| Searching | Linear search with `findProductById()`, reused by search, update and delete |
| Loops and `switch` | Main menu and every array traversal |

## 🔧 Requirements

- GCC or another C compiler

## 🚀 Compile and Run

```bash
gcc -Wall -Wextra -std=c11 main.c -o inventory
./inventory          # Linux / macOS
inventory.exe        # Windows
```

## 🖥️ Example

After adding a Keyboard (101), a Mouse (102) and a Monitor (103):

```text
Enter choice: 2
===== INVENTORY =====
ID     PRODUCT                 QTY      PRICE  STATUS
101    Keyboard                 15    2500.00  OK
102    Mouse                    20    1200.00  OK
103    Monitor                   3   25000.00  LOW
Enter choice: 6
Total inventory value: 136500.00
Enter choice: 7
Products with stock below 5:
Warning: Monitor stock is low! (3 left)
Enter choice: 4
Enter product ID: 103
Monitor currently has 3 in stock.
Enter change (positive = received, negative = sold): -5
Not enough stock! You only have 3.
```

### How the total value is calculated

A loop keeps a running total and adds `quantity × price` for each product:

```text
15 × 2500  = 37,500
20 × 1200  = 24,000
 3 × 25000 = 75,000
              -------
Total       = 136,500
```

## ⚠️ Limitations

- Holds at most 100 products
- Data is kept only in memory, so it is lost when the program closes
- Product names are limited to 49 characters

## 🔮 Future Improvements

- Replace the parallel arrays with an array of `struct Product`
- Save and load the inventory from a file
- Sort the table by price, quantity or ID
- Track the number of units sold

## 👤 Author

**Raja Shaheryar Ahmed**
GitHub: [@Raja-Shaheryar-Ahmed](https://github.com/Raja-Shaheryar-Ahmed)
