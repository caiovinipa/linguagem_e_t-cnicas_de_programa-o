#include <stdio.h>

//== Ex2_Calcule a idade de uma pessoa, lendo o ano atual e o ano de nascimento, apresentar a idade da pessoa calculada

main(){
	int ano_atual;
	int nascimento;
	int idade;
	printf("\nDigite o ano que estamos: \n");
	scanf("%i" , &ano_atual);
	printf("\nDigite seu ano de nascimento: \n");
	scanf("%i" , &nascimento);
	idade = ano_atual - nascimento;
	printf("Sua idade e: %i" , idade );
}
