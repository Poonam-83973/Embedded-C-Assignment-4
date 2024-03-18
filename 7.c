/*
	Q7. Write a function to print given number of terms of Fibonacci series.
*/

#include<stdio.h>

int fibonacci_num(int, int, int);

int main()
{
int a,b,sum,n;
    a=1,b=1;
    printf("Enter the n number of series : ");
    scanf("%d",&n);
	int result=fibonacci_num(1,1,n);
	return 0;
}

int fibonacci_num(int a, int b, int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
	{
        a=b;
        b=sum;
        sum=a+b;
        printf("%d, ",sum);
    }

}
