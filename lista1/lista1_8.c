#include <stdio.h>

int main()
                         { 
	float nota1, nota2, nota3, nota4;
	float media;
	printf("Entre com a nota 1:");
	scanf("%f",&nota1);
	printf("Entre com a nota 2:");
	scanf("%f",&nota2);
	printf("Entre com a nota 3:");
	scanf("%f",&nota3);
	printf("Entre com a nota 4:");
	scanf("%f",&nota4);
	media = (float)(nota1 +nota2 +nota3 +nota4)/4;
	printf("A média das notas é %.2f\n",media);
		
return (0);
}