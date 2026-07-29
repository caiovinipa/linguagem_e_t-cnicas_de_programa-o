#include <stdio.h>

int idade;
char nome[100];
float valor;

main(){		
	//== 1 forma de atribuir valor para variavel
	idade = 17;
	printf("Sua idade e: %i", idade);
	//== 2 forma de atribuir valor para variavel
	//==lendo um valor
	printf("\nDigite sua idade: \n");
	scanf("%i" , &idade);
	printf("Sua idade agora e: %i", idade);
}

