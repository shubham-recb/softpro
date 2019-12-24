//WAP in c to find the max number between three number
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,n3;
	clrscr();
	printf("Printf Enter any three number");
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1>n2) //condition 1
	{
		if(n1>n3)  //condition 2
		{
			printf("%d is greater ",n1);
		}
		else
		{
			printf("%d is greater ",n3);
		}
	}
	else
		{
			if(n2>n3)
			{
				printf("%d is greater",n2);
			}
			else
			{
				printf("%d is greater",n3);
			}
		}
	getch();
}