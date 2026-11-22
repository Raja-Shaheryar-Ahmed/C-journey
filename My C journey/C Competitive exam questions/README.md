# 🏆 C Competitive Exam Questions

Programs from competitive-style exam questions, written in **C**. This folder is for problems where the goal is to read the problem carefully and produce exactly the expected output.

## 📁 Questions

| File | Description |
|---|---|
| `Print_Hello_world_any_input.c` | Reads any single word from the user and always prints `Hello, World!`, no matter what was entered. |
| `even_split_check.c` | Can a melon of weight `w` be cut into two positive even-weight parts? (Easy) |
| `digit_root.c` | Add the digits of a number again and again until one digit is left. (Easy) |
| `sum_of_multiples_of_3_or_5.c` | Sum of all numbers from 1 to `n` divisible by 3 or 5. (Easy) |
| `perfect_square_check_without_sqrt.c` | Decide if a number is a perfect square without using `sqrt`. (Easy) |
| `minimum_coins_greedy.c` | Fewest coins needed to pay an amount with fixed denominations. (Medium) |
| `armstrong_number_check.c` | Check whether digits raised to the digit count add up to the number. (Medium) |
| `reverse_and_check_palindrome.c` | Reverse an integer (negatives allowed) and tell if it is a palindrome. (Medium) |
| `collatz_steps_counter.c` | Count the steps of the 3n+1 process and track the highest value reached. (Medium) |
| `gcd_of_array.c` | GCD of a list of integers, including zeros and negatives. (Medium) |
| `count_primes_up_to_n.c` | Count the primes up to `n` using a sieve. (Harder) |
| `array_pair_with_given_sum.c` | Count index pairs whose values add up to a target. (Harder) |
| `longest_equal_run_in_array.c` | Length and value of the longest block of equal neighbours. (Harder) |

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

## 🧠 even_split_check.c

**Difficulty:** Easy

**Problem:** A shopkeeper has one melon of weight `w` kilograms (a whole number). He wants to cut it into exactly two parts so that each part weighs a positive, even number of kilograms. Say whether this is possible.

**Input:** One integer `w`.

**Output:** `YES` or `NO`.

**Constraints:** 1 <= w <= 100

**Approach:**
1. `w` must be even, otherwise two even parts can never add up to it.
2. `w = 2` fails too, because the only split is 1 + 1 and neither is even (and 0 is not positive).
3. So the answer is `YES` exactly when `w` is even and `w > 2`.

**Sample run:**

```
Input:  8
Output: YES

Input:  2
Output: NO (edge case)

Input:  1
Output: NO

Input:  100
Output: YES
```

**Concepts:** `scanf`, `%` operator, `if/else`, logical `&&`

## 🧠 digit_root.c

**Difficulty:** Easy

**Problem:** Given a non-negative number, replace it by the sum of its digits. If the result still has more than one digit, repeat. Print the single digit you end up with.

**Input:** One integer `n`.

**Output:** One integer: the final single digit.

**Constraints:** 0 <= n <= 10^18

**Approach:**
1. Outer `while` loop runs while `n >= 10`.
2. Inner `while` loop adds up digits using `% 10` and `/ 10`.
3. Replace `n` with that sum and repeat.

**Sample run:**

```
Input:  987
Output: 6  (9+8+7=24, 2+4=6)

Input:  0
Output: 0 (edge case)

Input:  9
Output: 9

Input:  999999999999999999
Output: 9
```

**Concepts:** nested `while` loops, `long long`, digit extraction

## 🧠 sum_of_multiples_of_3_or_5.c

**Difficulty:** Easy

**Problem:** Add up every whole number from 1 to `n` (inclusive) that is divisible by 3, by 5, or by both. A number divisible by both must be added only once.

**Input:** One integer `n`.

**Output:** One integer: the sum.

**Constraints:** 1 <= n <= 10^6

**Approach:**
1. Loop `i` from 1 to `n`.
2. Use `i % 3 == 0 || i % 5 == 0`; the `||` ensures numbers like 15 are counted once.
3. Keep the total in a `long long` because it reaches about 2.3 x 10^11.

**Sample run:**

```
Input:  10
Output: 33  (3+5+6+9+10)

Input:  1
Output: 0 (edge case)

Input:  15
Output: 60

Input:  1000000
Output: 233334166668
```

**Concepts:** `for` loop, `||`, `long long` to avoid overflow

## 🧠 perfect_square_check_without_sqrt.c

**Difficulty:** Easy

**Problem:** Tell whether a given number is the square of some whole number, without using any math library function.

**Input:** One integer `n`.

