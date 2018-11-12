#include <stdio.h>
#include <stdlib.h>

struct Cachorro{
   char raca[100];
   int idade;
   float peso;
};

void preenche(struct Cachorro *c)
{
    scanf("%s",(*c).raca);
    scanf("%d",&(*c).idade);
    scanf("%f",&(*c).peso);
}

int main()
{
   struct Cachorro c1;
   struct Cachorro c2;
   preenche(&c1);
   preenche(&c2);
   printf("****Cachorro****\n");
   printf("Raca=%s\nIdade=%d\nPeso=%.2f\n",c1.raca,c1.idade,c1.peso);
   printf("Raca=%s\nIdade=%d\nPeso=%.2f\n",c2.raca,c2.idade,c2.peso);
   return 0;
}
