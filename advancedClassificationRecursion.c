#include"stdio.h"
#include"NumClass.h"

// Function to check if a number is an Armstrong number using recursion
int isArmstrongCheckRecursive(int num, int original, int sum, int digits) {
    if (num == 0) {
        return original == sum;
    } else {
        int digit = num % 10;
        int power = 1;

        // Calculate power iteratively
        for (int i = 0; i < digits; ++i) {
            power *= digit;
        }

        return isArmstrongCheckRecursive(num / 10, original, sum + power, digits);
    }
}

// Wrapper function to set up initial values and call the recursive function
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

    return isArmstrongCheckRecursive(num, original, sum, digits);
}
// Function to reverse the digits of a given number recursively
int reverseRecursive(int n, int reversed) {
    if (n == 0) {
        return reversed;
    }
    return reverseRecursive(n / 10, reversed * 10 + n % 10);
}

// Function to check if a number is a palindrome recursively
int isPalindrome(int n) {
    return (n == reverseRecursive(n, 0));
}