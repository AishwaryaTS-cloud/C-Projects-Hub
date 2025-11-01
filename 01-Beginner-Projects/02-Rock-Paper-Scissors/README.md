# ✊🖐✌ Rock-Paper-Scissors (C Project)

*A fun, interactive console game built in C where you compete against the computer using random moves and logic-based outcomes.*

---

## 📘 Description

This project is a **Rock-Paper-Scissors Game** implemented in **C language**.

The player selects **Rock (r)**, **Paper (p)**, or **Scissors (s)**, and the computer randomly generates its own choice.

The program then compares both choices and determines the outcome — **Win**, **Lose**, or **Draw** — using conditional logic.

It’s a simple yet engaging program that demonstrates the use of **random number generation**, **functions**, and **conditional statements** in C.

---

## 🧠 Concepts Used

- **Functions** for modular logic (separate `game()` function)
- **Conditional statements** (`if`, `else if`, `return`)
- **Random number generation** using `rand()` and `srand()`
- **Time-based seeding** with `time(NULL)`
- **Character input and comparison**
- **Switch-free logic** for outcome determination

---

## 🗂️ Features

- 🎮 Interactive user input (`r`, `p`, or `s`)
- 🧠 Smart random computer choice using `rand()`
- 🥇 Determines **Win**, **Lose**, or **Draw** instantly
- 🧾 Displays both user and computer choices
- 🚫 Handles invalid inputs gracefully (if extended)

---

## 🧩 How It Works

1. The user enters one of the following choices:
    - `r` → Rock
    - `p` → Paper
    - `s` → Scissors
2. The computer generates a random number (0–2) and maps it to its own move.
3. The `game()` function compares both choices:
    - Same choice → Draw
    - Rock beats Scissors → Win
    - Paper beats Rock → Win
    - Scissors beat Paper → Win
    - Otherwise → Lose
4. The final result is displayed on the screen.

---

## 💻 Example Run

```c
Welcome to Rock-Paper-Scissors!
Enter your choice: r = Rock, p = Paper, s = Scissors
Your choice: r

You chose: r
Computer chose: p
Sorry! You lost the game.

```

```c
Welcome to Rock-Paper-Scissors!
Enter your choice: r = Rock, p = Paper, s = Scissors
Your choice: s

You chose: s
Computer chose: p
Congratulations! You won the game!

```

---

## ⚙️ Tech Stack

| Component | Description |
| --- | --- |
| **Language** | C |
| **Concepts Used** | Functions, Conditionals, Random Number Generation |
| **Headers** | `<stdio.h>`, `<stdlib.h>`, `<time.h>` |
| **Compiler** | GCC / Clang |

---

## 🏆 Learning Outcomes

By building this project, you’ll learn:

- How to use **functions** in C for modular programming
- How to **generate random outcomes** using `rand()` and `srand()`
- How to use **conditional logic** to determine winners
- How to **handle character input and output** effectively