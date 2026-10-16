#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	char nomes[4][50];
	
	//Não precisa do & pois já se tem o endereço do local onde será armazenado
	printf("Digite um nome: \n");
	
	fgets(nomes[0], 50, stdin);	// O fgets armazena o \n, o que adiciona uma linha ao apertar enter.		
	
	//a função strcspn localiza em qual índice está o caractere \n. 
	// O valor encontrado pela função strcspn é substituido (utilizando o sinal =) por \0 (caracter nulo), eliminando a quebra de linha.
	nomes[0][strcspn(nomes[0], "\n")] = '\0'; 
	
	printf("Digite um nome: \n");
	fgets(nomes[1], 50, stdin);
	nomes[1][strcspn(nomes[1], "\n")] = '\0';
	
	printf("Digite um nome: \n");
	fgets(nomes[2], 50, stdin);
	nomes[2][strcspn(nomes[2], "\n")] = '\0';
	
	printf("Digite um nome: \n");
	fgets(nomes[3], 50, stdin);
	nomes[3][strcspn(nomes[3], "\n")] = '\0';
	
	
	for(int i = 0; i < 4; i++){
		printf("Indice %i Valor %s\n", i, nomes[i]);
	}
}
