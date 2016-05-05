#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void print(char* text,char* secondtext);
float funArea(float r);

int main()
{
	float rr;
	float AA;
	print("Area of Circle","Programmer: AWH");
	printf("enter r ");
	scanf_s("%f", &rr);
	AA=funArea(rr);
	printf("Area is %f", AA);
	_getch();
	return 0;
}


void print(char* text,char* secondtext)
{
	printf(text);
	printf("\n");
	printf(secondtext);
}

float funArea(float r)
{
	float A = 0.0;
	A = 3.14*r*r;
	return A;
}
