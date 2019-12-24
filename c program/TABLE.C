//WAP in c to find the table of any number as the following format
#include<stdio.h>
#include<conio.h>
void main()
{
	int num,i,table=0;
	clrscr();
	printf("Enter any number");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{
		table=num*i;
		printf("\n%d * %d = %d",num,i,table);
	}
		
	getch();
}