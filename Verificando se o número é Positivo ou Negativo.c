#include <stdio.h>
#include <locale.h>

// Declarando fun��o Sem Retorno.
void verificarPositivoOuNegativo(numero){
	if(numero == 0){
		printf("Zero � neutro");
	}else if (numero >0){
		printf("Positivo.");
	}else{
		printf("Negativo.");
	}
}

int main (){
	setlocale(LC_ALL,"portuguese");	
	
// Decalrando Vari�veis.
	int numero;
	
// Declarando Dados.	
	printf("Digite um n�mero: ");
	scanf("%i",&numero);
	
	verificarPositivoOuNegativo(numero);
	
	return 0;
}

