#include <stdio.h>
#include <locale.h>

int menu;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite o numéro respectivo à mensagem desejada:\n ");
	printf("[1]-Bom dia\n");
	printf("[2]-Boa tarde\n");
	printf("[3]-Boa noite\n");
	printf("[4]-Seja Bem Vindo\n");
	printf("[5]-Volte Sempre\n");
	scanf("%i", &menu);
	
	switch(menu)
	{
	
	
		case 1:
			printf("\nBom dia\n");
			break;
		
		case 2:
			printf("\nBoa tarde\n");
			break;
		case 3:
			printf("\nBoa Noite\n");
			break;
		case 4:
			printf("\nSeja Bem Vindo\n");
			break;
		case 5:
			printf("\nVolte Sempre\n");
			break;
		default:
			printf("\nOpção não existe\n");
			break;
	}
		
	
	
}
