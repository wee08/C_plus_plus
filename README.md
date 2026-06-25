#  C++ Programming — ITC Data Structures Course

> Lab exercises (TPs) from **C++ & Data Structures** coursework at the Institute of Technology of Cambodia.
> Each folder maps to a specific TP covering a core concept in C++ programming and data structures.

![C++](https://img.shields.io/badge/C++-00599C?style=flat&logo=c%2B%2B&logoColor=white)
![ITC](https://img.shields.io/badge/ITC-Computer_Science-6e40c9?style=flat)
![Year](https://img.shields.io/badge/Year-2nd-informational?style=flat)

---

##  Repository Structure

```
C_plus_plus/
├── TP01-Basic_c++/          # Variables, I/O, control flow, strings
├── TP02-Recursion/          # Recursive functions and math problems
├── TP03-File-IO/            # File reading & writing (fstream)
├── TP04-pointer/            # Pointers, dynamic memory, pointer arithmetic
├── Tp05-LinkedList/         # Singly linked list — build, traverse, insert
├── TP06-LinkedList-Part2/   # Linked list — delete, sort, advanced ops
├── TP07-DoubleLinkedList/   # Doubly linked list implementation
├── TP08-Queue/              # Queue data structure (array & linked list)
├── TP09-Stack/              # Stack data structure + Hash Table intro
├── TP10-Sorting/            # Sorting algorithms
└── soluttions/              # Reference solutions & lecture examples
```

---

##  TP Breakdown

### TP01 — Basic C++
**Topics:** Variables, data types, user input/output, conditionals, loops, string handling

| File | Description |
|------|-------------|
| `Ex1.cpp` | Student info input with validation (name, gender, major, age) |
| `Ex2.cpp` | Arithmetic and type conversion exercises |
| `Ex3.cpp` | Conditional statements and branching |
| `Ex4.cpp` | Loop structures — for, while, do-while |
| `Ex5.cpp` – `Ex8.cpp` | String manipulation and character operations |
| `week1.cpp` | Week 1 warm-up exercises |

---

### TP02 — Recursion
**Topics:** Recursive function design, base cases, mathematical recursion

| File | Description |
|------|-------------|
| `ex1.cpp` | Power function & sum of squares using recursion |
| `ex2.cpp` | Factorial and Fibonacci sequence |
| `ex3.cpp` | GCD using Euclidean algorithm (recursive) |
| `ex4.cpp` | Digit sum and digit count recursion |
| `ex5.cpp` | Combined recursive problems |

---

### TP03 — File I/O
**Topics:** Reading from and writing to files using `fstream`, `ifstream`, `ofstream`

| Folder / File | Description |
|---------------|-------------|
| `ex1.cpp` | Basic file read/write operations |
| `exercise1/` | Lucky number file generator |
| `exercise2/` | Reading structured data from file |
| `exercise3/` | Multi-file data parsing |
| `exercise4/` | Batch file creation and manipulation |

---

### TP04 — Pointers
**Topics:** Pointer declaration, pointer arithmetic, dynamic memory allocation, pass-by-pointer

| File | Description |
|------|-------------|
| `exercise1.cpp` | Pointer basics — declaration, dereferencing |
| `exercise2.cpp` | Pointer arithmetic with arrays |
| `exercise3.cpp` | Pass-by-pointer in functions |
| `exercise4.cpp` | Dynamic memory allocation with `new` / `delete` |
| `exercise5.cpp` | Pointer to struct |
| `exercise6.cpp` | Double pointers |
| `exercise7.cpp` | Mixed pointer operations |

---

### TP05 — Singly Linked List
**Topics:** Node structures, head/tail pointers, list building, traversal, insertion

| File | Description |
|------|-------------|
| `exercise1.cpp` | Linked list structure definition and basic traversal |
| `exercise2-3-4.cpp` | Insert at head, tail, and middle; search operations |
| `exercise5.cpp` | Combined list operations |
| `pre.cpp` | Pre-lab practice |

---

### TP06 — Linked List Part 2
**Topics:** Deletion, sorting, reverse traversal, advanced manipulation

| File | Description |
|------|-------------|
| `Lecture-TP06.cpp` | Instructor demo code |
| `exercise1.cpp` | Delete node by value |
| `exercise2.cpp` | Sort a singly linked list |
| `exercise3.cpp` | Merge two sorted linked lists |
| `exercise5.cpp` | Advanced linked list operations |

---

### TP07 — Doubly Linked List
**Topics:** Bidirectional node links (`prev` and `next`), forward and backward traversal

| File | Description |
|------|-------------|
| `exercise.cpp` | Full doubly linked list — insert, delete, traverse forward & backward |

---

### TP08 — Queue
**Topics:** FIFO queue using array and linked list, enqueue/dequeue operations

| File | Description |
|------|-------------|
| `MyQueue.h` | Queue class implementation (header) |
| `exercise1.cpp` | Basic queue using array |
| `exercise3.cpp` | Queue with linked list |
| `exercise4.cpp` | Circular queue |
| `exercise5.cpp` | Priority queue operations |
| `exercise6.cpp` | Queue applications |
| `Lecturing/` | Lecture demo examples |

---

### TP09 — Stack + Hash Table
**Topics:** LIFO stack, stack applications, introduction to hash tables

| File / Folder | Description |
|---------------|-------------|
| `MyStack.h` | Stack class implementation (header) |
| `stack1.cpp` | Basic stack — push, pop, peek |
| `TP-solutions/` | Full solutions: balanced brackets, expression evaluation, sorting |
| `Hash Table/` | Intro to hash tables with separate chaining |

---

### TP10 — Sorting
**Topics:** Comparison-based sorting algorithms

| File | Description |
|------|-------------|
| `exercise1` | Bubble sort, selection sort, insertion sort, merge sort implementations |

---

## 🛠️ How to Compile & Run

All exercises use standard C++11. Compile with `g++`:

```bash
# Compile
g++ exercise1.cpp -o exercise1

# Run (Linux / macOS)
./exercise1

# Run (Windows)
exercise1.exe
```

> `.exe` files in the repo are pre-compiled Windows binaries. You can run them directly on Windows or recompile from source on any platform.

---

##  Concepts Covered

| Concept | TP |
|---|---|
| Variables, I/O, control flow | TP01 |
| Recursion | TP02 |
| File handling (`fstream`) | TP03 |
| Pointers & dynamic memory | TP04 |
| Singly linked list | TP05, TP06 |
| Doubly linked list | TP07 |
| Queue (FIFO) | TP08 |
| Stack (LIFO) | TP09 |
| Sorting algorithms | TP10 |
| Hash table (intro) | TP09 |

---

##  Author

**Sean Manutnithya (Nithya)**
 Phnom Penh, Cambodia
 2nd Year Computer Science — Institute of Technology of Cambodia
 Aspiring Full-Stack Software Engineer

[![GitHub](https://img.shields.io/badge/GitHub-wee08-181717?style=flat&logo=github)](https://github.com/wee08)
[![Email](https://img.shields.io/badge/Email-manutnithyasean%40gmail.com-D14836?style=flat&logo=gmail&logoColor=white)](mailto:manutnithyasean@gmail.com)
