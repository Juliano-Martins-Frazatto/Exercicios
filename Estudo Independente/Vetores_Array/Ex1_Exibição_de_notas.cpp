#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	int notas[4]; //declara o nome, tipo e tamanho do vetor
	// o vetor possui 4 posições (0 até 3-índice)
	
	notas[0] = 7; //atribui ao índice 0 o valor 7
	notas[1] = 9;
	notas[2] = 5;
	notas[3] = 10;
	
	printf("Valores armazenados no vetor:\n");
	for (int i = 0; i < 4; i++){
		printf("Posição (índice) %d: valor = %d\n", i, notas[i]);
	}
}
