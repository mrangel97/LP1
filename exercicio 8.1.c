#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *arq=fopen("palavra.txt","w");
	if(arq==NULL){
		printf("Nao foi possivel abrir o arquivo\n");
		exit(1);
	}
	int i;
	char string[25];
	printf("Digite uma palavra: ");
	scanf("%s",string);
	int tam=strlen(string);
	for(i=0;i<tam;i++)
	{
		fprintf(arq,"%c",string[i]);
	}
	fclose(arq);
	return 0;
}
