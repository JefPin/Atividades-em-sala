#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int contador;
	int numero;
	
	do{
	contador = contador + 1;
	
		printf("Por favor, digite at� 20 n�meros: ",contador);
		scanf("%f",&numero);
		fflush(stdin);
		
	}while (contador <= 19);
	
	
	
	
	
	return 0;
	
}
