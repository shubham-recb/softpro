//WAP in c to add two number using return type & no passing value
#include<stdio.h>
#include<conio.h>
int add();
void main()
{
	int res=add();
	clrscr();
	printf("sum of number := %d",res);
	getch();
}
//defination of function
int add()
{
	int x,y,z;
	printf("Enter any two number : ");
	scanf("%d %d",&x,&y);
	z=x+y;
	return z;
}