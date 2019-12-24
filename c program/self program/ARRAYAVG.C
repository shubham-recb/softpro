//WAP in c to print avg. of n number
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i,sum=0;
	float avg;
	clrscr();
	printf("Enter any 10 number : ");
	for(i=0;i<=9;i++)
		scanf("%d",&a[i]);
		for(i=0;i<=9;i++)
			sum=sum+a[i];
			avg=sum/10.0;
			printf("Average is %f",avg);
	getch();
}