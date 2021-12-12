#include<stdio.h>
#define NBR 10
void main()
{
	int Tab[NBR]={4,2,10,0,-3,7,9,12,-8};
	int i,min,imin,max,imax;
	min=Tab[0];
	max=Tab[0];
	imin=0;
	imax=0;
	for(i=0;i<NBR;i++)
	{
		if (Tab[i]<min)
		{
			min=Tab[i];
			imin=i;
		}
		
		if (Tab[i]>max)
		{
			max=Tab[i];
			imax=i;
		}
	}
	printf("le maximum du tableau est Tab[%d]=%d\n",imax,max);
	printf("le minimum du tableau est Tab[%d]=%d\n",imin,min);
}