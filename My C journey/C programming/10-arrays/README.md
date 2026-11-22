# 10 - Arrays

Storing many values of the same type under one name. Arrays are read and processed with `for` loops, and each element is reached by its index (starting at `0`). These programs cover sums, searching, sorting, reversing, counting, and a few classic practice questions, all with one-dimensional arrays.

## 📁 Programs

| File | Description | Concept Used |
|---|---|---|
| `array_sum_average.c` | Finds the sum and average of the elements. | Running total, `float` cast |
| `find_largest_smallest.c` | Finds the largest and smallest element. | Comparing with the best so far |
| `linear_search.c` | Searches for a number and reports its index. | `break` on first match |
| `reverse_array.c` | Reverses the array in place. | Swapping `arr[i]` and `arr[n-1-i]` |
| `sort_ascending_bubble.c` | Sorts the array in ascending order. | Bubble sort, nested loops |
| `count_even_odd.c` | Counts even and odd numbers. | `%` |
| `second_largest.c` | Finds the second largest distinct value. | Tracking two values |
| `remove_duplicates_print_unique.c` | Prints each value only once. | Nested loops |
| `merge_two_sorted_arrays.c` | Merges two sorted arrays into one sorted array. | Three indexes |
| `rotate_array_by_k.c` | Rotates the array to the right by `k` places. | `(i + k) % n` |
| `frequency_of_digits.c` | Counts how many times each digit 0-9 appears in a number. | Counter array |
| `binary_search.c` | Searches a sorted array by halving the range. | `low`, `mid`, `high` |

## 🧠 Program Details

### Basic Operations

#### array_sum_average.c
Adds every element, then divides by `n`. The sum is cast to `float` so the average keeps its decimal part.

```
Enter number of elements (1-100): 5
Enter 5 integers: 10 20 30 40 51

Sum     : 151
Average : 30.20
```

#### find_largest_smallest.c
Starts with `arr[0]` as both the largest and smallest, then updates them while looping from index 1.

```
Enter number of elements (1-100): 5
Enter 5 integers: 4 -9 17 3 8

Largest  : 17
Smallest : -9
```

#### count_even_odd.c
Uses `arr[i] % 2 == 0` to count even numbers. Everything else is counted as odd, including negative odd numbers.

```
Enter number of elements (1-100): 6
Enter 6 integers: 1 2 3 4 -5 0

Even numbers: 3
Odd numbers : 3
```

---

### Searching

#### linear_search.c
Checks each element from left to right and stops at the first match.

```
Enter number of elements (1-100): 5
Enter 5 integers: 4 9 17 3 8
Enter the number to search: 17

17 found at index 2 (position 3).
```

#### binary_search.c
Works only on an array already sorted in ascending order (the program checks this). It compares the key with the middle element and throws away half of the range each time.

```
Enter number of elements (1-100): 7
Enter 7 integers in ascending order: 2 5 8 12 16 23 38
Enter the number to search: 23

23 found at index 5 (position 6).
```

```
Enter number of elements (1-100): 7
Enter 7 integers in ascending order: 2 5 8 12 16 23 38
Enter the number to search: 7

7 was not found in the array.
```

---

### Rearranging

#### reverse_array.c
Swaps the first with the last, the second with the second last, and so on. The loop only runs `n / 2` times, otherwise the array would be reversed twice.

```
Enter number of elements (1-100): 6
Enter 6 integers: 1 2 3 4 5 6

Reversed array: 6 5 4 3 2 1
```

#### sort_ascending_bubble.c
Compares neighbouring elements and swaps them if they are in the wrong order. After each pass the largest remaining value reaches the end. A `swapped` flag stops early if a pass makes no swaps.

```
Enter number of elements (1-100): 6
Enter 6 integers: 64 25 12 22 11 90

Sorted array: 11 12 22 25 64 90
```

**Concepts:** nested `for` loops, swapping with a temporary variable

#### rotate_array_by_k.c
Each element at index `i` moves to index `(i + k) % n`. `k` is first reduced with `k % n`, so large values of `k` work too.

```
Enter number of elements (1-100): 5
Enter 5 integers: 1 2 3 4 5
Enter k (number of right rotations, 0 or more): 2

Array after rotating right by 2: 4 5 1 2 3
```

#### merge_two_sorted_arrays.c
Both input arrays must be in ascending order. The program keeps one index for each array and always copies the smaller front element, then copies whatever is left.

```
Enter size of first array (1-100): 3
Enter 3 integers in ascending order: 1 4 9
Enter size of second array (1-100): 4
Enter 4 integers in ascending order: 2 4 6 10

Merged array: 1 2 4 4 6 9 10
```

---

### Practice Questions

#### second_largest.c
Tracks the largest value and the second largest value that is different from it. If all elements are equal, there is no second largest and the program says so.

```
Enter number of elements (1-100): 5
Enter 5 integers: 12 35 1 10 34

Largest        : 35
Second largest : 34
```

```
Enter number of elements (1-100): 4
Enter 4 integers: 5 5 5 5

There is no second largest (all elements are equal).
```

#### remove_duplicates_print_unique.c
For each element, looks at all the elements before it. If the same value is already there, it is skipped. The array itself is not changed, only the printing.

```
Enter number of elements (1-100): 7
Enter 7 integers: 1 2 2 3 1 4 3

Array without duplicates: 1 2 3 4
```

#### frequency_of_digits.c
Uses an array `freq[10]` where `freq[d]` counts the digit `d`. Each last digit (`% 10`) adds 1 to its counter. Only digits that appear are printed.

```
Enter a non-negative integer: 112233440

Digit frequencies:
0 appears 1 time(s)
1 appears 2 time(s)
2 appears 2 time(s)
3 appears 2 time(s)
4 appears 2 time(s)
```

**Concepts:** using a digit as an array index, `% 10` and `/ 10`

## 📌 Key Concepts

- `int arr[100];` makes 100 slots, indexes `0` to `99`
- Read and print arrays with a `for` loop from `0` to `n - 1`
- Only use the first `n` slots, where `n` is checked to be between 1 and 100
- Going outside the array (like `arr[n]`) is undefined behaviour
- Sorting and searching are done by hand with loops
- A counter array (`freq[digit]++`) is a neat way to count many categories at once

## ⚠️ Input Notes

- Array size must be between 1 and 100. Anything else prints an error and the program stops.
- If a non-number is typed where a number is expected, the program prints `Invalid input.` and stops.
- `binary_search.c` and `merge_two_sorted_arrays.c` reject input that is not in ascending order.
- `rotate_array_by_k.c` needs `k` to be 0 or more, and `frequency_of_digits.c` needs a number that is 0 or more.
- Values are stored in `int`, so very large numbers or sums can overflow.

## 🛠️ Requirements

- A C compiler such as GCC, TDM-GCC, or MinGW.

## 🚀 How to Run

```bash
gcc sort_ascending_bubble.c -o sort_ascending_bubble
./sort_ascending_bubble          # Linux / macOS
sort_ascending_bubble.exe        # Windows
```

## ⬅️ ➡️ Navigation

[09 - Pointers](../09-pointers/)

## 👤 Author

**Raja Shaheryar Ahmed**
Roll No: P26-0051
GitHub: [@Raja-Shaheryar-Ahmed](https://github.com/Raja-Shaheryar-Ahmed)
