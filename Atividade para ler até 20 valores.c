#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int contador;
	int numero;
	
	do{
	contador = contador + 1;
	
		printf("Por favor, digite até 20 números: ",contador);
		scanf("%f",&numero);
		fflush(stdin);
		
	}while (contador <= 19);
	
	
	
	
	
	return 0;
	
}
