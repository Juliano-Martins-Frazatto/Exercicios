#include <stdio.h>
#include <locale.h>

int tamanhoTanque;
char combustivel;
float gasolina, alcool, calculo, tipoCombustivel;

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o tamanho do tanque: \n");
	scanf("%i", &tamanhoTanque);
	
	printf("Digite qual combustível o carro irá abastecer: ");
	printf("\n[g] - Gasolina");
	printf("\n[a] - alcool\n");
	scanf(" %c", &combustivel);

	gasolina = 6.50;
	alcool = 4.50;
	
	if (combustivel == 'g'){
		printf("\nA opção escolhida foi: Gasolina");
		tipoCombustivel = gasolina;
	} 
	else if (combustivel == 'a'){
		printf("\nA opção escolhida foi: Álcool");
		tipoCombustivel = alcool;
	}else{
		printf("\nDigite uma opção válida!");
	}
	
	calculo = tamanhoTanque * tipoCombustivel;
	
	printf("\nO valor total gasto para encher o tanque do veículo será de: %.2f", calculo);
	
	
	

	
	
	
}
