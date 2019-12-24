//WAP in c to take input string from user in array
#include<stdio.h>
#include<conio.h>
void main()
{
	char s[20];
	clrscr();
	printf("Enter your Name: ");
      //	scanf("%s",s); space,tab present terminate line
	gets(s);
	printf("%s",s);
	getch();
}