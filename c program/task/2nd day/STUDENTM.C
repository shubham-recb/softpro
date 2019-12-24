//WAP in c to amke a marksheet of a student
#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	clrscr();
	printf("Enter student mark");
	scanf("%d",&num);
	if(num>=80)
	{
		printf("Students are honors");
	}
	else if(num<=80&&num>=65)
	{
		printf("Student are pass");
	}
	else if(num<=65&&num>=33)
	{
		printf("Student are second");
	}
	else
	{
		printf("Student are fail");
	}
	getch();
}
