#include <stdio.h>
#include <locale.h>

float nota1, nota2, nota3, nota4, media, notaExame, novaMedia;

main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite a primeira nota: \n");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: \n");
	scanf("%f", &nota2);
	printf("Digite a terceira nota: \n");
	scanf("%f", &nota3);
	printf("Digite a quarta nota: \n");
	scanf("%f", &nota4);
	
	media = (nota1+nota2+nota3+nota4) / 4;
	
	if (media >= 7){
		
		printf("Aluno aprovado. Média: %.2f", media);
		
	} else {
		
		printf("Digite a nota de exame: \n");
		scanf("%f", &notaExame);
		
		novaMedia = (notaExame + media) / 2;
		
		if (novaMedia >= 5){
			
			printf("Aluno aprovado no exame. Média: %.2f", novaMedia);
			
		} else {
			
			printf("ALuno não aprovado. Média: %.2f", novaMedia);
			
		}
		
	}
	
	
}
