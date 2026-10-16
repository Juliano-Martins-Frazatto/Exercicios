#include <stdio.h>
#include <locale.h>

int escolha;
float salario;

main (){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Escolha uma opção: \n");
	printf("[1]-Empréstimo Pessoal\n");
	printf("[2]-Falar com Atendente\n");
	printf("[3]-Sair\n");
	scanf("%i", &escolha);
	
	switch (escolha){
		
		case 1:
			
			printf("Digite o valor do seu salário: \n");
			scanf("%f", &salario);
			
			if (salario < 2000){
				
				printf("Empréstimo Negado\n");
				
			} else {
				
				if (salario >= 5000){
					
					printf("Empréstimo VIP Aprovado!\n");
					
				} else {
					
					printf("Empréstimo Padrão Aprovado.\n");
					
				}
				
			}
			break;
			
		case 2:
			
			printf("Transferindo para um atendente...\n");
			break;
			
		case 3:
			
			printf("Saindo do sistema...");
			break;
			
		default:
			
			printf("Opção inválida!");
			break;
		
	}	
	
}
