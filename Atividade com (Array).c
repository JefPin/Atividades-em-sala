#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float notas[3], media, soma = 0;
	int i;
	
	for(i=0;i<3;i++){
	printf("Digite sua %d� nota: ", i+1);
	scanf("%f",&notas[i]);
	
	soma = soma + notas[i];
	media = soma /3;
}
	
	// Exibindo notas.
	for(i=0;i<3;i++){	
	printf("\nSua %d� Nota �: %.1f", i+1, notas[i]);
}
	printf("\n\nSua M�dia �: %.1f",media);
	
	if (media >= 7){
		printf("\nAluno Aprovado");
	}else if(media <= 4){
		printf("\nAluno est� Reprovado");
	}else{
		printf("\nO aluno est� de Recupera��o");
	}
			return 0;
	}
