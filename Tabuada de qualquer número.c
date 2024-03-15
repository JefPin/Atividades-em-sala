#include <stdio.h>
#include <string.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"portuguese");
	
	int i, numero;
	
	printf("Escolha um Número Para Tabuada: ");
	scanf("%d",&numero);
	for (i = 1; i <= 10; i++){
	printf("%i x %i = %i \n",numero, i, numero*i);
	}
	
	
	
	return 0;
	
}
