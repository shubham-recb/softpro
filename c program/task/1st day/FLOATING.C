//WAP in c to multiply two floating values
#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,res;
	clrscr();
	printf("Enter First float  value");
	scanf("%f",&a);
	printf("Enter Second float value");
	scanf("%f",&b);
	res=a*b;
	printf("Floating value are %.2f",res);
	getch();
}