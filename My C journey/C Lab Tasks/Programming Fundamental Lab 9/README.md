# 🧪 Programming Fundamentals – Lab 9

**Topics:** one-dimensional arrays, traversing arrays with `for` loops, searching, finding the maximum and minimum, shifting elements, duplicate detection, sorting parallel arrays.

## 📋 Tasks

| Task | File | What it does |
|---|---|---|
| 1 | [Task_01.c](Task_01.c) | Cricket innings: total runs, run rate and best over |
| 2 | [Task_02.c](Task_02.c) | Locker system: search for an item and count empty lockers |
| 3 | [Task_03.c](Task_03.c) | Judges' scores with the highest and lowest dropped |
| 4 | [Task_04.c](Task_04.c) | Rotating a 7-day guard duty roster |
| 5 | [Task_05.c](Task_05.c) | Detecting forged (duplicate) tickets |
| 6 | [Task_06.c](Task_06.c) | Ranking students by marks |

## 📝 Task Details

### Task 1 – Cricket Innings
Stores the runs of 6 overs in an array. Prints the total, the run rate (runs per over), the best over, and whether the team reached the target of 60.

```text
Total runs: 65
Run rate: 10.83 per over
Best over: Over 4 with 15 runs
Team reached target of 60
```

### Task 2 – Locker Search
Stores an item code for each of 10 lockers (`0` means empty). Searches for a code, prints every locker that holds it, the total matches and the number of empty lockers.

```text
Item 5 is in locker 1
Item 5 is in locker 4
Item 5 is in locker 7
Total lockers with this item: 3
Empty lockers: 3
```

### Task 3 – Judges' Scores
Reads 7 judges' scores, drops the highest and the lowest, and averages the remaining 5. Also reports the first judge who gave a perfect 10.

```text
Highest score dropped: 10.00
Lowest score dropped: 7.50
Final score: 8.80
Judge 4 gave a perfect 10!
```

### Task 4 – Guard Roster Shift
Reads the guard IDs for Day 1 to Day 7 and shifts the roster forward by `k` days, wrapping around with `(i + k) % 7`. Prints the old and new roster side by side, then finds the day a given guard now has duty.

```text
Day	Old	New
Day 1   101   106
Day 2   102   107
Day 3   103   101
...
Guard 105 now has duty on Day 7,
```

### Task 5 – Forged Ticket Detection
Reads 7 ticket numbers and compares each one with all earlier tickets. A repeated ticket is flagged as forged, and the program prints the genuine and forged counts.

```text
FORGED: person 4 used ticket 22, already used by person 2
FORGED: person 6 used ticket 11, already used by person 1
Genuine: 5, Forged: 2
```

### Task 6 – Student Ranking
Reads the roll number and marks of 6 students into two parallel arrays, sorts them by marks in descending order (swapping both arrays together) and prints the rank list and the top three position holders.

```text
Rank	Roll	Marks
1	4	95
2	6	88
3	2	85
...
Position holders:
1st: Roll 4 (95 marks)
2nd: Roll 6 (88 marks)
3rd: Roll 2 (85 marks)
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
