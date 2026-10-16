#include <stdio.h>
#include <string.h>
#include <locale.h>


typedef struct{  //typedef serve para não ficar repetindo struct toda vez 
		int codigo;
		char titulo[50];
		int paginas;
	}Livro;
	
main(){
	setlocale(LC_ALL,"Portuguese");
	
	Livro estante[5];
	
	for(int i=0; i < 5; i++){
		
		
		
		printf("===Cadastro de Livro===\n");
		
		printf("Digite o código do livro: ");
		scanf("%d", &estante[i].codigo); // o (.) indica em qual campo da struct o valor será salvo
		getchar();
		
		printf("Digite o título do livro: ");
		fgets(estante[i].titulo, 50, stdin);
		estante[i].titulo[strcspn(estante[i].titulo, "\n")] = '\0';
		
		
		printf("Digite a quantidade de páginas do livro: ");
		scanf("%d", &estante[i].paginas);
		getchar();
		
		printf("Código: %d\n", estante[i].codigo);
		printf("Titulo: %s\n", estante[i].titulo);
		printf("Páginas: %d\n", estante[i].paginas);
	}
	
	for(int i = 1; i <= 5; i++){
		printf("Livro: %d\n", i);
		printf("Código: %d\n", estante[i].codigo);
		printf("Titulo: %s\n", estante[i].titulo);
		printf("Páginas: %d\n", estante[i].paginas);
	}
	
	
	
}
