#include <stdio.h>
#include <locale.h>

int temperatura;

main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite a temperatura do termômetro em graus Celsius: \n");
	scanf("%i", &temperatura);
	
	if (temperatura < 100){
		
		printf("A temperatura está muito baixa.");
		
    } else {
    	
    	if (temperatura <= 200){
    		
    		printf("A temperatura está baixa.");
    		
		} else {
			
			if (temperatura < 500){
				
				printf("A temperatura está normal.");
				
			} else {
				
				printf("A temperatura está muito alta");
				
			}
			
		}
    	
	}
}
