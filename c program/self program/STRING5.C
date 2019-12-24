//WAP in c to print string size using strlen() function
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch[20]={'S','H','U','B','H','A','M','\0'};
	clrscr();
	printf("Size of array : %d",strlen(ch));
	getch();
}