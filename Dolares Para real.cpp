#include <stdio.h>

//== Ex3_Realize a conversão de um valor em dólares para real. O programa recebe o valor em dólares e a cotação, depois calcula o valor em reais

main(){
	int dolares;
	int real;
	int cotacao;
	printf("\nDigite quantos dolares deseja converter: \n");
	scanf("%d" , &dolares);
	printf("\nDigite a cotacao atual: \n");
	scanf("%d" , &cotacao);
	real = cotacao * dolares;
	printf("O valor em reais e: %d" , real);
}
