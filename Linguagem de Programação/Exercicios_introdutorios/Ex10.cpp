#include <stdio.h>
#include <locale.h>

int idade;

main(){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite sua idade: \n");
	scanf("%i", &idade);
	
	if (idade < 5){
		
		printf("Sua classificação é: Fraldinha!");
		
	}else if (idade>=5 && idade <=7){
		
		printf("Sua classificação é: Pré-Mirim!");
		
	}else if (idade >= 8 && idade <= 11){
	
	
		printf("Sua classificação é: Mirim!");

	}else if (idade >= 12 && idade <= 13){
	
	
		printf("Sua classificação é: Infantil!");

	}else if (idade >= 14 && idade <= 17){
	
	    printf("Sua classificação é: Juvenil!");
		

	}else if (idade > 18){
	
	
		printf("Sua classificação é: Adulto!");

	}
	
}

