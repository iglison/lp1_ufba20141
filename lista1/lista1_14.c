#include <stdio.h>

int main()
{ 
	float temperatura_farenheit, temperatura_celsius;
	printf("Qual o valor da temperatura em graus Celsius?\n");
	scanf("%f",&temperatura_celsius);
	temperatura_farenheit =  (9 * (temperatura_celsius/5) + 32);
	printf("Esta temperatura equivale a %.2f graus Farenheit\n", temperatura_farenheit);
		
return (0);
}