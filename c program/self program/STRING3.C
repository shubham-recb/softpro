//WAP in c to take string input from user in two dimensional array
#include<stdio.h>
#include<conio.h>
void main()
{
	char s[3][10];
	int i;
	clrscr();
	printf("Enter three Name: ");
	for(i=0;i<=2;i++)
	gets(&s[i][0]);  //gets(s[i]);
	for(i=0;i<=2;i++)
	{
		printf("%s\n",s[i]);
	}
	getch();
} 