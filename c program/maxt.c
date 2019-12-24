//WAP in c to find the max number betwwen three number 
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,n3,max;
	clrscr();
	printf("Enter three number : ");
	scanf("%d %d %d",&n1,&n2,&n3);
	max=(n1>n2&&n1>n3)?n1:(n2>n1&&n2>n3)?n2:n3;
	printf("max number is = %d",max);
	getch();
	
}