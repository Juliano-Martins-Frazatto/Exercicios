#include <stdio.h>
#include <locale.h>

int quantidadeMacas;
float valorMaca, total;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o valor de maças a serem compradas: ");
	scanf("%i", &quantidadeMacas);
	
	if (quantidadeMacas < 12 ){
		valorMaca = 1.30;
		
	}else{
		valorMaca = 1.00;
	}
	
	total = valorMaca * quantidadeMacas;
	
	printf("\nO valor total da compra é: %.2f", total);
}
