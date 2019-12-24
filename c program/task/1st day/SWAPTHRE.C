//WAP in c to swap three number
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("\n\nEnter three number for swapping");
	scanf("%d%d%d",&a,&b,&c);
	printf("\n\nbefore swapping value");
	printf("\na = %d",a);
	printf("\nb = %d",b);
	printf("\nc = %d",c);
	a=a+b+c;
	b=a-b-c;
	c=a-b-c;
	a=a-b-c;
	printf("\n\nAfter swapping");
	printf("\na = %d",a);
	printf("\nb = %d",b);
	printf("\nc = %d",c);
	getch();


}