#include <stdio.h>
#include <locale.h>

int numero, sinal, divisao;

main(){
	
    setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um número inteiro: ");
	scanf("%i", &numero);

	sinal = numero * 1;
 
	if (numero > 0 ){
	printf("O número é positivo");
	} else {
	printf("O número é negativo");
	}
	
	
	divisao = numero % 2; 

	
	if (divisao == 0) {
		printf("\nO número é par");
	} else{
		printf("\nO número é impar");
	}

	
}

