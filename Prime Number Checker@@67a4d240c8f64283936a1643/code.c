#include <stdio.h>

// Function to check if a number is prime
int prime(int num) {
    if (num <= 1) {
        return 0;  // Not a prime number
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // Not a prime number
        }
    }
    return 1;  // Prime number
}

int main() {
    int num1, num2;
    
    // Read the number of test cases
    scanf("%d", &num1);

    // Process each input number
    for (int i = 1; i <= num1; i++) {
        scanf("%d", &num2);
        printf("%d\n", prime(num2));  // Print 1 if prime, 0 if not
    }

    return 0;
}
