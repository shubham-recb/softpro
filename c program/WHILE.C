//Wap in c to print 1 to 100 number by using while loop
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	i=1;
	while(i>=100)
	{
		printf("%d\t",i);
		delay(500);
		i++;
	}
	getch();
}