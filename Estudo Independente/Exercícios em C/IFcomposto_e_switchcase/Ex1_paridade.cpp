#include <stdio.h>
#include <locale.h>

int numero;
int verificacao;

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite um número inteiro: ");
	scanf("%i", &numero);
	
	verificacao = numero % 2;
	
	if (verificacao == 0 ){
		
		printf("O número digitado é PAR");
		
	}else{
		
		printf("O número digitado é ímpar");
		
	}
	
	
	
}
