#include <stdio.h>
#include <math.h>

int main()
{ 	
	float altura, peso_ideal;	
	printf("Digite sua altura em metros\n");
	scanf("%f",&altura);
	peso_ideal = (72.7*altura) - 58;
	printf("O seu peso ideal é: %0.2fkg\n", peso_ideal);
return (0);
}