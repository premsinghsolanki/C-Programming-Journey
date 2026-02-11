# Prime Number Logic: Analysis 🧠

## 📝 Problem Statement
Determine if a given number is Prime or not. 
*A Prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself.*

## 🧠 The Logic (Building from Scratch)

### 1. The Naive Approach
Check every number from `2` to `n-1`. If any number divides `n`, it's not prime.
- **Complexity:** $O(n)$
- **Issue:** Very slow for large numbers.

### 2. The Engineering Optimization 
We don't need to check up to $n$. We only need to check up to the **Square Root** of $n$ ($\sqrt{n}$).
- **Why?** If $n = a \times b$, then one of them ($a$ or $b$) must be less than or equal to $\sqrt{n}$.
- **Complexity:** $O(\sqrt{n})$ - *Much faster!*

## 💻 Implementation Highlights
Used a `for` loop with a `flag` variable to track primality.

```c
for(int i = 2; i <= sqrt(n); i++) {
    if(n % i == 0) {
        isPrime = 0; // Not a prime
        break;
    }
}