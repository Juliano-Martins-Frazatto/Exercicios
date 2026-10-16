#include <stdio.h>
#include <locale.h>

int temperatura;

main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite a temperatura em graus Celsius: \n");
	scanf("%i", &temperatura);
	
	if (temperatura < 15){
		
		printf("Está frio!");
		
	} else if (temperatura >= 15){
		
		if (temperatura >= 30){
			
			printf("Está muito calor");
			
		}else{
			
			printf("O clima está agradável");
			
		}
		
	}
	
}
