# 09 - Pointers

Working with addresses instead of copies. A pointer stores the address of another variable, `&` gets an address, and `*` reads or changes the value stored at an address. These programs cover pass by reference, pointer arithmetic on a 1D array, and a simple pointer to pointer.

## 📁 Programs

| File | Description | Concept Used |
|---|---|---|
| `pointer_basics.c` | Prints a value, its address, and changes it through a pointer. | `&`, `*` |
| `swap_with_pointers.c` | Swaps two numbers using a function. | Pass by reference |
| `pointer_arithmetic_on_array.c` | Prints array elements using `*(ptr + i)` and `ptr++`. | Pointer arithmetic |
| `min_max_via_pointers.c` | One function gives back both the smallest and largest value. | Pointer parameters |
| `array_sum_with_pointer.c` | Adds up an array without using `arr[i]`. | `*(ptr + i)` |
| `reverse_array_with_pointers.c` | Reverses an array in place using two pointers. | Two-pointer swap |
| `pointer_to_pointer.c` | Changes a variable through a pointer to a pointer. | `int **` |
| `increment_all_via_function.c` | Adds a value to every element inside a function. | Array as pointer |

## 🧠 Program Details

#### pointer_basics.c
Stores the address of `number` in `ptr`, then shows that `*ptr` gives the same value. Changing `*ptr` changes `number`. The address will be different on every run.

```
Enter an integer: 25

Value of number      : 25
Address of number    : 0x7ffc2fae1f4c
Value stored in ptr  : 0x7ffc2fae1f4c
Value at *ptr        : 25

After *ptr = *ptr + 10, number is: 35
```

**Concepts:** `&` (address-of), `*` (dereference), `%p` to print an address

#### swap_with_pointers.c
A normal function would only swap its own copies. Passing `&x` and `&y` lets `swap` change the original variables.

```
Enter two integers: 10 20
Before swap: x = 10, y = 20
After swap : x = 20, y = 10
```

**Concepts:** pass by reference, temporary variable

#### pointer_arithmetic_on_array.c
`ptr + i` moves `i` elements forward (not `i` bytes), so `*(ptr + i)` is the same as `arr[i]`. The second loop moves the pointer itself with `ptr++`.

```
Enter number of elements (1-100): 4
Enter 4 integers: 10 20 30 40

Using *(ptr + i):
arr[0] = 10
arr[1] = 20
arr[2] = 30
arr[3] = 40

Using ptr++ to walk the array: 10 20 30 40
```

**Concepts:** array name as the address of the first element, pointer arithmetic

#### min_max_via_pointers.c
A function can only `return` one value, so `find_min_max` receives two addresses (`&smallest`, `&largest`) and writes the answers into them.

```
Enter number of elements (1-100): 5
Enter 5 integers: 7 -2 15 3 9

Minimum: -2
Maximum: 15
```

**Concepts:** returning more than one value, pointer parameters

#### array_sum_with_pointer.c
Same as a normal array sum, but each element is read with `*(ptr + i)`.

```
Enter number of elements (1-100): 5
Enter 5 integers: 1 2 3 4 5

Sum of the array: 15
```

#### reverse_array_with_pointers.c
`left` starts at the first element and `right` at the last. They swap values and move towards each other until they meet.

```
Enter number of elements (1-100): 5
Enter 5 integers: 1 2 3 4 5

Reversed array: 5 4 3 2 1
```

**Concepts:** comparing pointers (`left < right`), `ptr++` and `ptr--`

#### pointer_to_pointer.c
`pptr` stores the address of `ptr`, which stores the address of `number`. `*pptr` is `ptr` and `**pptr` is `number`.

```
Enter an integer: 42

number  = 42
*ptr    = 42
**pptr  = 42

After **pptr = 100, number is: 100
```

#### increment_all_via_function.c
The array is passed as a pointer, so the function changes the original array, not a copy.

```
Enter number of elements (1-100): 4
Enter 4 integers: 1 2 3 4
Enter the amount to add to each element: 5

Array after increment: 6 7 8 9
```

**Concepts:** arrays are passed by address, `*(ptr + i) = *(ptr + i) + amount`

## 📌 Key Concepts

- A pointer holds an address: `int *ptr = &x;`
- `&x` is the address of `x`, `*ptr` is the value at that address
- Passing addresses to a function lets it change the caller's variables
- An array name acts like a pointer to its first element
- `ptr + i` jumps `i` elements, so `*(ptr + i)` equals `arr[i]`
- `int **pptr` is a pointer that points to another pointer

## ⚠️ Input Notes

- Array size must be between 1 and 100. Anything else prints an error and the program stops.
- If a non-number is typed where a number is expected, the program prints `Invalid input.` and stops.
- Printed addresses (`pointer_basics.c`) change from run to run.

## 🛠️ Requirements

- A C compiler such as GCC, TDM-GCC, or MinGW.

## 🚀 How to Run

```bash
gcc swap_with_pointers.c -o swap_with_pointers
./swap_with_pointers          # Linux / macOS
swap_with_pointers.exe        # Windows
```

## ⬅️ ➡️ Navigation

[06 - Nested Loops](../06-nested-loops/) · [10 - Arrays](../10-arrays/)

## 👤 Author

**Raja Shaheryar Ahmed**
Roll No: P26-0051
GitHub: [@Raja-Shaheryar-Ahmed](https://github.com/Raja-Shaheryar-Ahmed)
