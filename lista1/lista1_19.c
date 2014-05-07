#include <stdio.h>
#include <math.h>

#define IMPOSTO_RENDA  0.11
#define INSS  0.08
#define SINDICATO  0.05


int main()
{ 
	float valor_hora, horas_trabalhadas;
	float salario_bruto, valor_ir, valor_inss, valor_sindicato, salario_liquido;
	printf("Qual o valor que você recebe por hora? (em reais)\n");
	scanf("%f",&valor_hora);
	printf("Qual o total de horas trabalhadas no mês?\n");
	scanf("%f",&horas_trabalhadas);
	//Calculos
	salario_bruto = valor_hora * horas_trabalhadas;
	valor_ir = salario_bruto * IMPOSTO_RENDA;
	valor_inss = salario_bruto * INSS;
	valor_sindicato = salario_bruto * SINDICATO;
	salario_liquido = salario_bruto - valor_ir - valor_inss - valor_sindicato;
	printf("+ Salário Bruto : R$%0.2f\n", salario_bruto);
	printf("- IR (11%%) : R$%0.2f\n", valor_ir);
	printf("- INSS (8%%) : R$%0.2f\n", valor_inss);
	printf("- Sindicato ( 5%%) : R$%0.2f\n", valor_sindicato);
	printf("= Salário Liquido : R$%0.2f\n", salario_liquido);
	
		
return (0);
}