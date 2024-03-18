/*
	Q6. Write a function to print a given number in hexadecimal format.
*/

#include<stdio.h>

int print_hexaNum(int);

int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);

	int res=print_hexaNum(num);

	return 0;
}

int print_hexaNum(int num)
{
    printf("%x\n",num);
}

