//WAP in c to use of airthmetic operator//
#include<stdio.h>
#include<conio.h>
void main()
{
	int days,year,month,week;
	clrscr();
	printf("Enter days : ");
	scanf("%d",&days);
	year=days/365;
	days=days%365;
	month=days/30;
	days=days%30;
	week=days/7;
	days=days%7;
	prntf("year= %d\nmonth= %d\nweek= %d\ndays=%d",year,month,week,days);
	getch();
}