#include <stdio.h>
#include <stdlib.h>

struct Habilidades{
	int danos;
	char poder[200];
};

struct Personagem{
   char nome[100];
   int idade;
   char classe[100];
   struct Habilidades hab;
};

void preenche2(struct Habilidades *p){
    scanf("%d",&(*p).danos);
    scanf("%s",(*p).poder);
}

void preenche(struct Personagem *p)
{
    scanf("%s",(*p).nome);
    scanf("%d",&(*p).idade);
    scanf("%s",(*p).classe);
    preenche2(&(*p).hab);
}

int main()
{
   struct Personagem p1;
   struct Personagem p2;
   preenche(&p1);
   preenche(&p2);
   printf("****Personagem****\n");
   printf("Nome=%s\nIdade=%d\nClasse=%s\nDanos=%d\nPoder=%s\n",p1.nome,p1.idade,p1.classe,p1.hab.danos,p1.hab.poder);
   printf("*******************\n");
   printf("Nome=%s\nIdade=%d\nClasse=%s\nDanos=%d\nPoder=%s\n",p2.nome,p2.idade,p2.classe,p2.hab.danos,p2.hab.poder);
   return 0;
}
