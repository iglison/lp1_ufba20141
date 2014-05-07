#include <stdio.h>

int main()
{ 
	float temperatura_farenheit, temperatura_celsius;
	printf("Qual o valor da temperatura em Farenheit?\n");
	scanf("%f",&temperatura_farenheit);
	temperatura_celsius =  (5 * (temperatura_farenheit-32) / 9);
	printf("Esta temperatura equivale a %.2fºC\n", temperatura_celsius);
		
return (0);
}