#include <stdio.h>
#include <stdlib.h>

typedef struct
{
   char nome[50];
   int v;
   int e;
   int d;	
}Time;

int main()
{
  Time time;
  int i,p,menor=999,maior=0,pos1,pos2;
  
  for(i=0;i<3;i++)
  {
    printf("Nome do time: ");
	scanf("%s",time.nome);
	printf("Numero de vitorias: ");
	scanf("%d",&time.v);
	printf("Numero de empates: ");
	scanf("%d",&time.e);
	printf("Numero de derrotas: ");
	scanf("%d",&time.d);
	p=(time.v*3)+time.e+time.d;
	if(p>maior)
	{
	   maior=p;
	   pos1=i;
	}
	if(p<menor)
	{
	   menor=p;
	   pos2=i;
	}	
  }
  printf("Time com mais pontos: %s\n",time[pos1].nome);
  printf("Time com menos pontos: %s\n",time[pos2].nome);
  return 0;	
}
