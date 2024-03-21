/*
	Q7.Write a function to calculate sum and product into a single function.
		a. Using global variables (for result)
		b. Without using global variables
*/

#include<stdio.h>

int sum_sub(int *num1, int *num2)
{
	int temp;
	temp= *num1 + *num2;
	*num2= *num1 - *num2;
	*num1 = temp;
}

int main()
{
	int num1=5, num2=3;
	printf("num1=%d  num2=%d\n",num1,num2);
	sum_sub(&num1, &num2);
	printf("Addition=%d    subtraction=%d\n",num1,num2);

	return 0;
}
