#include <stdio.h>
#include <locale.h>

float valorProduto, total;


main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	for (;;){ //para somente quando aparecer o break
		
		printf("Digite o valor do produto(ou 0 para encerrar): \n");
		scanf("%f", &valorProduto);
		
		if (valorProduto == 0){
			
			break;
			
		}
		
		total = total + valorProduto; // acumula o valor na variável total
		
	}
	
	printf("\nTotal da compra: R$ %.2f", total);
	
}
