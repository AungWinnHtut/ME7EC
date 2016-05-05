#include<stdio.h>
int main()
{
	char ch[5]="12345";
	int i=0;
	for (i=0;i<5;i++)
	{
		printf("%c\n",ch[i]);
	}
	if(ch[4]=='\0')
	{
		printf("ch[4] is slash zero");
	}
	else if(ch[5]=='\0')
	{
		printf("ch[5] is slash zero");
	}
}