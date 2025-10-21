# 🎯 Hangman Game (C Project)

*A fun word-guessing game built in C, featuring hints, ASCII graphics, and a random word generator.*

---

## 📘 Description
This project is a **Hangman Game** implemented in C.  
It challenges players to **guess a secret word letter by letter**, based on a given hint.  

Players have **6 chances** to guess wrong before the hangman is fully drawn.  

The program includes:
- Random word selection from a list  
- Educational hints for each word  
- ASCII hangman drawing  
- Input validation and clean user prompts  

---

## 🧠 Concepts Used
- **Structures (`struct`)** to store words and hints  
- **Arrays** and **strings** for word processing  
- **Randomization** with `rand()` and `srand()`  
- **Functions** for modular code design  
- **Character validation** using `<ctype.h>` (`tolower()`, `isalpha()`)  
- **Game loop** and **conditional logic**

---

## 🗂️ Features
- 💡 Word-specific hint before every round  
- 🎲 Random word selection from a fixed list  
- 🔠 Input check to prevent repeated guesses  
- 😵 ASCII hangman drawing for wrong attempts  
- 🏆 Win and lose conditions clearly displayed  

---

## 🎥 Output Demo

### ✅ Correct Guess Example
![Hangman Game Output - Correct Guess](https://s6.ezgif.com/tmp/ezgif-6c7675d8b02918.gif)

### ❌ Wrong Guess Example
![Hangman Game Output - Wrong Guess](<02final (1) gif.gif>)