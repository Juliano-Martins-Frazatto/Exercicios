#include <stdio.h>
#include <locale.h>

//Planos - valores
float planoBasico, planoProfissional, planoEmpresarial;

//Planos - quantidades de clientes que compoem cada plano
//Variáveis de entrada
float quantidadeBasico, quantidadeProfissional, quantidadeEmpresarial;
float percentualDesconto, percentualTaxaProcessamento, percentualImpostos;

//variaveis de saída
float totalBasico, totalProfissional, totalEmpresarial;
float receitaBruta, valorDescontos, receitaPosDescontos, impostos, taxaProcessamento, receitaLiquida;

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	planoBasico = 39.90;
	planoProfissional = 89.90;
	planoEmpresarial = 199.90;
	
	printf("Digite a quantidade de clientes Básico: \n");
	scanf("%f", &quantidadeBasico);
	printf("Digite a quantidade de clientes Profissional: \n");
	scanf("%f", &quantidadeProfissional);
	printf("Digite a quantidade de clientes Empresarial: \n");
	scanf("%f", &quantidadeEmpresarial);
	
	printf("Digite o percentual de desconto: \n");
	scanf("%f", &percentualDesconto);
	printf("Digite o percentual da taxa de processamento: \n");
	scanf("%f", &percentualTaxaProcessamento);
	printf("Digite o percentual de Impostos: \n");
	scanf("%f", &percentualImpostos);
	
	totalBasico = quantidadeBasico * planoBasico;
	totalProfissional = quantidadeProfissional * planoProfissional;
	totalEmpresarial = quantidadeEmpresarial * planoEmpresarial;
	
	receitaBruta = totalBasico + totalProfissional + totalEmpresarial;
	valorDescontos = (receitaBruta * percentualDesconto)/100;
	receitaPosDescontos = receitaBruta - valorDescontos;
	impostos = (percentualImpostos * receitaBruta) /100;
	taxaProcessamento = (percentualTaxaProcessamento * receitaBruta) / 100;
	receitaLiquida = receitaBruta - (valorDescontos + impostos + taxaProcessamento);
	
	printf("==================RESUMO=================\n");
	printf("Receita cliente básico: %.2f\n", totalBasico);
	printf("Receita cliente profissional: %.2f\n", totalProfissional);
	printf("Receita cliente empresarial: %.2f\n", totalEmpresarial);
	printf("Valor Receita bruta: %.2f\n", receitaBruta);
	printf("Valor descontos: %.2f\n", valorDescontos);
	printf("Valor menos os descontos: %.2f\n", receitaPosDescontos);
	printf("Valor impostos: %.2f\n", impostos);
	printf("Valor taxa processamento: %.2f\n", taxaProcessamento);
	printf("Receita líquida: %.2f\n", receitaLiquida);
	printf("=========================================\n");
	
	
	
	
	
	
}
