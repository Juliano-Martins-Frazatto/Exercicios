#include <stdio.h>

char sexo;
char nome[50];

main(){
	printf("Digite o sexo da pessoa:\n");
	scanf("%c", &sexo);
	if(sexo =='m'){
		printf("\nMasculino");
		
	}else{
		printf("\nFeminino");
	}
	
	printf("\n Digite um nome: \n");
	fflush(stdin);
	fgets(nome, 50, stdin);
	printf("\nNome digitado: %s", nome);
}
