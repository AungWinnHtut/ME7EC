#include<stdio.h>
#include<stdlib.h>
/*fun declaration*/
void funArea(void);
void funTrianlge(void);

int main()
{	
	funArea();
	funTrianlge(); /*invoking calling*/
	return 0;
}

/*fun definition*/
void funArea(void)
{
	float a,r;
	printf("enter r ");
	scanf("%f",&r);
	a=3.14*r*r;
	printf("area = %f",a);
}

void funTrianlge(void)
{
	float b;
	float h;
	float a;

	printf("enter b ");
	scanf("%f",&b);

	printf("enter h ");
	scanf("%f",&h);

	a=0.5*b*h;

	printf("area of t is %f",a);
}