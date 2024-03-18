/*
	Q5. Write a function to print a given character for a given number of times.
*/

#include<stdio.h>
int print_repeat(char, int);
int flag=0;
int main()
{
	int num;
	char ch;
	printf("Enter the character: ");
	scanf("%c",&ch);
	printf("Enter a number to repeat the n times that character: ");
	scanf("%d",&num);

	char result=print_repeat(ch, num);
	printf("%c\n",result);

	return 0;
}

int print_repeat(char ch, int num)
{
	for(int i=1; i<=num; i++)
	{
		printf(" %c",ch);
	}
}
