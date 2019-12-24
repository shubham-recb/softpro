//WAP in c to find the volume of pyramid
#include<stdio.h>
#include<conio.h>
void main()
{
	int l,h,volume;
	clrscr();
	printf("Enter the value of length & height");
	scanf("%d%d",&l,&h);
	volume=0.33*l*l*h;
	printf("volume of pyramid is : %d",volume);
	getch();
}