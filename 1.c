/*
	1. Write a function to calculate factorial of a given number.
*/

#include<stdio.h>

int fact(int);

int main()
{
	int num;
	printf("entered number is ");
	scanf("%d",&num);

	int res=fact(num);
	printf("The factorial of %d is %d\n",num,res);
	return 0;
}

int fact(int num)
{
	int fact=1;
	for(int i=1; i<=num; i++)
		fact=fact*i;
   
    return fact;
}
