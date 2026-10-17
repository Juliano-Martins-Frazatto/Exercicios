#include <stdio.h>
#include <locale.h>

int soma;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	for (int i = 0; i<=50; i++){
		if((i % 2) == 0){
			printf("%i\n", i);
			soma = soma + i;
			
		}
	}
	printf("A soma dos números pares é: %i", soma);
}
