#include <stdio.h>
#include <stdlib.h>

main(){
	int i;
printf("\n\n\n \t\t\t \"cara\" ou \"coroa\"?\n\n\n");
printf("\n\n\n \t\t\t\t 1. cara\n" );
printf("\n\n\n \t\t\t\t 2. coroa\n");

printf("\n\n\n \t\t\t Selecione a opcao: ");
scanf("%d", &i);
switch(i){
	case  1: printf("\n voce escolheu cara\n"); break;
	case  2: printf("\n voce escolheu coroa\n"); break;
	default: printf("\n entre com 1 ou 2 apenas \n");
	
}
	system("pause");
}
