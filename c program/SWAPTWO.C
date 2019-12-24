//WAP in c to swap two number without third variabl
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("Enter two number\n");
	scanf("%d%d",&a,&b);
	printf("Without swapping\n");
	printf("a= %d\n",a);
	printf("b= %d\n",b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping\n");
	printf("a= %d\n",a);
	printf("b= %d\n",b);
	getch();
}