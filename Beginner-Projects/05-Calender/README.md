# 📅 Yearly Calendar Program (C Project)

*A C program that prints the full calendar of any given year using date calculation logic and proper formatting.*

---

## 📘 Description

This project is a **Yearly Calendar Program** written in **C language**.

It displays the **complete calendar** for a given year (January to December), automatically adjusting the **start day of each month** and correctly handling **leap years**.

The program uses a well-known **day-of-week calculation algorithm** (similar to **Sakamoto’s Algorithm**) to determine on which weekday each month begins.

---

## 🧠 Concepts Used

- **Modular arithmetic** to compute the day of the week
- **Leap year logic** (Gregorian calendar rules)
- **Arrays and functions** to structure month data
- **Nested loops** to format calendar output
- **Switch-case** used internally via month-day mapping

---

## 🗂️ Features

- 🗓️ Prints **all 12 months** of the requested year
- 📍 Accurately aligns dates under **Sun - Sat**
- 📆 Handles **leap years** correctly (29-day February)
- 🔢 Accepts **any valid positive year**
- ✨ Clean, readable month-by-month layout

---

## 🧩 How It Works

1. The user is prompted to **enter a year** (e.g., 2025).
2. `dayNumber()` calculates the **weekday of January 1st** using:
    - `year + year/4 - year/100 + year/400` + month lookup adjustment
3. The program loops through each month and:
    - Prints the **month name**
    - Prints days aligned under weekday headers
4. Leap years are computed using the **Gregorian rule**

---

## 💻 Example Run

Enter year (e.g. 2025): 2025

```bash

-------------- January -------------
 Sun Mon Tue Wed Thu Fri Sat
                       1   2
   3   4   5   6   7   8   9
  10  11  12  13  14  15  16
  17  18  19  20  21  22  23
  24  25  26  27  28  29  30
  31

 ------------- February -------------     
 Sun Mon Tue Wed Thu Fri Sat
       1   2   3   4   5   6
   7   8   9  10  11  12  13
  14  15  16  17  18  19  20
  21  22  23  24  25  26  27
  28  29

 ------------- March -------------        
 Sun Mon Tue Wed Thu Fri Sat
           1   2   3   4   5
   6   7   8   9  10  11  12
  13  14  15  16  17  18  19
  20  21  22  23  24  25  26
  27  28  29  30  31

 ------------- April -------------        
 Sun Mon Tue Wed Thu Fri Sat
                       1   2
   3   4   5   6   7   8   9
  10  11  12  13  14  15  16
  17  18  19  20  21  22  23
  24  25  26  27  28  29  30

 ------------- May -------------
 Sun Mon Tue Wed Thu Fri Sat
   1   2   3   4   5   6   7
   8   9  10  11  12  13  14
  15  16  17  18  19  20  21
  22  23  24  25  26  27  28
  29  30  31

 ------------- June -------------
 Sun Mon Tue Wed Thu Fri Sat
               1   2   3   4
   5   6   7   8   9  10  11
  12  13  14  15  16  17  18
  19  20  21  22  23  24  25
  26  27  28  29  30

 ------------- July -------------
 Sun Mon Tue Wed Thu Fri Sat
                       1   2
   3   4   5   6   7   8   9
  10  11  12  13  14  15  16
  17  18  19  20  21  22  23
  24  25  26  27  28  29  30
  31

 ------------- August -------------       
 Sun Mon Tue Wed Thu Fri Sat
       1   2   3   4   5   6
   7   8   9  10  11  12  13
  14  15  16  17  18  19  20
  21  22  23  24  25  26  27
  28  29  30  31

 ------------- September -------------    
 Sun Mon Tue Wed Thu Fri Sat
                   1   2   3
   4   5   6   7   8   9  10
  11  12  13  14  15  16  17
  18  19  20  21  22  23  24
  25  26  27  28  29  30

 ------------- October -------------      
 Sun Mon Tue Wed Thu Fri Sat
                           1
   2   3   4   5   6   7   8
   9  10  11  12  13  14  15
  16  17  18  19  20  21  22
  23  24  25  26  27  28  29
  30  31

 ------------- November -------------     
 Sun Mon Tue Wed Thu Fri Sat
           1   2   3   4   5
   6   7   8   9  10  11  12
  13  14  15  16  17  18  19
  20  21  22  23  24  25  26
  27  28  29  30

 ------------- December -------------
 Sun Mon Tue Wed Thu Fri Sat
                   1   2   3
   4   5   6   7   8   9  10
  11  12  13  14  15  16  17
  18  19  20  21  22  23  24
  25  26  27  28  29  30  31

```
---

## ⚙️ Tech Stack

| Component | Description |
| --- | --- |
| **Language** | C |
| **Core Logic** | Date Arithmetic, Loops, Arrays |
| **Header Used** | `<stdio.h>` |
| **Compiler** | GCC / Clang / MinGW |

---

## 🏆 Learning Outcomes

By building this program, you will learn:

- How **day-of-week algorithms** work
- How to **calculate leap years** accurately
- How to **format aligned console output**
- How to break logic into **modular functions**