#include<stdio.h>
#include<stdlib.h>
int main()
{
  int x;
  int y;
  FILE *fout;
  fout=fopen("E:\\ME7EC\\codes\\for\\xy.txt","w");
  fprintf(fout,"x - y\n");
  fprintf(fout,"******\n");
  for(x=0;x<100;x++)
  {
    y =  2 * x + 1;
    fprintf(fout,"%d - %d\n",x,y);
  }
  fclose(fout);
  return 0;
}
