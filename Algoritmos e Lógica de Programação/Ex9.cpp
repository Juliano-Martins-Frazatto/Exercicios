#include <stdio.h>
#include <locale.h>

float  quilometrosPercorridos, litrosConsumidos, precoLitro, metaConsumo;
float consumoMediokml, custoTotal, custoKm, diferencaRealMeta;


main(){
	
	printf("Digite a quantidade de Km percorridos: \n");
	scanf("%f", &quilometrosPercorridos);
	printf("Digite a quantidade de combustível consumido (litros): \n");
	scanf("%f", &litrosConsumidos);
	printf("Digite o preco por litro: \n");
	scanf("%f", &precoLitro);
	printf("Digite a meta de consumo em litros: \n");
	scanf("%f", &metaConsumo);
	
	
	consumoMediokml = quilometrosPercorridos / litrosConsumidos;
	custoTotal = litrosConsumidos * precoLitro;
	custoKm =  custoTotal / quilometrosPercorridos;
	diferencaRealMeta =  litrosConsumidos - metaConsumo;
	
	printf("Consumo médio em km/l: %.2f\n", consumoMediokml);
	printf("Custo total: %.2f\n", custoTotal );
	printf("Custo por Km: %.2f\n", custoKm);
	printf("Diferença entre o consumo real e a meta definida: %.2f\n", diferencaRealMeta);
	
	
	
}
