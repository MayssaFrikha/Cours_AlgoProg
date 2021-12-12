/*exercice format heure*/
#include<stdio.h>
void main ()
{
	int h,m,s;
	printf("donnez l'heure (hh:mm:ss):");
	scanf("%d:%d:%d",&h,&m,&s);
	printf("%2d heure(s)\n",h);
	printf("%2d minute(s)\n",m);
	printf("%2d seconde(s)\n",s);
}