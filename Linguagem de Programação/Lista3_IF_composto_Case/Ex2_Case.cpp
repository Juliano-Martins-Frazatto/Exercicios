#include <stdio.h>
#include <locale.h>

int escolha;
float a, b, soma, subtracao, divisao, multiplicacao;

main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite o primeiro número (Ex: 420): \n");
	scanf("%f", &a);
	printf("Digite o segundo número (Ex: 223): \n");
	scanf("%f", &b);
	
	printf("Digite o número da opção escolhida: \n");
	printf("[1]-Soma\n");
	printf("[2]-Subtração\n");
	printf("[3]-Divisão\n");
	printf("[4]-Multiplicação\n");
	scanf("%i", &escolha);
	
	
	
	switch (escolha){
		
		case 1:
			soma = a + b;
			printf("%.2f + %.2f = %.2f", a, b, soma);
			break;
			
		case 2:
			subtracao = a - b;
			printf("%.2f - %.2f = %.2f", a, b, subtracao);
			break;
		
		case 3:
			if (b == 0){
				printf("Não é permitida divisão por zero!\n");
			} else {
				divisao = a / b;
				printf("%.2f / %.2f = %.2f", a, b, divisao);
				
			}
			break;
			
			
		case 4:
			multiplicacao = a * b;
			printf("%.2f * %.2f = %.2f", a, b, multiplicacao);
			break;
			
		default:
			printf("Opção inválida.");
			break;
	}
	
	
	
}
