#include <stdio.h>

int main()
                         { 
	float lado, area;
	printf("Entre com o valor do lado do quadrado (m):");
	scanf("%f",&lado);
	area = lado * lado ;
	printf("O dobro da área do quadrado é %.2f m²\n", 2*area);
		
return (0);
}