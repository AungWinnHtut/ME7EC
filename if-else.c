#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a=0; 
	char c;
	float f=12.5;

	printf("Please Enter an Integer   ");
	scanf("%d",&a);
	
	printf("Please Enter a Character   ");
	c = getchar();


	
	


	printf("integer a has value %d %0x %f\n",a,c,f);
	printf("char c has value \'%c\'\n",c);
	printf("float f has value %f",f);
	return 0;
}