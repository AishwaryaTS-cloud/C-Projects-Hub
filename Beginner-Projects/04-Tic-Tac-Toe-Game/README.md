# 🎮 Tic Tac Toe (C Project)

*A classic 3×3 strategy game between Human and Computer — built in C with the **Minimax algorithm** for unbeatable AI.*

---

## 📘 Description

This project is a **Tic Tac Toe Game** implemented in C.

It allows a human player to challenge an **AI-powered computer opponent** that uses the **Minimax algorithm** to make optimal moves.

The computer never loses — at best, you can **force a draw** if you play perfectly.

The game features:

- Interactive turn-based gameplay
- Clean ASCII-based board display
- AI decision-making using recursion
- Player vs Computer mode with unbeatable logic

---

## 🧠 Concepts Used

- **2D Arrays** for representing the game board
- **Recursion** for the Minimax algorithm
- **Conditional logic** and **loops** for game control
- **Structures (`struct`)** for AI move tracking
- **Evaluation functions** for scoring game states
- **Function modularity** for clean and reusable code

---

## 🗂️ Features

- 🤖 **Smart Computer AI:** Uses Minimax for perfect play
- 🧍 **Human vs Computer Mode:** You play as `X`, the computer as `O`
- 🧩 **Win/Draw Detection:** Handles all game outcomes
- 🧾 **Instruction Guide:** Displays cell numbers for easy input
- 🎯 **Depth-Aware Scoring:** AI prefers faster wins and delays losses

---

## 🧩 How It Works

1. The board is displayed as a 3×3 grid labeled **1–9**.
2. You choose your move by entering a cell number.
3. The computer calculates its optimal move using **Minimax**.
4. The board updates after every turn.
5. The game ends when either side wins or the grid fills (draw).

---

## 🧮 Example Run

```
Tic-Tac-Toe Game
Choose a cell numbered from 1 to 9:

 1 | 2 | 3
---|---|---
 4 | 5 | 6
---|---|---
 7 | 8 | 9

Computer placed O at cell 1
 O |   |
---|---|---
   |   |
---|---|---
   |   |

Enter your move (1–9): 5
 O |   |
---|---|---
   | X |
---|---|---
   |   |

```

---

## ⚙️ Tech Stack

| Component | Description |
| --- | --- |
| **Language** | C |
| **Algorithm** | Minimax (Game Theory) |
| **Compiler** | GCC / Clang |
| **Headers Used** | `<stdio.h>`, `<stdlib.h>`, `<stdbool.h>`, `<time.h>` |

---

---

## 🏆 Learning Outcomes

By building this project, you’ll understand:

- How **game trees** and **decision algorithms** work
- How to implement **AI in C using recursion**
- How to **modularize** a project with functions and structures
- How to handle **user input and validation** gracefully