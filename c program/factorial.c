//WAP in c to find the factorial number of any number in to the following format 5!=5*4*3*2*1=120
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,num,res=1;
	clrscr();
	printf("Enter any number");
	scanf("%d",&num);
	for(i=num;i>0;i--)
	{
		res=res*i;
		if(i!=1)
		{
			printf("%d * ",i);
		}
		else
		{
			printf("%d = ",i);
		}
	}
		printf("%d",res);
	getch();
} 