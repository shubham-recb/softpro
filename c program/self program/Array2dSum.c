//WAP in c to add two matrix using array
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	clrscr();
	printf("Enter 9 number for first matrix: ");
	for(i=0;i<=2;i++)
	for(j=0;j<=2;j++)
	scanf("%d",&a[i][j]);
	printf("Enter 9 number for second matrix: ");
	for(i=0;i<=2;i++)
	for(j=0;j<=2;j++)
	scanf("%d",&b[i][j]);
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	getch();
}