# include  <stdio.h>
# include "NumClass.h"



int main(){
        int num1, num2;

    // Input two positive integers from the user
    scanf("%d", &num1);

    scanf("%d", &num2);

    //int test=isPrime(num1);
    //printf("%d\n",test);
    //int test1=isStrong(num1);
    //printf("%d\n",test1);
    //int test2=isArmstrong(num1);
    //printf("%d\n",test2);
    //int test3=isPalindrome(num1);
    //printf("%d\n",test3);
    //int test4=isArmstrongRecursive(num2);
    //printf("%d\n",test4);
    //int test5=isPalindromeRecursive(num1);
    //printf("%d\n",test5);

    // Ensure that the numbers are positive
    if (num1 <= 0 || num2 <= 0) {
        //printf("Please enter positive integers only.\n");
    } else {
        // Print each of the desired rows using the provided C functions
        printf("The Armstrong numbers are:");
        for (int num = num1; num <= num2; ++num) {
            if (isArmstrong(num)) {
                printf("%d ", num);
            }
        }
        printf("\n");
        printf("The Palindromes are:");
        for (int num = num1; num <= num2; ++num) {
            if (isPalindrome(num)) {
                printf("%d ", num);
            }
        }
        printf("\n");

        printf("The Prime numbers are:");
        for (int num = num1; num <= num2; ++num) {
            if (isPrime(num)) {
                printf("%d ", num);
            }
        }
        printf("\n");

        printf("The Strong numbers are:");
        for (int num = num1; num <= num2; ++num) {
            if (isStrong(num)) {
                printf("%d ", num);
            }
        }
        printf("\n");

    }


    return 0;
}
