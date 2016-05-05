#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int strlenn(char *ch);
void strcpyy(char *s1,char *s2);
void strncpyy(char *s1,char *s2,int max);

int main ()
{
	char arr[40];
	char arr2[40];
	printf("enter a string ");
	gets(arr);
	strncpyy(arr2,arr,10);
	int co=strlenn(arr2);
	printf("%d\n",co);
	printf("%s\n",arr2);
	return 0;
}

int strlenn(char *ch)
{
	int i=0;
	int count=0;

	while(ch[i]!='\0')
	{
			i++;
	}
	count=i-1;

	return count;
}

void strcpyy(char *s1,char *s2)
{
	int i=0;
	while(s2[i]!='\0')
	{
		s1[i]=s2[i];
		i++;
	}
}

void strncpyy(char *s1,char *s2,int max)
{
	int i=0;
	while((s2[i]!='\0') && (i<max))
	{
		s1[i]=s2[i];
		i++;
	}
}



