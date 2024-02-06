#include "stdio.h"

int isPrime(int n){
     if (n <= 1) {
        return 0; // 0 and 1 are not prime numbers
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // If n is divisible by any number from 2 to sqrt(n), it's not prime
        }
    }

    return 1; // If no divisor found, it's a prime number
}
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Function to check if a number is a strong number
int isStrong(int n) {
    int original = n;
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum += factorial(digit);
        n /= 10;
    }

    return (sum == original);
}