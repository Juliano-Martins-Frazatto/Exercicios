#include <stdio.h>
#include <locale.h>

char sexo;
float h, homens, mulheres, calculo;



main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite o sexo: \n");
	printf("[m]-Masculino\n");
	printf("[f]-Feminino\n");
	scanf("%c", &sexo);
	printf("Digite a sua altura: \n");
	scanf("%f", &h);
	
	
	homens = (72.7*h) - 58;
	mulheres = (62.1*h) - 44.7;
	
	if (sexo == 'm'){
		printf("Sexo: Masculino\n");
		calculo = homens;
	}else if(sexo == 'f'){
		printf("Sexo: Femino\n");
		calculo = mulheres;
	}else{
		printf("Opção inválida\n");
	}
	
	
	printf("O peso ideal para você é: %.2f\n", calculo);
	
	
	
}
