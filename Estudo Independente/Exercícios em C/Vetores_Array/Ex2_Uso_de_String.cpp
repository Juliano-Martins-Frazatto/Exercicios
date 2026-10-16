#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	char nomes[3][50];//cria uma matriz que armazena 3 nomes de até 49 caracteres
	
	//para copiar o texto para a memória do vetor usamos strcpy
	strcpy(nomes[0], "Juliano");
	strcpy(nomes[1], "Joel");
	strcpy(nomes[2], "Gael");
	
	for (int i = 0; i < 3; i++){
		printf("indice %i valor %s\n", i, nomes[i]);
	}
}
