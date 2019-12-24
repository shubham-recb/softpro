//WAP in c using no retyrn type & no passing parameter
#include<stdio.h>
#include<conio.h>
//global decleration
void message();
void main()
{
	clrscr();
	message();//function calling
	getch();
}
//defination of function
void message()
{
	printf("Hello ! user ,welcome in functionnal programming ");
}