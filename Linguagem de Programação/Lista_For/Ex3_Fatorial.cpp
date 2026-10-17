#include <stdio.h>
#include <locale.h>

int numero, fatorial;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	fatorial  = 1;
	
	printf("Digite um número inteiro positivo: ");
	scanf("%d", &numero);
	
	for (int i = 1; i<=numero; i++){  //fatorial = fatorial * i 
		
		fatorial *= i;
		
    }
    
    printf("O fatorial do número escolhido é: %d", fatorial);
}
