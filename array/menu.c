#include<stdio.h>
#include<stdlib.h>
int main()
{
  int ans;
  do{
    printf("0-Exit\n");
    printf("1-Hello\n");
    printf("2-Area\n");
    printf("please choose 0,1,2 ");
    scanf("%d",&ans);
    switch (ans) {
      case 0: exit(0);
      case 1: printf("hello"); break;
      case 2: printf("area"); break;
      default: break;
    }
  }while(1);

  return 0;
}
