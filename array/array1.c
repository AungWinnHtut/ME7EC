#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i=0;
  float tc[100];
  float tf[100];
  FILE *fout;
  fout=fopen("temp.dat","w");

  for(i=0;i<100;i++)
  {
    tf[i]=(4*i)+100; /*y=mx+c*/
    tc[i]=(5*(tf[i]-32))/9;
  }

  for(i=0;i<100;i++)
  {
    fprintf(fout,"tc=%f - tf=%f\n",tc[i],tf[i]);
  }

  fclose(fout);

  return 0;
}
