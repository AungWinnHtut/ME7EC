#include<stdio.h>
#include<stdlib.h>
int main()
{
  int x;
  int y;
  char ch;
  FILE *fin;
  fin=fopen("E:\\ME7EC\\codes\\for\\xy.txt","r");

  while((ch=getc(fin))!=EOF)
  {
    printf("%c\n",ch);
  }

  fclose(fin);
  return 0;
}
