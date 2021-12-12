#include<stdio.h>
void main()
{
	char ch[100];
	int car;
	int i,nbr;
	printf("donner un caractère\n");
	car=getchar();
	printf("donner une chaine\n");
	scanf("%s",ch);
	i=0;
	while(ch[i]!='\0')
	{
		if (ch[i]==car)
			nbr++;
		i++;
	}
	printf("le caractère %c se trouve %d fois dans %s\n",car,nbr,ch);
	
}