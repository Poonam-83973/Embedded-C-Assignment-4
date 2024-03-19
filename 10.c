/*
	Q10. Write function to check whether given year is leap or not. Write another function to print
	number of days in given month.
*/

#include<stdio.h>

void print_leap(int year);
int print_days(int month);

int main()
{
	int year, month;
	printf("Year : ");
	scanf("%d",&year);

	printf("month : ");
	scanf("%d",&month);
	
	print_leap(year);
	print_days(month);

	return 0;
}

void print_leap(int year)
{
	if((year%4)==0 && (year%100)!=0)
		printf("The %d is leap year\n",year);
	else if((year%400)==0)
		printf("the %d is leap year\n",year);
	else
		printf("The %d is regular year\n",year);

}

int print_days(int month)
{
	int year;
	switch (month)
		{
		case 1 :
		case 3 :
		case 5 :
		case 7 :
		case 8 :
		case 10:
		case 12:
				printf("The %dth month having 31 days.\n",month);
				break;
	
		case 4 :
		case 6 :
		case 9 :
		case 11:
				printf("The %dth month having 30 days.\n",month);
				break;

		case 2 :
			    if(((month == 2) && (year % 400== 0)) || ((year%100)  != 0) && (year % 4 == 0))
					printf("The %dnd month having 29 days.\n",month);

   				else 
	  				printf("The %dnd month having 28 days.\n",month);
				break;
		default :
				printf("Please enter month number in between 1 to 12\n");

		}
}


