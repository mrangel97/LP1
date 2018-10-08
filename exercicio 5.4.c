#include <stdio.h>
#include <stdlib.h>

void troca(int *n1,int *n2){
   int aux;
   aux=*p1;
   *p1=*p2;
   *p2=aux;
}

int main()
{
  int a,b;
  printf("Digite valor de a:");
  scanf("%d",&a);
  printf("Digite valor de b:");
  scanf("%d",&b);
  
  printf("a=%d b=%d\n",a,b);
  
  troca(&a,&b);
  
  printf("****Valores trocados****\n");
  printf("a:%d b:%d\n",a,b);
  return 0;
}
