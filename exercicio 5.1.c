//ponteiros.c

#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a,b,*p;

  printf("Digite um valor pra a:\n");
  scanf("%d",&a);
  printf("Digite um valor pra b:\n");
  scanf("%d",&b);
   
  if(a>=b)
    p=&a;
  else
    p=&b;
  
  printf("A:%d B:%d\n",a,b);

  *p=*p-50;

   printf("A:%d\nB:%d\n",a,b);
   return 0;
}
