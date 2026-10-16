#include <stdio.h>
#include <locale.h>

int nivel, chavePrata, habilidadeArrombamento;

main(){
	
	setlocale(LC_ALL,"Portuguese");

	printf("Nível: \n");
	scanf("%i", &nivel);
	printf("Possui chave de prata?\n");
	printf("[1]-Sim\n");
	printf("[0]-Não\n");
	scanf("%i", &chavePrata);
	printf("Possui habilidade de Arrombamento?\n");
	printf("[1]-Sim\n");
	printf("[0]-Não\n");
	scanf("%i", &habilidadeArrombamento);
	
	if (nivel >= 30 && (chavePrata == 1 || habilidadeArrombamento == 1)){
		
		printf("Bem-vindo a Caverna do Dragão!");
		
	} else {
		
		printf("Você não cumpre os requisitos para entrar!");
		
	}
	
	
}
	
