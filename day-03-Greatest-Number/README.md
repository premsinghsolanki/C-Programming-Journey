# Day 2: Finding the Greatest of Three Numbers (Boundary Analysis) 🏆

## 📝 Problem Statement
Create a C program using **Functions (No Return with Argument)** to find the largest among three user-defined integers.

## 🧠 Logic Building (Origin to Top)

### 1. The Architecture
Used the `void findGreatest(int a, int b, int c)` function model. 
- **Origin:** Instead of doing everything in `main()`, we pass data to a specialized function.
- **Top:** This keeps the code modular and reusable.

### 2. Handling Edge Cases (The Real Learning)
While coding, I identified two critical scenarios where a simple `>` (greater than) logic might behave unexpectedly:
- **Scenario A:** All three numbers are equal ($10, 10, 10$).
- **Scenario B:** Two numbers are equal and greater than the third ($10, 5, 10$).

### 3. The Solution: Inclusive Logic ($\ge$)
To ensure the program is robust, I used inclusive operators ($\ge$). 
- **Logic:** If $a \ge b$ AND $a \ge c$, then $a$ is definitely the greatest, even if others are equal to it.

## 💻 Code Snippet
```c
void findGreatest(int a, int b, int c) {
    if (a >= b && a >= c) {
        printf("%d is the greatest.", a);
    } else if (b >= a && b >= c) {
        printf("%d is the greatest.", b);
    } else {
        printf("%d is the greatest.", c);
    }
}