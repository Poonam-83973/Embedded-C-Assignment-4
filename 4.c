/*
	Q4.In 3rd program, division may fail if denominator is zero. Use global variable as an error flag to
	avoid this problem.
*/


#include<stdio.h>

int flag = 0;

int calculator(int, char, int);

int main()
{
	int num1, num2;
	char opr;
	printf("Enter the 1st number: ");
	scanf("%d",&num1);
	printf("Enter the operand: ");
	scanf("%*c%c",&opr);
	printf("Enter the 2nd number: ");
	scanf("%d",&num2);

	int res=calculator(num1, opr, num2);

	if(flag == 0)
		printf("The Result of above expression is %d\n",res);
	else
		flag=0;

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
					if(num2 != 0)
						result = num1 / num2;
					else
					  {  
						printf("Denominator zero error\n");
						flag = 1;
				      }
					break;
		default :
					printf("Invalid operation\n");
	}

	return result;
}
