#include<stdio.h>
int somme (int,int);
float moyenne (float, float);
int maximum (int, int);
int minimum (int, int);
int maximum (int, int);
void main()
{
	int A,B;
	printf("donner deux entiers=\n");
	scanf("%d%d",&A,&B);
	printf("le maximum entre (%d,%d) est %d\n",A,B,maximum(A,B));
	printf("le minimum entre (%d,%d) est %d\n",A,B,minimum(A,B));
	printf("la moyenne de (%d,%d) est %f\n",A,B,moyenne((float)A,(float)B));
	printf("la somme de (%d,%d) est %d\n",A,B,somme(A,B));
}
int somme (int n1, int n2)
{
	return n1+n2;
}
float moyenne (float n1, float n2)
{
	return (n1+n2)/2;
}
int maximum(int n1, int n2)
{
	if(n1>n2)
		return n1;
	else
		return n2;
}
int minimum(int n1, int n2)
{
	if(n1<n2)
		return n1;
	else
		return n2;
}