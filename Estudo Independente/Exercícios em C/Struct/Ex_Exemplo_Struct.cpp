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
	
	Livro meuLivro;
	
	printf("===Cadastro de Livro===\n");
	
	printf("Digite o código do livro: ");
	scanf("%d", &meuLivro.codigo); // o (.) indica em qual campo da struct o valor será salvo
	getchar();
	
	printf("Digite o título do livro: ");
	fgets(meuLivro.titulo, 50, stdin);
	meuLivro.titulo[strcspn(meuLivro.titulo, "\n")] = '\0';
	
	
	printf("Digite a quantidade de páginas do livro: ");
	scanf("%d", &meuLivro.paginas);
	
	printf("Código: %d\n", meuLivro.codigo);
	printf("Titulo: %s\n", meuLivro.titulo);
	printf("Páginas: %d\n", meuLivro.paginas);
	
}
