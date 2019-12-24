//WAP in c to find greater number between 10 number
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],esum=0,osum=0,i;
	clrscr();
	printf("Enter 10 number : ");
	for(i=0;i<=9;i++)
	scanf("%d",&a[i]);
	for(i=0;i<=9;i++)
	{
		if(a[i]%2==0)
		{
			esum=esum+a[i];
		}
		else
		{
			osum=osum+a[i];
		}
			}
			printf("Summition of even number %d\n",esum);
		printf("Summition of odd number %d\n",osum);

	getch();
}