#include<stdio.h>
#define NBR 10
void main()
{
	int Tab[NBR]={0,4,6,0,2,1,1,0,7,0};
	int i,n;
	n=0;
	for(i=0;i<NBR;i++)
	{
		if (Tab[i]!=0)
			Tab[n++]=Tab[i];
	}
	for(i=0;i<n;i++)
		printf("Tab[%d]=%d\n",i,Tab[i]);
}