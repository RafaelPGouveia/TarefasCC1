#include<stdio.h>

void main()
{
	int numero, i, fatorial=1;
	scanf("%d",&numero);
	for(i=1;i!=numero+1;i++)
	{
		fatorial = i*fatorial;
	}
	printf("%d",fatorial);
}
