#include<stdio.h>
void main()
{
	int a,b,q,r;
	printf("donner le premier opérande:\n");
	scanf("%d",&a);
	printf("donner le deuxième opérande:\n");
	scanf("%d",&b);
	q=a/b;
	r=a%b;
	printf("%d=%d*%d+%d",a,b,q,r);	
}