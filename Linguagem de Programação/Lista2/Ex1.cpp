#include <stdio.h>
#include <locale.h>

int numero;

main(){
	setlocale(LC_ALL,"Portuguese");
	
  	for(numero = 1;numero <=10; numero++) {   
  		printf("%i\n", numero);
	}
	
}
