#include<stdio.h>
#include<conio.h>

void main()
{
     int a[10], i;
     clrscr();
     printf("Enter 10 values:");
     for(i=0;i<10;i++)
	 scanf("%d",&a[i]);
     printf("Values are:");
     for(i=0;i<5;i++)
	 printf("%d %d %d\n",a[3],a[6],a[8]);

     getch();
}