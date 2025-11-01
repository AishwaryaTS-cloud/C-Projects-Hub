# 🔢 Number System Conversion Program

*A beginner-friendly C program that converts a **Decimal** number into **Binary**, **Octal**, and **Hexadecimal** formats.*

---

## 📘 Description

This project is a **Number System Conversion Tool** implemented in **C language**.

It allows the user to input a **decimal number**, and the program converts and displays the equivalent:

- **Binary**
- **Octal**
- **Hexadecimal**

The binary conversion is implemented manually using **repeated division**, while **octal and hexadecimal** make use of C's **formatted I/O specifiers** for accurate conversion.

---

## 🧠 Concepts Used

- **Loops** (`while`) for repeated division logic
- **Character arrays (strings)** for storing binary output
- **Custom string reversal** using `reverseString()` function
- **Standard formatted output** for octal and hexadecimal using `printf()`
- **Basic input** via `scanf()`

---

## 🗂️ Features

- ✅ Converts **Decimal → Binary**
- ✅ Converts **Decimal → Octal**
- ✅ Converts **Decimal → Hexadecimal**
- 🔁 Uses a **custom `reverseString()`** for portability (since `strrev()` is non-standard)
- 🖥️ Clean and simple console interface
- ⚙️ Works on **Windows, Linux, and macOS**

---

## 🧩 How It Works

| Conversion | Method Used | Explanation |
|-----------|-------------|-------------|
| Decimal → Binary | Repeated division by 2 | Remainders form binary digits (reversed order) |
| Decimal → Octal | `printf("%o")` | Uses built-in C formatting |
| Decimal → Hexadecimal | `printf("%X")` | Outputs uppercase A-F characters |

---

## 💻 Example Run


```bash
Enter a decimal number: 25

Binary:      11001

Octal:       31

Hexadecimal: 19

```

```bash

Enter a decimal number: 156

Binary:      10011100

Octal:       234

Hexadecimal: 9C
```

---

## ⚙️ Tech Stack

| Component | Description |
|---------|-------------|
| **Language** | C |
| **Concepts Used** | Loops, modular arithmetic, character arrays |
| **Headers** | `<stdio.h>`, `<string.h>` |
| **Compiler** | GCC / Clang |

---

## 🏆 Learning Outcomes

By completing this project, you will understand:

- How to perform **base conversions manually**
- How to **reverse strings in C** without built-in functions
- How **formatted printing specifiers** work: `%o` (octal), `%X` (hex)
- How to safely work with **arrays and loops**

---