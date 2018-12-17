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

void todos_os_primos(int max)
{
	int i,resp,n=1;
	
	while(n<max)
	{
	  resp=eh_primo(n);
	  if(resp==1)
	    printf("%d ",n);
	  n++;
	}
}

int main()
{
	int num;
	printf("Digite um numero: ");
	scanf("%d",&num);
	todos_os_primos(num);
	return 0;
}