**Output:** `YES` if `n = k*k` for some integer `k`, otherwise `NO`.

**Constraints:** 0 <= n <= 10^12

**Approach:**
1. Start with `i = 0` and increase it while `i * i < n`.
2. When the loop stops, `i * i >= n`; the number is a perfect square only if it is exactly equal to `n`.
3. At most 10^6 iterations, which is fast.

**Sample run:**

```
Input:  49
Output: YES

Input:  0
Output: YES (edge case)

Input:  50
Output: NO

Input:  1000000000000
Output: YES (10^6 squared)
```

**Concepts:** `while` loop, `long long`, avoiding floating point errors

**Note:** Using `sqrt` on big numbers can give rounding errors, which is why an integer loop is safer.

## 🧠 minimum_coins_greedy.c

**Difficulty:** Medium

**Problem:** A machine has unlimited coins worth 1, 2, 5, 10, 20, 50 and 100. Find the smallest number of coins that add up to exactly the given amount.

**Input:** One integer `amount`.

**Output:** One integer: the minimum number of coins.

**Constraints:** 0 <= amount <= 10^9

**Approach:**
1. Store the denominations in an array from largest to smallest.
2. For each coin take `amount / coin` coins, then keep the remainder `amount % coin`.
3. For this particular set of coins the greedy choice is always optimal.

**Sample run:**

```
Input:  93
Output: 5  (50+20+20+2+1)

Input:  0
Output: 0 (edge case)

Input:  1000
Output: 10

Input:  1000000000
Output: 10000000
```

**Concepts:** 1D arrays, `/` and `%`, greedy thinking

**Note:** Greedy does not work for every coin set (for example coins 1, 3, 4 and amount 6), but it does for this one.

## 🧠 armstrong_number_check.c

**Difficulty:** Medium

**Problem:** A number with `d` digits is called special if raising each of its digits to the power `d` and adding the results gives back the original number (for example 153 = 1^3 + 5^3 + 3^3). Check whether the given number is special.

**Input:** One integer `n`.

**Output:** `YES` or `NO`.

**Constraints:** 0 <= n <= 10^9

**Approach:**
1. Count the digits with a `do/while` so that 0 still counts as one digit.
2. Extract each digit and compute its power with a small loop (no `pow`, so no rounding issues).
3. Compare the total with `n`.

**Sample run:**

```
Input:  153
Output: YES

Input:  0
Output: YES (edge case, 0^1 = 0)

Input:  154
Output: NO

Input:  9474
Output: YES (4 digits)

Input:  10
Output: NO
```

**Concepts:** `do/while`, nested loops, `long long`

## 🧠 reverse_and_check_palindrome.c

**Difficulty:** Medium

**Problem:** Reverse the digits of an integer and also tell whether the number reads the same backwards. For a negative number keep the minus sign in front of the reversed digits; a negative number is never a palindrome.

**Input:** One integer `n`.

**Output:** Two items on one line separated by a space: the reversed number and `YES` or `NO`.

**Constraints:** -10^9 <= n <= 10^9

**Approach:**
1. Remember if `n` is negative and work with its absolute value.
2. Build `rev = rev * 10 + digit` while stripping digits off the end.
3. Trailing zeros vanish after reversing (120 becomes 21).
4. Palindrome only if non-negative and `rev == n`.

**Sample run:**

```
Input:  121
Output: 121 YES

Input:  120
Output: 21 NO

Input:  -120
Output: -21 NO (negative)

Input:  0
Output: 0 YES (edge case)

Input:  1000000000
Output: 1 NO
```

**Concepts:** `while` loop, `%` and `/`, handling the sign

## 🧠 collatz_steps_counter.c

**Difficulty:** Medium

**Problem:** Start with a positive number. If it is even, halve it; if it is odd, multiply by 3 and add 1. Repeat until the value becomes 1. Print how many operations were done and the largest value that appeared (including the starting value).

**Input:** One integer `n`.

**Output:** Two integers on one line: the number of steps and the peak value.

**Constraints:** 1 <= n <= 10^6

**Approach:**
1. Loop until `n == 1`, counting each step.
2. Update `peak` after every step.
3. Use `long long` because values can grow far above the starting number.

**Sample run:**

```
Input:  6
Output: 8 16

Input:  1
Output: 0 1 (edge case, no steps needed)

Input:  27
Output: 111 9232

Input:  1000000
Output: 152 1000000
```

**Concepts:** `while` loop, `if/else`, `long long`

## 🧠 gcd_of_array.c

**Difficulty:** Medium

