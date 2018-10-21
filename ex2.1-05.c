#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num,soma=0;
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	
	while(num>0)
	{
		soma+=num;
		printf("Digite um numero: ");
		scanf("%d",&num);
	}
	printf("Soma = %d\n",soma);
	return 0;
}
