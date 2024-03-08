#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int i, valor, numeroPar = 0, numeroImpar = 0;
	
	for(i = 1; i <= 5; i++){
		printf("Digite o %iº Valor: ",i);
		scanf("%i",&valor);

	if(valor % 2 == 0){
		// pares = pares + 1;
		numeroPar++;
	}else{
		// impares = impares + 1;
		numeroImpar++;
	}

}
	printf("Quantidade de Números Pares: %i \n", numeroPar);
	printf("Quantidade de Números Impares: %i \n", numeroImpar);
	
	
	return 0;
	
}


