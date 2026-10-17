#include <stdio.h>
#include <locale.h>

int idade, somador;
float media;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	for (int i=0; i<5; i++){
		printf("Digite a idade %i: ", i + 1);
		scanf("%i", &idade);
		
		somador = somador + idade;
		
	}
	
	media = somador / 5;
	
	printf("A média aritmética das idades é: %.2f ", media );
}
