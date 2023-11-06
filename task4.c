#include<stdio.h>
#include<conio.h>

void main()
{
	float t,r,p;
	float sum=0;
	
	clrscr();
	
	printf("entare value of T : ");
	scanf("%d",&t);
	printf("entare value of R : ");
	scanf("%d",&r);
	printf("entare value of P : ");
	scanf("%d",&p);
	
	sum=(p*r*t)/100;
	
	printf("sum = %f",sum);
	getch();
	
}