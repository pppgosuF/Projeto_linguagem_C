#include <stdio.h>
#include <stdlib.h>

main (){
	int ra, senha;
	printf("Digite RA: ");
	scanf("%d", &ra);
	printf("Digite Senha: ");
	scanf("%d", &senha);
	if (ra==123 && senha==456){
		printf("Acesso liberado!");
	}else{
		printf("Acesso negado!");
	}
	printf("\n\n");
	system("pause");
	
}
