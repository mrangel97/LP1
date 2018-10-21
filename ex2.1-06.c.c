#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,soma=0,i;
	
	printf("Digite um numero: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		soma+=(i*i);
	}
	printf("Soma = %d\n",soma);
	return 0;
}
