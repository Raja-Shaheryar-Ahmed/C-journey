# 🏆 C Competitive Exam Questions

Programs from competitive-style exam questions, written in **C**. This folder is for problems where the goal is to read the problem carefully and produce exactly the expected output.

## 📁 Questions

| File | Description |
|---|---|
| `Print_Hello_world_any_input.c` | Reads any single word from the user and always prints `Hello, World!`, no matter what was entered. |

## 🧠 Print_Hello_world_any_input.c

**Problem:** Take any input from the user, then print `Hello, World!`.

**Approach:**
1. Store the input in a `char` array using `scanf("%s", input)`.
2. Ignore the input completely.
3. Print `Hello, World!` with `printf`.

**Sample run:**

```
Input:  anything
Output: Hello, World!
```

**Concepts:** `scanf`, character arrays, `printf`

**Note:** `%s` stops reading at the first space, and the array holds 100 characters. For longer input, `scanf("%99s", input)` is safer because it limits how many characters are read.

## 🛠️ Requirements

- A C compiler such as GCC, TDM-GCC, or MinGW.

## 🚀 How to Run

```bash
gcc Print_Hello_world_any_input.c -o hello
./hello          # Linux / macOS
hello.exe        # Windows
```

## ➕ Adding More Questions

1. Save each solution as `Short_Problem_Name.c`.
2. Add a row to the Questions table above.
3. Add a short section describing the problem, approach, and sample run.

## 👤 Author

**Raja Shaheryar Ahmed**
Roll No: P26-0051
GitHub: [@Raja-Shaheryar-Ahmed](https://github.com/Raja-Shaheryar-Ahmed)
