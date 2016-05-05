#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i=0;
  int j[10]={1,2,3,4,5,6,7,8,9,10}; /*0-9*/
  float f[3]={111112.5,1111114.4,111111111122.0};
  char c[5]={'a','b','c','d','e'};

  for(i=0;i<10;i++)
  {
    printf("j[%d]=%d\n",i,j[i]);
  }
  printf("\n");
  for(i=0;i<3;i++)
  {
    printf("f[%d]=%4.2f\n",i,f[i]);
  }
  printf("\n");
  for(i=0;i<5;i++)
  {
    printf("c[%d]=%c\n",i,c[i]);
  }


  return 0;
}
