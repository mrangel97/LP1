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
        int i=0;
	char letra=fgetc(arq2);
	while(letra!=EOF){
          palavra[i]=letra;
          i++;
          letra=fgetc(arq2);
        }
    printf("Palavra lida: %s\n",palavra);
    return 0;
}
