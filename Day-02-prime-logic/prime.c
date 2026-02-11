
#include <stdio.h>

int main() {
    int N, i, j, isPrime;

    // 1. Ask user for the range
    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Prime Numbers between 1 and %d are:\n", N);

    // 2. OUTER LOOP: Picks numbers from 2 to N
    for(i = 2; i <= N; i++) {
        
        // Assume the number 'i' is Prime initially (Set Flag = 1)
        isPrime = 1; 

        // 3. INNER LOOP: The "Checker"
        // Checks if 'i' is divisible by any number from 2 to i/2
        for(j = 2; j <= i/2; j++) {
            
            if(i % j == 0) {
                // Caught! It is divisible by 'j'
                isPrime = 0; // Set Flag to 0 (Not Prime)
                break;       // Stop checking, no need to check further
            }
        }

        // 4. Final Decision
        // If the flag is still 1, it means no one could divide it.
        if(isPrime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}