#include <stdio.h>
#include <locale.h>

int idade, passe;
float altura;

main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite sua idade: \n");
	scanf("%i", &idade);
	printf("Digite sua altura: \n");
	scanf("%f", &altura);
	printf("Possui passe vip? \n");
	printf("[1]-Sim\n");
	printf("[0]-Não\n");
	scanf("%i", &passe);
	
	if (idade >= 14 && altura >= 1.50 || passe == 1 ){
		
		printf("Pode entrar no brinquedo!");
		
	} else {
	
		printf("Não pode entrar no brinquedo");
	
	}
	
	
}
