//WAP inc to make a calculator using switch case
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,opt,sum,sub,mult,div,mod;
	clrscr();
	printf("Enter First number");
	scanf("%d",&a);
	printf("Enter second number");
	scanf("%d",&b);
	printf("Enter your option");
	printf("1-sum \n2-Sub \n3-mult \n4-div \n5-mod");
	scanf("%d",&opt);
	switch(opt)
	{
		case 1:
				sum=a+b;
				printf("\nAddition of Number %d",sum);
		break;
		case 2:
			       sub=a-b;
				printf("\nSubstraction of Number %d",sub);
		break;
		case 3:
				mult=a*b;
				printf("\nMultiplication of Number %d",mult);
		break;
		case 4:
				div=a/b;
				printf("\nDivision of Number %d",div);
		break;
		case 5:
				mod=a%b;
				printf("\nModulus of Number %d",mod);
		break;
		default:
				printf("\n Please Choose Correct option");
		break;
	}
	getch();
}