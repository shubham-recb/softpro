//WAP in c to add two number using no return type & passing value
#include<stdio.h>
#include<conio.h>
void add(int a,int b);
void main()
{
	int x,y;
	clrscr();
	printf("Enter any two number : ");
	scanf("%d %d",&x,&y);
	add(x,y);//calling function
	getch();
}
//defination of function
void add(int a,int b)
{
	int sum;
	sum=a+b;
	printf("sum of number := %d",sum);
}