//WAP in c to take character bu using getch() and display that character also.
#include<stdio.h>
#include<conio.h>
void nmain()
{
	char ch;
	clrscr();
	printf("Enter any character: ");
	ch=getch();
	printf("\n Entered Character by User is : %c",ch);
	getch();
}