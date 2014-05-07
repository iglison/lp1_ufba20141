#include <stdio.h>

#define PI 3.141592
int main()
                         { 
	float raio, area;
	printf("Entre com o valor do raio da circunferência (m):");
	scanf("%f",&raio);
	area = PI * raio * raio ;
	printf("A área da circunferência é %.2f m²\n", area);
		
return (0);
}