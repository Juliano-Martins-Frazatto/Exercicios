#include <stdio.h>
#include <locale.h>

float rendaMensal;
int nomeSujo, fiador;

main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite a renda mensal: \n");
	scanf("%f", &r ex3endaMensal);
	printf("O nome está sujo?\n");
	printf("[1]-Sim\n");
	printf("[0]-Não\n");
	scanf("%i", &nomeSujo);
	printf("Possui fiador?\n");
	printf("[1]-Sim\n");
	printf("[0]-Não\n");
	scanf("%i", &fiador);
	
	if (rendaMensal > 3000 && (nomeSujo == 0 || fiador == 1 )){
		
		printf("Empréstimo Aprovado\n");
		
	} else {
		
		printf("Empréstimo Negado\n");
	}
		
	
	
}
