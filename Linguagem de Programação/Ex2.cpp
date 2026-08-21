#include <stdio.h>
#include <locale.h>

float a, positivo;


main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite qualquer valor em número: ");
	scanf("%f", &a);
	
	
	if (a < 0) {
		
		positivo = a * -1;
		
		
	} else {
		
		positivo = a;
	}
	
	printf("\nO módulo do seu número é: %.2f", positivo);

	
	
	
}
