//WAP in c using 2-D array
#include<stdio.h>
#include<conio.h>
void main()
{
	int i=0,j=0;
	int arr[4][3]={{1,2,3},{3,2,1},{4,5,6},{6,5,4}};
	clrscr();
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\narr[%d][%d] = %d",i,j,arr[i][j]);
		}
	}
	getch();
}

