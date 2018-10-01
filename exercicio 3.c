#include <stdio.h>
#include <stdlib.h>

int main()
{
  short temps[50],i,soma=0,qtd=0;
  float media;

  for(i=0;i<50;i++)
  {
    printf("Temperatura:");
    scanf("%hd",&temps[i]);
    soma+=temps[i];
  }
  media=soma/50;
  printf("Media:%.2f\n",media);
  for(i=0;i<50;i++)
  {
    if(temps[i]>media)
      qtd++;
  }
  printf("Qtd de temperaturas acima da media:%d\n",qtd);
  return 0;
}
