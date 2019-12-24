/*Develop an application in c programming to print loving heart on the consol window with red color and white background color by using c programming*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=93;i++)
	{
		for(j=1;j<=10;j++)
		{
			textcolor(RED);
			textbackground(WHITE);
			cprintf("%c",3);
		}
		 if(i==45)
		 {
			 textcolor(BLUE);
			 textbackground(WHITE);
			 cprintf("I love C Programming Language");
		 }
		  
	}
	getch();
}