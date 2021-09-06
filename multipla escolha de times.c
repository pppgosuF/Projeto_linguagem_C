#include <stdio.h>
#include <stdlib.h>

main(){
	float s,c,p;
	char i;
	
printf("\n\n\n \"S\" ou \"C\" ou \"P\"?\n\n\n");


printf("\n\n\n \t\t\t Selecione a letra do Time : ");
fflush(stdin);
i = getchar();

switch(i){
	case 's': printf("\n voce escolheu São Paulo\n"); break;
	case 'c': printf("\n voce escolheu Corinthians\n"); break;
	case 'p': printf("\n voce escolheu Sem Mundial\n"); break;
	default: printf("\n Time desconhecido \n");
	
}
	system("pause");
}


