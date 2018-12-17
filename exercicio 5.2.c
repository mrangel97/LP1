#include <stdio.h>
#include <stdlib.h>

void compra(int *conta,int valor){
	*conta=*conta-valor;
}

int main()
{
	int minha_conta1,minha_conta2;
	
	printf("Digite seu saldo: ");
	scanf("%d",&minha_conta1);
	printf("Digite seu saldo: ");
	scanf("%d",&minha_conta2);
	
	printf("Conta 1  Conta 2\n");
	printf("******   *******\n");
	printf("%d      %d\n",minha_conta1,minha_conta2);
	if(minha_conta1>minha_conta2){
	  compra(&minha_conta1,500);
    }
	else
	  compra(&minha_conta2,500);
	printf("%d      %d\n",minha_conta1,minha_conta2);
	return 0;
}
