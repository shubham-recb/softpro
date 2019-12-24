//WAP in cto find the quadratic equation
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,b,c;
	float r1,r2,x,y,d;
	clrscr();
	printf("Enter value of a  b &  c : ");
	scanf("%d%d%d",&a,&b,&c);
	d=sqrt(b*b-4*a*c);
	if(d==0)
	{
		r1=-b/2*a;
		printf("Value of r1 = %.2f",r1);
	}
	else
	{
		x=-b+d;
		r1=x/2*a;
		y=-b-d;
		r2=y/2*a;
		printf("Value of r1 = %.2f \t r2 = %.2f",r1,r2);
	}
	getch();
}