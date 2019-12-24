//WAP in c to check number palindrome or not
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,temp,r,sum=0;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	if(temp==sum)
	{
		printf("Number are Palindrome");
	}
	else
	{
		printf("Number are not palindrome");
	}
	getch();
}
