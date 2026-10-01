#include <stdio.h>
#include <locale.h>

float bolsaMensal;
float aluguel, alimentacao, transporte, internet, materialAcademico, lazer;
float totalDespesas, saldoRestante, percentualUtilizadoBolsa, percentualRestanteBolsa,saldo;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o valor gasto com os seguintes itens: \n");
	printf("Aluguel: ");
	scanf("%f", &aluguel);
	printf("Alimentação: ");
	scanf("%f", &alimentacao);
	printf("Transporte: ");
	scanf("%f", &transporte);
	printf("Internet: ");
	scanf("%f", &internet);
	printf("Material Acadêmico: ");
	scanf("%f", &materialAcademico);
	printf("Lazer: ");
	scanf("%f", &lazer);
	
	bolsaMensal = 1500;
	
	totalDespesas = aluguel + alimentacao + transporte + internet + materialAcademico + lazer;
	saldoRestante = bolsaMensal - totalDespesas;
	percentualUtilizadoBolsa = (totalDespesas / bolsaMensal) * 100;
	percentualRestanteBolsa = 100 - percentualUtilizadoBolsa;
	
	printf("\n============RESUMO============\n");
	printf("Total de despesas: %.2f\n", totalDespesas);
	printf("Saldo restante: %.2f\n", saldoRestante);
	printf("Percentual da bolsa utilizado: %.2f\n", percentualUtilizadoBolsa);
	printf("Percentual da bolsa que restou: %.2f\n", percentualRestanteBolsa);
	if (totalDespesas > bolsaMensal){
		
		printf("Você finalizou o mês com o saldo NEGATIVO!");
		
	}else if(totalDespesas < bolsaMensal){
		printf("Você finalizou o mês com o saldo POSITIVO!");
	}else{
		printf("Você gastou exatamente o valor da sua bolsa!");
	}
	printf("\n=============================\n");
	
	
	
	
}