**Problem:** Given a list of integers, print the largest positive number that divides every element. Zeros are allowed and signs are ignored. If every element is zero, print 0.

**Input:** First line `n`, then `n` integers (on one or more lines).

**Output:** One integer: the GCD.

**Constraints:** 1 <= n <= 1000, -10^9 <= each value <= 10^9

**Approach:**
1. Write a function `gcd(a, b)` using Euclid's algorithm.
2. Start with `result = 0` since `gcd(0, x) = x`.
3. Fold each absolute value into `result`.

**Sample run:**

```
Input:  3
       12 18 30
Output: 6

Input:  1
       -7
Output: 7 (edge case, single negative element)

Input:  2
       0 0
Output: 0 (all zeros)

Input:  2
       0 5
Output: 5

Input:  3
       -4 6 0
Output: 2
```

**Concepts:** functions, Euclid's algorithm, reading numbers in a loop

## 🧠 count_primes_up_to_n.c

**Difficulty:** Harder

**Problem:** Print how many prime numbers are less than or equal to `n`.

**Input:** One integer `n`.

**Output:** One integer: the count of primes.

**Constraints:** 1 <= n <= 10^6

**Approach:**
1. Use a global `char` array as a list of crossed-out numbers.
2. For every number `i` from 2 that is not crossed out, count it as prime and cross out its multiples.
3. Testing each number separately would be too slow for 10^6; the sieve is fast.

**Sample run:**

```
Input:  10
Output: 4  (2, 3, 5, 7)

Input:  1
Output: 0 (edge case)

Input:  2
Output: 1

Input:  100
Output: 25

Input:  1000000
Output: 78498
```

**Concepts:** 1D arrays, global arrays, Sieve of Eratosthenes, nested loops

## 🧠 array_pair_with_given_sum.c

**Difficulty:** Harder

**Problem:** You get a list of numbers and a target value `s`. Count how many pairs of different positions `i < j` have `a[i] + a[j] = s`. Equal values at different positions count as different pairs.

**Input:** First line: `n` and `s`. Second line: `n` integers.

**Output:** One integer: the number of such pairs.

**Constraints:** 2 <= n <= 1000, -10^9 <= a[i], s <= 10^9

**Approach:**
1. Two nested loops: `i` from 0 to n-1 and `j` from `i+1` to n-1 so each pair is checked once.
2. Use `long long` because the sum of two values can exceed the `int` range.

**Sample run:**

```
Input:  5 6
       1 5 3 3 2
Output: 2  (1+5 and 3+3)

Input:  2 0
       0 0
Output: 1 (edge case)

Input:  4 4
       2 2 2 2
Output: 6 (all pairs)

Input:  3 -1
       -5 4 0
Output: 1 (negative values)
```

**Concepts:** 1D arrays, nested loops, `long long`

## 🧠 longest_equal_run_in_array.c

**Difficulty:** Harder

**Problem:** Find the longest block of consecutive equal elements in a list. Print its length and the value repeated in it. If several blocks tie, report the earliest one.

**Input:** First line `n`, second line `n` integers.

**Output:** Two integers on one line: the length and the value.

**Constraints:** 1 <= n <= 1000, -10^9 <= a[i] <= 10^9

**Approach:**
1. Keep a running length `run`: increase it if `a[i] == a[i-1]`, otherwise reset to 1.
2. Update the best answer only when `run > best` (strictly), so earlier runs win ties.

**Sample run:**

```
Input:  8
       1 1 2 2 2 3 3 2
Output: 3 2

Input:  1
       5
Output: 1 5 (edge case, single element)

Input:  5
       7 7 7 7 7
Output: 5 7

Input:  4
       1 1 2 2
Output: 2 1 (tie, earliest wins)

Input:  3
       -1 -1 -1
Output: 3 -1
```

**Concepts:** 1D arrays, comparing neighbours, running counters

## 🛠️ Requirements

- A C compiler such as GCC, TDM-GCC, or MinGW.

## 🚀 How to Run

```bash
gcc Print_Hello_world_any_input.c -o hello
./hello          # Linux / macOS
hello.exe        # Windows

# Any other problem, e.g. Collatz (input is read from standard input)
gcc -Wall collatz_steps_counter.c -o collatz
echo 27 | ./collatz
```

## ➕ Adding More Questions

1. Save each solution as `Short_Problem_Name.c`.
2. Add a row to the Questions table above.
3. Add a short section describing the problem, approach, and sample run.

## 👤 Author

**Raja Shaheryar Ahmed**
Roll No: P26-0051
GitHub: [@Raja-Shaheryar-Ahmed](https://github.com/Raja-Shaheryar-Ahmed)
