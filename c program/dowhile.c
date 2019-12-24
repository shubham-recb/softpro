//WAP in cto print the 1 to 100 number
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	i=1;//initialization
	clrscr();
	do 
	{
		printf("%d\t",i);
		//delay(500);
		i++;//updation
	}
	while(i<=100);//condition
	getch();
}