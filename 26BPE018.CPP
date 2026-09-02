#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b;
    clrscr();
    printf("Enter 2values:");
    scanf("%d %d",&a,&b);
    if (a > b)
	printf("%d > %d\n",a,b);
    else
    if (a < b)
	printf("%d > %d\n",b,a);
    else
	printf("%d = %d\n",a,b);

    getch();














