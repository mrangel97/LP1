#include <stdio.h>
#include <stdlib.h>

void compra(int *conta,int conta2){
	int i,compras[]={100,50,80,30,20};
	printf("****DEPOIS****\n");
	for(i=0;i<5;i++){
	  *conta=*conta-compras[i];
	   printf("%d %d\n",*conta,conta2);
        }
}

int main()
{
	int i,minha_conta1,minha_conta2;
	
	printf("Digite seu saldo: ");
	scanf("%d",&minha_conta1);
	printf("Digite seu saldo: ");
	scanf("%d",&minha_conta2);
	printf("****ANTES****\n");
	printf("%d %d\n",minha_conta1,minha_conta2);
	if(minha_conta1>minha_conta2)
	  compra(&minha_conta1,minha_conta2);
	else
	  compra(&minha_conta2,minha_conta1);
	return 0;
}
