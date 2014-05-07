#include <stdio.h>
#include <math.h>

#define VALOR_MULTA 4.00
int main()
{ 	
	float peso, excedente = 0.0, multa = 0.0 ;
	printf("Digite o peso total dos peixes:\n");
	scanf("\n%f",&peso);	
	if(peso > 50.0){
		excedente = peso - 50.0;
		multa = VALOR_MULTA * excedente;		
	}
	printf("Excedente     = %0.2fkg\n",excedente);
	printf("Multa a pagar = R$%0.2f\n",multa);
return (0);
}