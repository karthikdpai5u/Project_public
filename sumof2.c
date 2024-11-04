#include <stdio.h>
sumof2() {    

    int number1, number2, sum;
  printf("\nSum of Two Number\n"); 
    printf("\nEnter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculate the sum
    sum = number1 + number2;      
    
    printf("%d + %d = %d\n", number1, number2, sum);
    //return 0;
}

