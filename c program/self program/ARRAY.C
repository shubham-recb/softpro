//WAP in c using array
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0;
	int marks[5];
	marks[0]=10;
	marks[1]=20;
	marks[2]=30;
	marks[3]=40;
	marks[4]=50;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\n marks = %d",marks[i]);
	}
	getch();
}