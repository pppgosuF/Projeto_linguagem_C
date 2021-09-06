#include <stdio.h>
#include <stdlib.h>

main () {
	float a,b;
	char op;
	
	printf("\n\n\n \t\t\t Operacao Aritmetica entre 2 numeros \n\n\n");
	printf("\t\t Entre com 2 numeros A e B: \n");
	scanf("%f %f",&a,&b);
	
	printf("\n operacoes possiveis: \n\n");
	printf("\t\t + \n");
	printf("\t\t - \n");
	printf("\t\t * \n");
	printf("\t\t / \n");
	
	printf("\n Digite o simbolo da operacao: ");
	fflush(stdin); //limpar o cache do sistema
	op = getchar();
	
	switch (op) {
	case '+' : printf("\n %.2f + %.2f = %.2f \n\n", a,b,a+b); break;
	case '-' : printf("\n %.2f - %.2f = %.2f \n\n", a,b,a-b); break;
	case '*' : printf("\n %.2f * %.2f = %.2f \n\n", a,b,a-b); break;
	case '/' : printf("\n %.2f / %.2f = %.2f \n\n", a,b,a/b); break;
	default: printf("\n\n Digite a operacao correta: ( + - * / ) \n\n\n\n");
	}
	system ("pause");
	}
