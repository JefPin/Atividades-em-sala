#include <stdio.h>
#include <string.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"portuguese");
	
	int i, numero;
	
	printf(" === Tabuada de multiplica��o do n�mero 5 === \n");
	for (i = 1; i <= 10; i++){
	printf("\n%i x %i = %i ", 5, i, 5*i);
	}
	
	return 0;
	
}
