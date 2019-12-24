//WAP in c to add two number using no return type & no passing value
#include<stdio.h>
#include<conio.h>
void add();
void main()
{
	clrscr();
	add();
	getch();
}
void add()
{
	int a,b,sum;
	printf("Enter any two number");
	scanf("%d  %d",&a,&b);
	sum=a+b;
	printf("sum of number := %d",sum);
}