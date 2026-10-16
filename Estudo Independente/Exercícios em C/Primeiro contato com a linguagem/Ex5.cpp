#include <stdio.h>
#include <locale.h>

int numero;

main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite um número inteiro positivo: \n");
	scanf("%i", &numero);
	
	for (numero; numero >= 0; numero--){
		
		printf("\n%i\n", numero);
		
		if (numero == 0){
		
			printf("Lançamento Realizado!");
		
	    }
		
	}
	

	
}
