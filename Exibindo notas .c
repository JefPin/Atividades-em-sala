#include <stdio.h>
#include <locale.h>

void mediaFinal(float mediaArt){
	if (mediaArt >= 7){
		printf("Voc� est� Aprovado");
	}else if(mediaArt <= 4){
		printf("Voc� est� Reprovado");	
	} else{
		printf("Voc� est� em Recupera��o");
	}
}

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int i;
	float nota,soma,media;
	
	for (i = 1; i <= 5; i++){
		printf("Digite a %i� nota: ",i);
		scanf("%f",&nota);
		
		soma = soma + nota; 
		media = soma/5;
	}
	
	printf("\n === Exibindo resultado === \n");
	printf("Soma: %.1f \n",soma);
	printf("Media: %.1f \n",media);
	mediaFinal(media);
		
	return 0;
	
}
