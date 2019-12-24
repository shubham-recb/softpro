//WAP in c to print the 1 to 100 number
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	for(i=1;i<=100;i++)
	{
		printf("%d\t",i); //body of loop
		delay(500);
		i++;
	}
	getch();
}