/*WAP in c to print following pattern
1  11  21  . . . 91
2  12  22 . . .   .
.  .   . . . . .  .
.  .   . . . . .  .
.  .   . . . . .  .
10 20  30........100
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,sum=0;
	clrscr();
	for(i=1;i<=10;i++)
	{
		sum=i;
		for(j=1;j<=10;j++)
		{
			printf("%d\t",sum);
			sum=sum+10;
		}
		printf("\n");
	}
	getch();
}