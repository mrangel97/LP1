#include <stdio.h>
#include <stdlib.h>

int main()
{
  float preco,real;

  printf("Quanto custa o celular em dolar:");
  scanf("%f",&preco);

  real=preco*3.17;

  if(real<=1000)
    printf("Bom negocio!\n");
  return 0;
}
