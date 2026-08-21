#include <stdio.h>
#include <locale.h>

// variáveis de entrada
float valorHora, horasNormais, horasExtras, percentualExtra, taxaPlataforma;

// variáveis de saída
float valorHorasNormais, valorHorasExtras, faturamentoBruto, valorRecebido;



main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o valor da hora: ");
	scanf("%f", &valorHora);
	printf("Digite a quantidade de horas normais: ");
	scanf("%f", &horasNormais);
	printf("Digite a quantidade de horas extras: ");
	scanf("%f", &horasExtras);
	printf("Digite o percentual cobrado pelas horas extras:  ");
	scanf("%f", &percentualExtra);
	printf("Digite o valor da taxa da plataforma: \n");
	scanf("%f", &taxaPlataforma);
	
	valorHorasNormais = valorHora * horasNormais;
	valorHorasExtras = (((valorHora * percentualExtra) / 100) * horasExtras) + valorHora;
	faturamentoBruto = valorHorasNormais + valorHorasExtras + taxaPlataforma;
	valorRecebido = faturamentoBruto - taxaPlataforma;

	printf("\n====================RESUMO====================");
	printf ("\nValor das horas normais = %.2f", valorHorasNormais);
	printf("\nValor das horas extras = %.2f", valorHorasExtras);
	printf("\nTaxa plataforma = %.2f", taxaPlataforma);
	printf("\nFaturamento bruto = %.2f", faturamentoBruto);
	printf("\nValor líquido recebido = %.2f", valorRecebido);
	printf("\n==============================================");
	
	
	
	
	

	
	
}
