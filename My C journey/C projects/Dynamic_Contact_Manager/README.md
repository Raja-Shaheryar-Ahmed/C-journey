# 📇 Dynamic Contact Manager

A contact book whose storage **grows while the program runs**. It starts with no memory at all, asks for a block with `malloc`, doubles it with `realloc` when it becomes full, and gives it back with `free` before exiting.

## ✨ Features

- Add a contact with a name, phone number and email address
- View all contacts in a table
- Search by part of a name (for example `Om` finds `Omar`)
- Update a contact's phone or email (press Enter to keep the old value)
- Delete a contact, shifting the later contacts left
- The menu always shows **Total Contacts** and **Allocated Capacity**, so you can watch the memory grow
- Validation: empty or duplicate names, names that are too long, phone numbers (at least 7 digits, optional leading `+`) and a basic email check
- No memory leaks: all memory is released on exit

## 🧠 Concepts Practiced

| Topic | Where it appears |
|---|---|
| `malloc`, `realloc`, `free` | `ensureCapacity()` and `freeContacts()` |
| Pointers and pointer arithmetic | Record `i` starts at `contacts + i * RECORD_SIZE` |
| Pointer to pointer (`char **`) | `ensureCapacity()` can change where `contacts` points after `realloc` |
| Character arrays and strings | `strcpy`, `strcmp`, `strstr`, `strchr` from `string.h` |
| Functions | Each feature has its own function |
| Arrays and shifting | Deleting moves later records left with `memmove` |

## 🧱 Count vs capacity

| Name | Meaning |
|---|---|
| `count` | How many contacts are really stored |
| `capacity` | How many contacts the memory block has room for |

`count` can never be bigger than `capacity`. The capacity starts at 0, becomes **4** on the first contact, then doubles to **8**, **16**, and so on whenever the block is full. Doubling means the program asks for memory rarely instead of after every contact.

## 🛡️ Memory safety plan

1. **First allocation:** `malloc` is used when `contacts` is `NULL`.
2. **Growing:** `realloc` is called with the new, bigger size and its result is saved in a **temporary pointer** first.
3. **Allocation failure:** if the temporary pointer is `NULL`, `realloc` failed but the **old block is still valid**, so the program prints an error and keeps working with the old block. Capacity is only updated after success.
4. **Input safety:** every text is read with `fgets` into a fixed-size array, and too-long input is rejected instead of overflowing.
5. **Cleanup:** `freeContacts()` frees the block once on exit and resets the pointer to `NULL`.

## 🧩 Why one big block instead of a struct?

Structs are not covered yet, so each contact is stored as one fixed-size **record** of 130 characters inside the same block:

```text
| name (50) | phone (20) | email (60) |   <- record 0
| name (50) | phone (20) | email (60) |   <- record 1
```

`getName()`, `getPhone()` and `getEmail()` return the start of each part. Once structs are learned, this becomes `typedef struct { char name[50]; ... } Contact;` and everything else stays almost the same.

## 🔧 Requirements

- GCC or another C compiler

## 🚀 Compile and Run

```bash
gcc -Wall -Wextra -std=c11 main.c -o contacts
./contacts          # Linux / macOS
contacts.exe        # Windows
```

## 🖥️ Example

Adding five contacts, then updating one and searching:

```text
Total Contacts: 4
Allocated Capacity: 4
Enter choice: 1
...
Contact added.

Total Contacts: 5
Allocated Capacity: 8
Enter choice: 2

No.  NAME                 PHONE            EMAIL
1    Ali Khan             03001234567      ali@mail.com
2    Sara Ahmed           +923331234567    sara@example.com
3    Bilal                03451234567      bilal@site.pk
4    Hina                 03211234567      hina@uni.edu.pk
5    Omar                 03451239999      omar@work.com

Enter choice: 4
Enter the exact name of the contact to update: Omar
Current phone: 03451239999
New phone (press Enter to keep it):
Current email: omar@work.com
New email (press Enter to keep it): omar@new.org
Contact updated.

Enter choice: 3
Enter name (or part of it) to search: Om
Omar | 03451239999 | omar@new.org
```

The capacity jumped from 4 to 8 when the fifth contact was added, which is `realloc` at work.

## ⚠️ Limitations

- Searching is case-sensitive: `om` does not find `Omar`
- Names must be unique, and a name cannot be changed once saved (delete and re-add instead)
- Contacts are lost when the program closes
- The email check is simple and does not follow every email rule

## 🔮 Future Improvements

- Replace the flat record with a `struct Contact`
- Save and load contacts from a file
- Sort contacts by name
- Make searching case-insensitive
- Shrink the memory when many contacts are deleted

## 👤 Author

**Raja Shaheryar Ahmed**
GitHub: [@Raja-Shaheryar-Ahmed](https://github.com/Raja-Shaheryar-Ahmed)
