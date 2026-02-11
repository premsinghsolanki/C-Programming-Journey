# Day 1: The Digital Doctor (Logic Building) 👨‍⚕️

## 📝 Problem Statement
Create a program that acts like a doctor, checking patient temperatures continuously until the user says "No". It should diagnose Fever, Mild Fever, or Healthy based on the input.

## 🧠 Concepts Learned 

### 1. Type Casting (The "1.8 vs 1" Logic)
I learned that `int / int = int` in C.
- **Mistake:** `9 / 5` gives `1`.
- **Correction:** `(float)9 / 5` gives `1.8`.
- **Lesson:** Always use explicit type casting when precision matters in formulas.

### 2. Do-While Loop (Exit Control)
- **Why used?** A doctor must check the *first* patient before asking if there are more.
- A `while` loop checks the condition first (Entry Control).
- A `do-while` loop executes at least once (Exit Control). This was logically the correct choice.

### 3. Else-If Ladder
Used to create a decision hierarchy:
- `> 37.5` -> High Fever
- `37.0 - 37.5` -> Mild Fever
- `Else` -> Healthy

## 💻 Code Snippet
```c
// The core logic for conversion
celsius = (fahrenheit - 32) * ((float)9 / 5);
