#include <stdio.h>
#include <locale.h>

float nota1, nota2;

float media(float n1, float n2){
	float resultado = (n1 + n2) / 2;
	return resultado;
}
main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite a primeira nota: \n");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: \n");
	scanf("%f", &nota2);
	
	
	float valor = media(nota1, nota2);
	printf("media: %.2f", valor);
		
	

	
	
	
	
}
