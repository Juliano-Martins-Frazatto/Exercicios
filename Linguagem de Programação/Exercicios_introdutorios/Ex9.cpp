#include <stdio.h>
#include <locale.h>

float p, e, m;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite o peso total dos peixes: \n");
	scanf("%f", &p);
	
	if (p > 50){
		printf("Houve um excesso de: \n");
		e = p - 50;
		printf("%.2f\n", e);
		m = e * 4;
		printf("O Valor da multa é de: %.2f\n", m);
		
	}else{
		
		e = 0;
		p = 0;
		m = 0;
		printf("Não houve excesso de peso.");
		printf("%.2f\n", p);
		printf("%.2f\n", e);
		printf("%.2f\n", m);
	}
	
}
