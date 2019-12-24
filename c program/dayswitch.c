//WAP in c to display week days from 1 to 7 by using switch case statement
#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	clrscr();
	printf("Enter any number from 1 to 7  for print days");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
		{
			printf("Today days is  Monday");
		break;
		}
		case 2:
		{
			printf("Today days is  Tuesday");
		break;
		}
		case 3:
		{
			printf("Today days is  Wednesday");
		break;
		}
		case 4:
		{
			printf("Today days is  Thursday");
		break;
		}
		case 5:
		{
			printf("Today days is  Friday");
		break;
		}
		case 6:
		{
			printf("Today days is  Saturaday");
		break;
		}
		case 7:
		{
			printf("Today days is  Sunday");
		break;
		}
		default:
		{
			printf("Number is invalid");
			break;
		}
	}
	getch();
}