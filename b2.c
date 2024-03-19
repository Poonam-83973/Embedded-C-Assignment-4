/*
	QWrite a function to calculate power using recursion.
*/

#include<stdio.h>
#include<math.h>

int power(int , int );

int main()
{
	int base, index, res;
	printf("Enter the number: ");
	scanf("%d",&base);

	printf("Enter the index: ");
	scanf("%d",&index);

	res= power(base, index);
	printf("The final answer is: %d\n",res);

	return 0;
}

int power(int base, int index)
{
	if(index != 0)
		return base* power(base,index-1);
	else
		return 1;
}


