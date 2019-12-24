//WAP in c to print string using array
#include<stdio.h>
#include<conio.h>
void main()
{
	char s[10]={'S','H','U','B','H','A','M','\0'};
	int i;
	clrscr();
       /*	for(i=0;i<=6;i++)
	{
		printf("%c",s[i]);
	}   */
       //	printf("%s",s);
       //puts(s);
	 puts(&s[0]);
	getch();
	
}