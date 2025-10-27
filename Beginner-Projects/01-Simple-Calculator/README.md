# 🧮 Simple Calculator (C Project)

*A beginner-friendly calculator built in C that performs basic arithmetic operations using a `switch-case` structure.*

---

## 📘 Description

This project is a **Simple Calculator** implemented in **C language**.

It allows the user to perform **basic arithmetic operations** — addition, subtraction, multiplication, and division — by entering an operator and two operands.

The program uses a **switch-case control structure** to select the appropriate operation based on user input and handles **division by zero** gracefully.

---

## 🧠 Concepts Used

- **Switch-case statements** for operation selection
- **Conditional checks** (`if` statement for division by zero)
- **Basic I/O** using `printf()` and `scanf()`
- **Floating-point arithmetic** using `double` data type
- **Input buffer handling** with `" %c"` for clean character input

---

## 🗂️ Features

- ➕ Performs **Addition**, **Subtraction**, **Multiplication**, and **Division**
- ⚙️ Handles **invalid operator input** with error messages
- 🚫 Prevents **division by zero** with safety checks
- 💡 Clean, modular logic using `switch-case`
- 🖥️ Simple and interactive console interface

---

## 🧩 How It Works

1. The user is prompted to **enter an operator** (`+`, , , `/`).
2. The user then enters **two numeric operands**.
3. The program uses a **switch-case** to perform the chosen operation.
4. The result is displayed up to **two decimal places**.
5. Invalid operators or division by zero are handled with appropriate messages.

---

## 💻 Example Run

```c
Enter an operator (+, -, *, /): *
Enter two operands: 5 6
Result: 30.00

```

```c
Enter an operator (+, -, *, /): /
Enter two operands: 12 0
Error! Division by zero is not allowed.

```

```c
Enter an operator (+, -, *, /): x
Enter two operands: 10 2
Error! Incorrect Operator Value.

```

---

## ⚙️ Tech Stack

| Component | Description |
| --- | --- |
| **Language** | C |
| **Concepts Used** | Switch-case, Conditionals, Floating-point arithmetic |
| **Headers** | `<stdio.h>` |
| **Compiler** | GCC / Clang |

---

## 🏆 Learning Outcomes

By building this project, you will learn:

- How to use **switch-case** effectively in C
- How to **take user input** and **process arithmetic operations**
- How to **handle runtime errors** like invalid input and division by zero
- How to **format output** using `printf()` and `scanf()`

---