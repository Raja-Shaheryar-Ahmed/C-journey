# 📊 Student Marks Manager

A menu-driven program that stores marks for up to **30 students** and gives class statistics, search, sorting and a pass/fail count.

## ✨ Features

- Add a student with a unique roll number and marks from 0 to 100
- Show all students with a Pass / Fail result (pass mark is 50)
- Class statistics: number of students, average, highest and lowest marks with the roll number of each
- Search a student by roll number
- Sort the class by marks, highest first (roll numbers move with their marks)
- Pass and fail count
- Validation: duplicate roll numbers, marks outside 0 to 100, letters instead of numbers, a full list, and an empty list

## 🧠 Concepts Used

| Topic | Where it appears |
|---|---|
| 1D arrays | Two **parallel arrays**: `rolls[i]` and `marks[i]` belong to the same student |
| Functions | One function per feature: `addStudent()`, `showAll()`, `sortByMarks()` and more |
| Pointers | `classStatistics()` returns the average, highest and lowest through pointers, and `swap()` exchanges two values by address |
| Sorting | Bubble sort that swaps both arrays together |
| Searching | Linear search with `findRoll()` |
| `switch` and loops | Main menu and all array traversals |

## 🚀 How to Run

```bash
gcc main.c -o marks
./marks          # Linux / macOS
marks.exe        # Windows
```

## 🖥️ Sample Run

After adding students 101 (78), 102 (45), 103 (92) and 104 (60):

```text
------------ CLASS STATISTICS ------------
Students       : 4
Average marks  : 68.75
Highest marks  : 92 (Roll 103)
Lowest marks   : 45 (Roll 102)
------------------------------------------

Enter roll number to search: 102
Roll 102 has 45 marks (Fail)

Students sorted by marks (highest first).

No.  Roll No.   Marks   Result
----------------------------------
1    103        92      Pass
2    101        78      Pass
3    104        60      Pass
4    102        45      Fail

Passed (>= 50 marks): 3
Failed (<  50 marks): 1
```

## 🔮 Ideas to Improve Later

- Use a `struct Student` instead of parallel arrays once structures are covered
- Store student names with strings
- Save and load the records from a file

## 👤 Author

**Raja Shaheryar Ahmed**
GitHub: [@Raja-Shaheryar-Ahmed](https://github.com/Raja-Shaheryar-Ahmed)
