# 🎲 Snake & Ladder in C

*A simple 2-player Snake & Ladder console game with real dice rolls and a color-coded board.*

---

## 📘 Description

This is a turn-based game where two players roll a dice and move toward square 100. Landing on a ladder moves the player up, while landing on a snake moves the player down. The first player to reach exactly 100 wins.

---

## 🧠 Concepts Used

- Random number generation using `rand()` and `srand()`
- ANSI escape codes for colored output
- Array-based board mapping for snakes and ladders
- Turn-based game loop with `getchar()` pauses

---

## 🗂️ Features

- 🎮 Two-player gameplay
- 🎲 Dice roll values from 1 to 6
- 🟢 Ladders boost players upward
- 🔴 Snakes pull players downward
- 🖥️ Real-time, color-coded board updates

---

## 💻 Example Run

```
Player 1 rolled: 4
Player 2 rolled: 6
...
Player 1 Wins!

```

---

## ⚙️ Tech Stack

| Item | Detail |
| --- | --- |
| Language | C |
| Headers Used | stdio.h, stdlib.h, time.h |
| Display | ANSI color-coded terminal output |

---

## 🏆 Learning Outcomes

- Handling state in turn-based logic
- Using arrays to represent board effects
- Implementing randomness for gameplay
- Improving console UI with color formatting`

---