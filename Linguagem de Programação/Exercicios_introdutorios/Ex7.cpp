#include <stdio.h>
#include <locale.h>

float a, b, c, d, media;

main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite nota A: \n");
	scanf("%f", &a);
	printf("Digite nota B: \n");
	scanf("%f", &b);
	printf("Digite nota C: \n");
	scanf("%f", &c);
	printf("Digite nota D: \n");
	scanf("%f", &d);
	
	media = (a+b+c+d)/4;
	
	printf("Sua média é: %.2f\n", media);
	
	if (media >= 60){
		printf("Você foi aprovado\n");
	} else {
		printf("Você foi reprovado");
	}
	
	
	
	
	
}
