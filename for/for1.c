#include<stdio.h>
#include<stdlib.h>
int main()
{
  int x;
  int y;
  printf("x - y\n");
  printf("******\n");
  for(x=0;x<10;x++)
  {
    y =  2 * x;
    printf("%d - %d\n",x,y);
  }
  return 0;
}
