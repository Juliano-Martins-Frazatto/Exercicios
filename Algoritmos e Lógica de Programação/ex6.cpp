#include <stdio.h>
#include <locale.h>

// variáveis de entrada
float consumoKwh, precoKwh, taxaBandeira, iluminacaoPublica, outrasTaxas;

// variáveis de saída 
float custoEnergia, valorTotal, custoMedioKwh, custoAnual;

main(){

    setlocale(LC_ALL, "Portuguese");
    
    printf("Digite o consumo em Kwh: ");
    scanf("%f", &consumoKwh);

    printf("\nDigite o preço por Kwh: ");
    scanf(" %f", &precoKwh);

    printf("\nDigite a taxa vigente da bandeira (valor já calculado): ");
    scanf(" %f", &taxaBandeira);

    printf("\nDigite a taxa paga à iluminação pública: ");
    scanf("%f", &iluminacaoPublica);

    printf("\nDigite o valor de outras taxas: ");
    scanf("%f", &outrasTaxas);

    custoEnergia = consumoKwh * precoKwh;

    valorTotal = custoEnergia + taxaBandeira + iluminacaoPublica + outrasTaxas; 

    custoMedioKwh = valorTotal / consumoKwh;
    
    custoAnual = valorTotal * 12;

    printf("==========RESUMO==========");
    printf("\nCusto da energia: %.2f", custoEnergia);
    printf("\nvalorTotal: %.2f", valorTotal);
    printf("\nO custo médio por Kwh é: %.2f", custoMedioKwh);
    printf("\nEstimativa de custo anual: %.2f\n", custoAnual);
    printf("===========================\n\n");








}

