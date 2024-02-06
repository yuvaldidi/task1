#include"stdio.h"

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int original = num;
    int sum = 0;
    int digits = 0;

    // Calculate the number of digits
    int temp = num;
    while (temp > 0) {
        temp /= 10;
        ++digits;
    }

    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        int power = 1;

        // Calculate power iteratively
        for (int i = 0; i < digits; ++i) {
            power *= digit;
        }

        sum += power;
        temp /= 10;
    }

    return original == sum;

}
int reverse(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

// Function to check if a number is a palindrome
int isPalindrome(int n) {
    return (n == reverse(n));
}


