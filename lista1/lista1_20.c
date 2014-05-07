#include <stdio.h>
#include <math.h>

int main()
{ 	
	float tamanho_arquivo, velocidade_conexao;
	float tempo_download;
	printf("Digite o tamanho totam do arquivo em MB:\n");
	scanf("\n%f",&tamanho_arquivo);	
	printf("Digite a velocidade da sua conexão em Mbps:\n");
	scanf("\n%f",&velocidade_conexao);
	
	tempo_download = tamanho_arquivo * 8 / velocidade_conexao / 60;
	printf("O tempo total de download é %0.2f minutos\n", tempo_download);

return (0);
}