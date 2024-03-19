/*
	Q.Write a function to swap two numbers.
*/

#include<stdio.h>

void swap_fun(int *, int *);

int main()
{
	int num1, num2;
	printf("Enter first number: ");
	scanf("%d",&num1);	
	printf("Enter second number: ");
	scanf("%d",&num2);
	printf("Before swapping... num1=%d    num2=%d\n",num1, num2);
	swap_fun(&num1, &num2);
	printf("After swapping...  num1=%d    num2=%d\n",num1,num2);

	return 0;
}

void swap_fun(int *ptr1,int *ptr2)
{
	int temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
