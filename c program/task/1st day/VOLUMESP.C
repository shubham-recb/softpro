//WAP inc to find the volume of sphere
#include<stdio.h>
#include<conio.h>
void main()
{	int r,volume;
	clrscr();
	printf("Enter the value of radius");
	scanf("%d",&r);
	volume=4.19*r*r*r;
	printf("volume of sphere : %d",volume);
	getch();
}