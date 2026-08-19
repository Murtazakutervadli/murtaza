#include<stdio.h>
#include<conio.h>

void main()
{
	float a,b,ad,sb,ml;
	float dv;
	clrscr();
	printf("Enter 2 values:");
	scanf("%f %f",&a,&b);
	ad = a + b;
	sb = a - b;
	ml = a * b;
	dv = a / b;
	printf("Answers = %.2f %.2f %.2f\n",ad,sb,ml,dv);
	getch();

 }