#include <stdio.h>
#include <locale.h>

int numero, contador;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	for (int i=0; i<10; i++){
		printf("Digite um número inteiro: \n");
		scanf("%i", &numero);
		
		if ((numero % 3) == 0){
			contador = contador + 1;
		}
	}
	
	printf("Total de números múltiplos de três: %i", contador);
}
