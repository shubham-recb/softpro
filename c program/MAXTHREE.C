//WAP in c to find the max number between three number
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,max;
	clrscr();
	printf("Enter three number : ");
	scanf("%d%d%d",&a,&b,&c);
	max=(a>b&&a>c)?a:(b>a&&b>c)?b:c;
	{
	printf("max number is %d",max);
	}
	getch();
}

