#include <stdio.h>
#include <locale.h>

int selecao, quantidadeParticipantes;
float valorEstudante, valorIngresso, receita;


main(){
	
	estudante = 1
	profissional = 2
	empresarial = 
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("==========SELECIONE==========\n");
	printf("\n[1]-Estudante - R$50,00");
	printf("\n[2]-Profissional - R$120,00");
	printf("\n[3]-Empresarial - R$250,00");
	printf("\n=============================\n");
	
	scanf("%i", &selecao);
	
	if (selecao == 1){
		
		printf("\nOpção escolhida: 1 - Estudante");
		valorIngresso = 50;
	}
	else if (selecao == 2){
		
		printf("\nOpção escolhida: 2 - Profissional");
		valorIngresso = 120;
	}
	else if (selecao == 3){

		printf("\nOpção escolhida: 3 - ");
		valorIngresso = 250;
	} else {
		
		printf("\nOpção inválida! Tente novamente...");
	}
	
	printf("\nDigite a quantidade de participantes na categoria escolhida: ");
	scanf("%i", &quantidadeParticipantes);
	
	receita = quantidadeParticipantes * valorIngresso;
	
	printf("==========RESUMO==========\n");
	printf("")
	printf("Total Ingresso = %.2f", receita);
	
	
}
