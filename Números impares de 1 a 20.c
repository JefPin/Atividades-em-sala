#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"portuguese");
	
	int i;
	
	printf("N�meros impares de 1 a 20\n");
	for (i = 1; i <= 20; i++){
		if(i % 2 == 1){
			printf("%i \n",i);
		}
	}
	

	return 0;
}
