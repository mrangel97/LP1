#include <stdio.h>
#include <stdlib.h>

void todos_os_primos(int max)
{
	int i,cont,n=2;
	
	while(n<max)
	{
	  cont=0;	
	  for(i=2;i<max;i++)
	  {
		if(n%i==0)
		  cont++;
	  }  
	  if(cont==2)
	    printf("%d\n",n);
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
