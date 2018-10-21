#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n1,n2;
	
	printf("Digite um numero: ");
	scanf("%d",&n1);
	printf("Digite um numero: ");
	scanf("%d",&n2);
	
	if(n1>n2)
	  printf("%d",n1);
	else if(n2>n1)
	  printf("%d",n2);
    return 0;
}
