# 🧪 Programming Fundamentals – Lab 4

**Topics:** conditional statements (`if`, `else if`, `else`), nested `if`, relational and logical operators, `%` for divisibility checks.

## 📋 Tasks

| Task | File | What it does |
|---|---|---|
| 1 | [Task_01.c](Task_01.c) | BMI calculator with weight category |
| 2 | [Task_02.c](Task_02.c) | Largest of three numbers |
| 3 | [Task_03.c](Task_03.c) | Watermelon-style weight split check |
| 4 | [Task_04.c](Task_04.c) | Locate a point on the axes or in a quadrant |
| 5 | [Task_05.c](Task_05.c) | Leap year checker |
| 6 | [Task_06.c](Task_06.c) | Triangle validity and type |

## 📝 Task Details

### Task 1 – BMI Calculator
Reads weight (kg) and height (m), computes `BMI = weight / height²` and prints the category:

| BMI | Category |
|---|---|
| below 18.5 | Underweight |
| 18.5 – 24.9 | Normal |
| 25 – 29.9 | Overweight |
| 30 and above | Obese |

```text
Enter weight (kg): 70
Enter height (m): 1.75
BMI = 22.86
Category: Normal
```

### Task 2 – Largest of Three Numbers
Reads three integers and uses nested `if` statements to print the largest.

```text
Enter 1st number: 5
Enter 2nd number: 9
Enter 3rd number: 3
The largest is 9
```

### Task 3 – Weight Split Check
Reads a weight in kg and prints `YES` only if it is even and at least 4, otherwise `NO` (the classic "can the watermelon be divided into two even parts" problem).

```text
Enter the weight (kg) : 10
YES
```

### Task 4 – Point Location
Reads `x` and `y` coordinates and reports whether the point is on the origin, on the x-axis, on the y-axis, or in the 1st, 2nd, 3rd or 4th quadrant.

```text
Enter the x-coordinate: 3
Enter the y-coordinate: -4
The point is in 4th quadrant
```

### Task 5 – Leap Year
Reads a year and applies the leap-year rules with nested `if`: divisible by 4, except century years, which must be divisible by 400.

```text
Enter the year: 2000
The year is leap year
```

### Task 6 – Triangle Checker
Reads three side lengths, checks the triangle inequality (`a+b>c`, `a+c>b`, `b+c>a`) and, for a valid triangle, classifies it as equilateral, isosceles or scalene.

```text
Enter the side a length: 3
Enter the side b length: 4
Enter the side c length: 5
Its a valid triangle
The triangle is scalene triangle
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
