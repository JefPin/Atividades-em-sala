#include <stdio.h>
#include <locale.h>
#include <string.h>

int main (){
	setlocale(LC_ALL,"portuguese");
	
	int i, numero;
	
	printf("Escolha uma Tabuada ");
	scanf("%i",&numero);
	
	
	printf("\n=== Tabuada de multiplicação === \n\n");
	for (i = 1; i <= 10; i++){
	printf("%i x %i = %i \n", numero, i, numero*i);
}
	
	return 0;
	
}


