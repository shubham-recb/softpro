//WAP in c to cpmaire string usng strcmp() function
#include<stdio.h>
#include<conio.h>
void main()
{
	char str1[20],str2[20];
	clrscr();
	printf("enter first string :");
	gets(str1);
	printf("Enter second string : ");
	gets(str2);
	if(strcmp(str1,str2)==0)
	{
		printf("String are equal");
	}
	else
	{
		printf("String are not equal");
	}
	getch();
}