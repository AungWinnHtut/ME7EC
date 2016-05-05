#include <stdio.h>
#include <stdlib.h>
int main()
{
	int myan,eng,math,phy,che,bio;
	int dist,pass,fail,cred;
	
	do{
	printf("enter  mark of six subjict\n");
	scanf(" %d %d %d %d %d %d ",&myan,&eng,&math,&phy,&che,&bio);
	dist=0,pass=0,fail=0,cred=0;
		if(myan>=80&&myan<100)
	{
		printf(" myan is distinct\n");
		dist++;
	}
	else if(myan>=65&&myan<80)
	{
		printf("myan credit\n");
		cred++;
	}
	else if(myan>=40&&myan<65)
	{
		printf("myan pass\n");
		pass++;
	}
	else if(myan<40)
	{
		printf("myan fail\n");
		fail++;
	}
	else
		printf("error\n");
	if(eng>=80&&eng<100)
	{
		printf("eng distinct\n");
		dist++;
	}
	else if(eng>=65&&eng<80)
	{
		printf("eng credit\n");
		cred++;
	}
	else if(eng>=40&&eng<65)
	{
		printf("eng pass\n");
		pass++;
	}
	else if(eng<40)
	{
		printf("eng fail\n");
		fail++;
	}
	else
		printf("error\n");
	
	if(math>=80&&math<100)
	{
		printf("math distinct\n");
		dist++;
	}
	else if(math>=65&&math<80)
	{
		printf("math credit\n");
		cred++;
	}
	else if(math>=40&&math<65)
	{
		printf("math pass\n");
		pass++;
	}
	else if(math<40)
	{
		printf("math fail\n");
		fail++;
	}
	else
		printf("error\n");
	if(phy>=80&&phy<100)
	{
		printf("phy distinct\n");
		dist++;
	}
	else if(phy>=65&&phy<80)
	{
		printf("phy credit\n");
		cred++;
	}
	else if(phy>=40&&phy<65)
	{
		printf("phy pass\n");
		pass++;
	}
	else if(phy<40)
	{
		printf("phy fail\n");
		fail++;
	}
	else
		printf("error\n");
	if(che>=80&&che<100)
	{
		printf("che distinct\n");
		dist++;
	}
	else if(che>=65&&che<80)
	{
		printf("che credit\n");
		cred++;
	}
	else if(che>=40&&che<65)
	{
		printf("che pass\n");
		pass++;
	}
	else if(che<40)
	{
		printf(" che fail\n");
		fail++;
	}
	else
		printf("error\n");
	if(bio>=80&&bio<100)
	{
		printf("bio distinct\n");
		dist++;
	}
	else if(bio>=65&&bio<80)
	{
		printf("bio credit\n");
		cred++;
	}
	else if(bio>=40&&bio<65)
	{
		printf("bio pass\n");
		pass++;
	}
	else if(bio<40)
	{
		printf("bio fail\n");
		fail++;
	}
	else
		printf("error\n");
	printf("total fail is %d\n",fail);
	printf("total pass is %d\n",pass);
	printf("total cred is %d\n",cred);
	printf("total dist is %d\n",dist);
}while(myan<=100);
return 0;
}