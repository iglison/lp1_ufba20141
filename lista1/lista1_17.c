#include <stdio.h>
#include <math.h>

int main()
{ 	
	float altura, peso_atual, peso_ideal;
	char genero;
	printf("Digite sua altura em metros:\n");
	scanf("\n%f",&altura);	
	printf("Digite seu gênero (M=Masculino, F=Feminino):\n");
	scanf("\n%c",&genero);	
	printf("Digite seu peso atual:\n");
	scanf("\n%f",&peso_atual);	
	if(genero == 'M'){
		peso_ideal = (72.7*altura) - 58;
	}
	else if(genero == 'F'){
		peso_ideal = (62.1*altura) - 44.7;
	}
	else{
		printf("Você digitou um valor inválido para o gênero. Execute novamente.");
		return (0);
	}

	if(peso_atual == peso_ideal){
		printf("Você está com seu peso ideal!");
	}
	else if(peso_atual > peso_ideal){
		printf("Você acima de seu peso ideal! Precisa perder %0.2fkg\n", (peso_atual-peso_ideal));
	}
	else{
		printf("Você abaixo de seu peso ideal! Precisa ganhar %0.2fkg\n", (peso_ideal-peso_atual));
	}
return (0);
}