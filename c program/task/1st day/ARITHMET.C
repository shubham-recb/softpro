//WAP in to perform all arithmetic operation
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,add,sub,mult,div,mod;
	clrscr();
	printf("enter two number");
	scanf("%d%d",&a,&b);
	add=a+b;
	printf("Addition = %d\n",add);
	sub=a-b;
	printf("Substraction = %d\n",sub);
	mult=a*b;
	printf("Multiplication = %d\n",mult);
	div=a/b;
	printf("Division = %d\n",div);
	mod=a%b;
	printf("Modulus = %d\n",mod);
	getch();
}