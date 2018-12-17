#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *arq2=fopen("palavra.txt","r");
	if(arq2==NULL){
		printf("Nao foi possivel abrir o arquivo\n");
		exit(1);
	}
	char palavra[25];
	fscanf(arq2,"%s\n",palavra);
	printf("Palavra lida: %s",palavra);
	return 0;
}
