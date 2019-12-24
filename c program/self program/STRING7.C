//WAP in c to concatenation string using strcat() function
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch[10]={'S','H','U','B','H','A','M','\0'};
	char ch2[10]={'R','S','T','R','A','V','A','D','I'};
	clrscr();
	strcat(ch,ch2);
	printf("Value of String is : %s ",ch);
	getch();
}