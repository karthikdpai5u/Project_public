#include <stdio.h>
#include <string.h>
 
reverse()
{
  	char str[100], rev[100];
  	int i, j, count = 0;
	printf("\nReverse a String\n");
 
  	printf("\nEnter string to reverse : ");
	scanf("%s",str);
	printf("\nString Before Reverse : %s",str);
	//finding the length of the string
	while (str[count] != '\0')
	{
		count++;
	}
	j = count - 1;

	//reversing the string by swapping
	for (i=0;i<count;i++)
	{
		rev[i] = str[j];
		j--;
	}
	printf("\nString after Reverse : %s",rev);
}
