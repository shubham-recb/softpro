//WAP in in cto check whether number positive,negative or zero
#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	clrscr();
	printf("Enter any number");
	scanf("%d",&num);
	if(num>0)
	{
		printf("%d is positive",num);
	}
	else if(num<0)
	{
		printf("%d is negative",num);
	}
	else
	{
		printf("%d is zero",num);
	}
	getch();
}