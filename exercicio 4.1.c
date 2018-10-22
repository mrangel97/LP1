#include <stdio.h>
#include <stdlib.h>

int eh_primo(int n){
	int i,cont=0;
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		  cont++;
	}
	if(cont==2)
	  return 1;
	else
	  return 0;
}

int main()
{
	int p,num;
	
	printf("Digite um numero: ");
	scanf("%d",&num);
	p=eh_primo(num);
	if(p==1)
	  printf("Eh primo!\n");
	else
	  printf("Nao eh primo!\n");
	return 0;
}
