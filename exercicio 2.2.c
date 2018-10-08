#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n1,n2,i;

   printf("Digite um numero para n1:");
   scanf("%d",&n1);
   printf("Digite um numero para n2:");
   scanf("%d",&n2);
   
   if(n1>n2){
    for(i=n1+1;i<n2;i++)
      printf("%d ",i);
   }
   else{
      for(i=n2+1;i<n1;i++)
         printf("%d ",i);
   }
   return 0;
}
