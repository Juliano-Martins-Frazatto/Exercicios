#include <stdio.h>
#include <locale.h>

float contaLuz;

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o valor da conta de luz: ");
	scanf("%f", &contaLuz);
	
	if (contaLuz > 50) {
		
		printf("Você está gastando muito");	
	} else{
		
		printf("Seu gasto foi normal");
	}
	
	
}

