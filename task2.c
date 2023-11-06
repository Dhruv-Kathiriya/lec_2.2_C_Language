#include<stdio.h>
#include<conio.h>

void main()
{
	int w,h,sum=0;
	
	clrscr();
	
	printf("entare value of W : ");
	scanf("%d",&w);
	printf("entare value of H : ");
	scanf("%d",&h);
	
	sum=w*h;
	
	printf("sum = %d",sum);
	getch();
	
}