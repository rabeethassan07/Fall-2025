//Leap Year Checker
#include<stdio.h>
int main()
{
	int year;
	
	printf("Please Enter the Year:		");
	scanf("%d",&year);
	
	if(( year% 400 == 0) || ( year% 4 == 0 && year% 100 != 0))
    { 
		printf("The Year You entered Is a leap year!");
    }
    
	else
	{
		printf("The Year is not a leap year");
	}

}
