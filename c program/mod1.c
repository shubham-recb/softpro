//WAP in c to find the remind value of the following expression
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,rem;
	clrscr();
	printf("Enter fiest number : ");
	scanf("%d",&a);
	printf("Enter second number : ");
	scanf("%d",&b);
	rem=a%b;
	printf("%d %% %d=%d",a,b,rem);
	getch();
}