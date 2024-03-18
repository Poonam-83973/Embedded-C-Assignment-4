/*
	Q3. Write a function to implement four function calculator. Function would take operands and
	operator as arguments and returns result.
*/


#include<stdio.h>

int calculator(int, char, int);

int main()
{
	int num1, num2;
	char opr;
	printf("Enter the 1st number: ");
	scanf("%d",&num1);
	printf("\nEnter the operand: ");
	scanf("%*c%c",&opr);
	printf("\nEnter the 2nd number: ");
	scanf("%d",&num2);

	int res=calculator(num1, opr, num2);
	printf("The Result of above expression is %d\n",res);

	return 0;
}

int calculator(int num1, char opr, int num2)
{
	int result;

	switch(opr)
	{
		case '+':
					result = num1 + num2;
					break;
		case '-':
					result = num1 - num2;
					break;
		case '*':
					result = num1 * num2;
					break;
		case '/':
					result = num1 / num2;
					break;
		default :
					printf("Invalid operation\n");
	}

	return result;
}
