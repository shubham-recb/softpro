//WAP in c to calculate the sum of natuaral number
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sum=0,natu;
	clrscr();
	printf("Enter natural number");
	scanf("%d",&natu);
	for(i=1;i<=natu;i++)
	{
		sum=sum+i;
	}
	printf("sum of natural number %d",sum);
	getch();
}