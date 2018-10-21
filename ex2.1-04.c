#include <stdio.h>
#include <stdlib.h>

int main()
{
	int mph,kph;
	
	printf("Digite sua velocidade em mph: ");
	scanf("%d",&mph);
	
	kph=mph*1.6;
	
	if((kph>=80)&&(kph<=100))
	  printf("MANTENHA\n");
	else if(kph<80)
	  printf("ACELERA\n");
	else if(kph>100)
	  printf("DESACELERA\n");
	return 0;
}
