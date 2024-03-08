#include <stdio.h>
#include <locale.h>

// Declarando função Sem Retorno.
void verificarPositivoOuNegativo(numero){
	if(numero == 0){
		printf("Zero é neutro");
	}else if (numero >0){
		printf("Positivo.");
	}else{
		printf("Negativo.");
	}
}

int main (){
	setlocale(LC_ALL,"portuguese");	
	
// Decalrando Variáveis.
	int numero;
	
// Declarando Dados.	
	printf("Digite um número: ");
	scanf("%i",&numero);
	
	verificarPositivoOuNegativo(numero);
	
	return 0;
}

