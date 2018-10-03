#include <stdio.h>
#include <stdlib.h>

void preenche(int *vec,int n){
   int i=0;
   for(i=0;i<n;i++)
   {
     printf("Digite um numero:");
     scanf("%d",&*(vec+i));
   }
   for(i=0;i<n;i++)
     printf("Vetor[%d]=%d\n",i,*(vec+i));
}

float media(int *vec,int n){
  int i,soma=0;
  float media;
  for(i=0;i<n;i++)
    soma+=*(vec+i);
  media=soma/n;
  return media;
}  

int main()
{
  int vet[10];
  float med;
  
  preenche(vet,10);
  med=media(vet,10);
  printf("Media dos vetores:%.2f\n",med);
  return 0;
}
