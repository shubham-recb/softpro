//WAP in c to check a character is an alphabet or not
#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	clrscr();
	printf("Enter any Character");
	scanf("%c",&c);
	if((c>='a' && c<='z') || (c>='A' && c<='Z'))
	{
		printf("%c is an alphabets",c);
	}
	else
	{
		printf("%c is  not an alphabet",c);
	}
	getch();
}