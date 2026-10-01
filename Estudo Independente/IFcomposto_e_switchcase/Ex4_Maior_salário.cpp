#include <stdio.h>
#include <locale.h>

char nome1[50], nome2[50];
float salario1, salario2;

main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite o nome do primeiro funcionário: \n");
	fflush(stdin);
	fgets(nome1, 50, stdin);
	
	printf("Digite o salário desse funcionário:  \n");
	scanf("%f", &salario1);
	
	printf("Digite o nome do segundo funcionário: \n");
	fflush(stdin);
	fgets(nome2, 50, stdin);
	
	printf("Digite o salário desse funcionário: \n");
	scanf("%f", &salario2);
	
	if (salario1 == salario2){
		printf("Salários iguais \n");
	} else {
		if (salario1 > salario2){
			printf("%s tem o maior salário!\n", nome1);
		} else {
			printf("%s tem o maior salário!\n", nome2 );
		}
	}
	
}
