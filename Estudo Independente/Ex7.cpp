#include <stdio.h>
#include <locale.h>

int senha, senhaDigitada, tentativaTotal,tentativa;


main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	senha = 1111;
	
	
	
	for (;;){
		
		printf("\nDigite a senha do cofre: \n");
		scanf("%i", &senhaDigitada);
		tentativa = 1;
		tentativaTotal = tentativaTotal + tentativa;
		printf("%i", tentativaTotal);
		
		if (senhaDigitada == senha){
			
			printf("\nAcesso concedido!\n");
			
			break;
			
		}
		
		if (tentativaTotal == 3 ){
			
			printf("\nCofre bloqueado por excesso de tentativas!\n");
			
			break;
			
		}
		
		
				
	}
	
	
	
	
	
}
