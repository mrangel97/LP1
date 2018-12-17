#include <stdio.h>
#include <stdlib.h>

struct Personagem{
   char nome[100];
   int idade;
   char classe[100];
};

void preenche(struct Personagem *p)
{
    scanf("%s",(*p).nome);
    scanf("%d",&(*p).idade);
    scanf("%s",(*p).classe);
}

int main()
{
   struct Personagem p1;
   struct Personagem p2;
   preenche(&p1);
   preenche(&p2);
   printf("****Personagem****\n");
   printf("Nome=%s\nIdade=%d\nClasse=%s\n",p1.nome,p1.idade,p1.classe);
   printf("*******************\n");
   printf("Nome=%s\nIdade=%d\nClasse=%s\n",p2.nome,p2.idade,p2.classe);
   return 0;
}
