#include<stdio.h>
#include<conio.h>


void main()
{
	int ic,html,coding,cs,dbms,maths,english,js;
	float sum=0;
	clrscr();

	
	printf("entare value of IC: ");
	scanf("%d",&ic);
	printf("entare value of HTML: ");
	scanf("%d",&html);
	printf("entare value of CODING: ");
	scanf("%d",&coding);
	printf("entare value of CS: ");
	scanf("%d",&cs);
	printf("entare value of DBMS: ");
	scanf("%d",&dbms);
	printf("entare value of MATHS: ");
	scanf("%d",&maths);
	printf("entare value of ENGLISH : ");
	scanf("%d",&english);
	printf("entare value of JS: ");
	scanf("%d",&js);

	sum=ic+html+coding+cs+dbms+maths+english+js;
	
	printf("sum = %f",sum/400*100);
	getch();
	
}