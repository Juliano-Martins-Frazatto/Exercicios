#include <stdio.h>
#include <locale.h>

int senha, cartao;

main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite a senha: \n");
	scanf("%i", &senha);
	printf("Possui cartão de acesso?: \n");
	printf("[1]-Sim\n");
	printf("[0]-Não\n");
	scanf("%i", &cartao);


	if (senha == 1234 && cartao == 1){
		
		printf("Acesso Liberado!");
		
	} else {
		
		printf("Acesso Negado");
		
	}
	
	
	
}
