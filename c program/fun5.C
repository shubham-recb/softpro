//WAP in c to add two number using return type & passing value
#include<stdio.h>
#include<conio.h>
int add(int a,int b);
void main()
{
	int x,y,res;
	clrscr();
	printf("Enter any two number : ");
	scanf("%d %d",&x,&y);
	res=add(x,y);
	printf("sum of number := %d",res);
	getch();
}
//defination of function
int add(int a,int b)
{
	int z;
	z=a+b;
	return z;
}