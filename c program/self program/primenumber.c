//WAP in c to check that given number is prime or not
#include<stdio.h>
#include<conio.h>
void main()
{
	int num,i,div=0,flag=0;
	clrscr();
	printf("Enter any number for check prime number");
	scanf("%d",&num);
	div=num/2;
	for(i=2;i<=div;i++)
	{
		if(num%i==0)
		{
			printf("Number is not prime");
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("Number is prime number");
	}
	getch();
}