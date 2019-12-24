//WAP in c to find the day week month year
#include<stdio.h>
#include<conio.h>
void main()
{
	int day,week,month,year;
	clrscr();
	printf("Enter days number");
	scanf("%d",&day);
	year=day/365;
	day=day%365;
	month=day/30;
	day=day%30;
	week=day/7;
	day=day%7;
	printf("year = %d\nmonth = %d\nweek = %d\ndays = %d",year,month,week,day);
	getch();
}