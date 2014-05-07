#include <stdio.h>
#include <math.h>

int main()
{ 
	int num1, num2;
	float num3;
	float resposta1, resposta2, resposta3;
	printf("Digite um numero inteiro\n");
	scanf("%d",&num1);
	printf("Digite outro numero inteiro\n");
	scanf("%d",&num2);
	printf("Digite um numero real\n");
	scanf("%f",&num3);

	resposta1 = ((float)num1*2) * ((float)num2/2);
	resposta2 = ((float)num1*3) + num3;
	resposta3 = pow(num3, 3);
	
	printf("a) o produto do dobro do primeiro com metade do segundo = %f\n", resposta1);
	printf("a soma do triplo do primeiro com o terceiro = %f\n", resposta2);
	printf("o terceiro elevado ao cubo = %f\n", resposta3);
return (0);
}