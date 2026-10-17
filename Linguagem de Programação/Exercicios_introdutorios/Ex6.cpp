#include <stdio.h>
#include <locale.h>

float a, b, diferenca; 

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o valor de a: \n");
	scanf("%f", &a);
	printf("Digite o valor de b: \n");
	scanf("%f", &b);
	
	if (a > b ){
		
		diferenca = a - b;
		
	}else{
		
		diferenca = b - a;
		
	}
	
	printf("A diferença do maior para o menor número digitado é: %.2f", diferenca);
	
	
}
