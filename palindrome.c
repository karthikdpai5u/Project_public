#include <stdio.h>
palindrome() {
  int n, reversed = 0, remainder, original;
  printf("\nPalindrome of a Number\n");
    printf("\nEnter an integer: ");
    scanf("%d", &n);
    original = n;

    // reversed integer is stored in reversed variable
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (original == reversed)
        printf("\n%d is a palindrome.", original);
    else
        printf("\n%d is not a palindrome.", original);

    //return 0;
}
