# 🧠 C Programming Quiz

A terminal quiz with **8 multiple-choice questions** on C basics (operators, loops, functions, arrays and pointers). It scores your answers and shows a summary of what you got right and wrong.

## ✨ Features

- Answer with `a`, `b`, `c` or `d` in upper or lower case
- Invalid answers are rejected and asked again
- Instant feedback after every question, showing the right answer when you miss
- Type `q` to stop early
- Final score with percentage, and a grade remark (A to D) once the whole quiz is finished
- Summary table of every question: your answer, the correct answer and Right / Wrong

## 🧠 Concepts Used

| Topic | Where it appears |
|---|---|
| `switch` | `showQuestion()` prints the right question for each number, and `showRemark()` prints the grade message |
| 1D arrays | `correct[]`, `given[]` and `right[]` keep answers and results |
| Functions | `readAnswer()`, `showSummary()`, `getRemarkGrade()` and more |
| Loops | The question loop and the input-validation loop |
| `if / else if` | Scoring and grade ranges |
| `char` type | Answers are single characters, with a case conversion using ASCII values |

Questions are printed from inside a `switch` because strings are not covered yet, so they cannot be stored in arrays.

## 🚀 How to Run

```bash
gcc main.c -o quiz
./quiz          # Linux / macOS
quiz.exe        # Windows
```

## 🖥️ Sample Run

```text
Question 8 of 8
If ptr is a pointer, what does *ptr give?
  a) The address of ptr
  b) The value stored at the address in ptr
  c) The size of ptr
  d) Nothing
Your answer: d
Wrong! The correct answer is b.

--------------- SUMMARY ---------------
Q.No  Your answer  Correct  Result
1     b            b        Right
2     c            c        Right
3     a            b        Wrong
4     d            d        Right
5     b            a        Wrong
6     b            b        Right
7     c            c        Right
8     d            b        Wrong
---------------------------------------

Final score: 5 out of 8 (62%)
Grade B - Good job! A little more practice and you will master it.
```

## 🔮 Ideas to Improve Later

- Keep questions and options in arrays of strings once strings are covered
- Shuffle the question order
- Save the high score to a file

## 👤 Author

**Raja Shaheryar Ahmed**
GitHub: [@Raja-Shaheryar-Ahmed](https://github.com/Raja-Shaheryar-Ahmed)
