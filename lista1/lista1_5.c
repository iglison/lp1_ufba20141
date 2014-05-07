#include <stdio.h>
#include <string.h>

int main()
                         { 
	char str1[100]; char str2[100]; 
	printf("Entre com a primeira string:");
	fgets(str1, 100, stdin);
	printf("Entre com a segunda string:");
	fgets(str2, 100, stdin);
	printf("As strings foram %s %s\n", str1, str2);
	printf("O segundo caracter da primeira string é %c\n", str1[1]);
	printf("O segundo caracter da segunda string é %c\n", str2[1]);
	return (0);
}