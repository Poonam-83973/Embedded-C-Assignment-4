/*
	Q8.Write a function to return next term of Fibonacci series with each call to the function.
*/


#include<stdio.h>
long fibonacci(long num1,long num2);
long fibonacci(long num1,long num2)
{
    long num3=0,result = 0;
    num3 = num1+num2;
    result = num3;
    return result;
}
int main()
{
  int count = 0;
  long num1 = 0,num2 = 1,result = 0;
  printf("Enter the count of the numbers you want to print in the fibonacci series\n");
  scanf("%d",&count);
  printf("The Fibonacci is 0,1");
  for(int i = 3;i<=count;i++){
   result =  fibonacci(num1,num2);
   num1 = num2;
   num2 = result;
   printf(",%ld",result);
  }
  printf("\n");

}

