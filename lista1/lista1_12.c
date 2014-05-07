#include <stdio.h>

int main()
                         { 
	float valor_hora, salario;
	int dias_trabalhados;
	printf("Qual o valor que você recebe por hora? (em reais)\n");
	scanf("%f",&valor_hora);
	printf("Qual o total de horas trabalhadas no mês?\n");
	scanf("%d",&dias_trabalhados);
	salario = valor_hora * dias_trabalhados ;
	printf("O valor do seu salário é R$%.2f reais\n", salario);
		
return (0);
}