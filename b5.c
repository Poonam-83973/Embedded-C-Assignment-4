/*
	QWrite a function to print a given number in binary format.
*/

#include <stdio.h>

int binary_num(int num);
void print_fun();

int main()
{
    int num, binaryNum = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &num);
	
	binary_num(num);
	return 0;
}

int binary_num(int num)
{ 
	int i=1, remainder, binaryNum=0;
    while (num != 0)
	{
        remainder = num % 2;
        num /= 2;
        binaryNum += remainder * i;
        i *= 10;
    }	
    printf("Binary number: %d\n", binaryNum);
}



    
