#include <stdio.h>

biggest2() {
    int num1, num2;
    printf("\nBiggest of 2 numbers\n");
    // Asking for user input
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Comparing the two numbers
    if (num1 > num2) {
        printf("%d is the largest number.\n", num1);
    } else if (num2 > num1) {
        printf("%d is the largest number.\n", num2);
    } else {
        printf("Both numbers are equal.\n");
    }

    //return 0;
}

