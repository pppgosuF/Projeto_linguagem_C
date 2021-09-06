#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main () {
setlocale(LC_ALL,"portuguese");
float peso, altura, imc;

printf("qual o seu peso? \t");
scanf("%f", &peso);

printf("qual o seu altura? \t");
scanf("%f", &altura);

imc= peso/(altura*altura);

printf("\nseu IMC �: %.2f \n" , imc ) ;

	if (imc <= 18.5) {
		printf("Voc� est� abaixo do peso ideal\n");
	}
	else if (imc <= 24.9) {
		printf("Voc� est� no peso ideal");		
	}
	else if (imc <= 29.9) {
		printf("Acima do peso - sobrepeso");
	}
	else if (imc  <= 34.9) {
		printf("Obesidade Grau 1");
	}
	else if (imc <= 39.9) {
		printf("Obesidade Grau 2");
	}
	else {
		printf("Obesidade Grau 3");
	}	
	system ("PAUSE");
}
	

