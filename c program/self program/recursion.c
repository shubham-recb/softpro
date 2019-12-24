//WAP in c  using recursion
#include<stdio.h>
#include<conio.h>
void main()
{
	int fact=0;
	clrscr();
	fact=factorial(5);
	printf("\n Facorial of 5 is :%d",fact);
	getch();
}
int factorial(int n)
{
	if(n<0)
		return -1;
	if(n==0)
		return 1;
	return(n*factorial(n-1));
}