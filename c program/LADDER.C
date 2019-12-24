//WAP in to find the value between 1 to 100
#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("Enter any number");
	scanf("%d",&n);
	if(n>=1&&n<=20)
	{
		printf("%d is between 1 to 20",n);
	}
	else if(n>=20&&n<=40)
	{
		printf("%d is between 20 to 40",n);
	}
	else if(n>=40&&n<=60)
	{
		printf("%d is between 40 to 60",n);
	}
	else if(n>=60&&n<=80)
	{
		printf("%d is between 60 to 80",n);
	}
	else if(n>=80&&n<=100)
	{
		printf("%d is between 80 to 100",n);
	}
	else
	{
		printf("%d is not betwwen 1 to 100",n);
	}
	getch();
}