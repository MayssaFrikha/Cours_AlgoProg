#include<stdio.h>
void main()
{
	int N,i;
	float som;
	do
	{
		printf("donner le nombre de termes:\n");
		scanf("%d",&N);
	}while(N<=0);
	
	som=0;
	for(i=1;i<=N;i++)
		som+=(float)1/i;
	printf("h(%d)=%f",N,som);
}