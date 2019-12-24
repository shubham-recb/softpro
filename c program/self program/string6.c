//WAP in c to copy a string using strcpy() function
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch[10]={'S','H','U','B','H','A','M','\0'};
	char ch2[20];
	clrscr();
	strcpy(ch2,ch);
	printf("Value of second string is:%s",ch2);
	getch();
}
