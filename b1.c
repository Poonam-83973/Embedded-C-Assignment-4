/*
	Q1.Write a function to calculate factorial of a given number using recursion.
*/


#include<stdio.h>
int fact_num(int n);

int main() 
{
    int n;
    printf("Enter a integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %d\n", n, fact_num(n));
    return 0;
}

int fact_num(int n)
{
    if (n>=1)
        return n*fact_num(n-1);
    else
        return 1;
}
