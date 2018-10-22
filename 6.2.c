#include <stdio.h>
#include <stdlib.h>

void preenche(int arr[4][2]){
  int i,j;
  
  for(i=0;i<4;i++)
  {
    for(j=0;j<2;j++)
    {
      printf("Digite um numero arr[%d][%d]:",i,j);
      scanf("%d",&arr[i][j]);
    }
  }
}

float media(int arr[4][2],int l,int c){
  int i,j,soma=0;
  for(i=0;i<l;i++)
  {
    for(j=0;j<c;j++)
    {
      soma+=arr[i][j];
    }
  }
  return soma/8;
}

int main()
{
  int mat[4][2],l,c;
  float med;
  
  preenche(mat);
  med=media(mat,4,2);
  
  printf("Media dos elementos da matriz:%.2f\n",med);
  return 0;

}
