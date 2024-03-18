/*
	Q2. Write a function to calculate power.
*/

#include<stdio.h>

int power(int, int);

int main()
{
	int base,index;
	printf("Enter the base: ");
	scanf("%d",&base);
	printf("Enter the index: ");
	scanf("%d",&index);
	printf("The answer of above question is: %d\n",power(base,index));
	return 0;
}

int power(int base, int index)
{	
	int pow=1;
	for(int i=1; i<=index; i++)
	{
		pow=pow*base;
	}
	return pow;
}
