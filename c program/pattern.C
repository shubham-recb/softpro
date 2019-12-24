/*WAP in c to display the following pattern
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
*/
#include<stdio.h>
#include<conio.h>
void main()
{
		int rows,cols;
		clrscr();
		for(rows=1;rows<=5;rows++)
		{
			for(cols=1;cols<=5;cols++)
			{
				printf("%d  ",cols);
				delay(500);
			}
			printf("\n");
		}
		getch();
}