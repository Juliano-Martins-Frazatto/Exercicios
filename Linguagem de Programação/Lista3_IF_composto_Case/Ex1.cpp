#include <stdio.h>
#include <locale.h>

char timeUm[50], timeDois[50];
int golsTimeUm, golsTimeDois;

main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite o nome do time 1: \n");
	fflush(stdin);
	fgets(timeUm, 50, stdin);
	
	printf("Digite a quantidade de gols marcados por esse time na partida: \n");
	scanf("%i", &golsTimeUm);
	
	printf("Digite o nome do time 2: \n");
	fflush(stdin);
	fgets(timeDois, 50, stdin);
	
	
	printf("Digite a quantidade de gols marcados por esse time na partida: \n");
	scanf("%i", &golsTimeDois);
	
	if (golsTimeUm > golsTimeDois){
		
		printf("O time vencedor é: %s\n", timeUm);
		
	} else {
		
		if (golsTimeUm == golsTimeDois){
			
			printf("EMPATE\n");
			
		} else {
			
			printf("O time vencedor é: %s\n", timeDois);
			
		}
		
		
		
	}
	
	
	
}
