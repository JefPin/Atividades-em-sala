#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	float notas[3], media, soma = 0;
	int i;
	
	for(i=0;i<3;i++){
	printf("Digite sua %dª nota: ", i+1);
	scanf("%f",&notas[i]);
	
	soma = soma + notas[i];
	media = soma /3;
}
	
	// Exibindo notas.
	for(i=0;i<3;i++){	
	printf("\nSua %dª Nota é: %.1f", i+1, notas[i]);
}
	printf("\n\nSua Média é: %.1f",media);
	
	if (media >= 7){
		printf("\nAluno Aprovado");
	}else if(media <= 4){
		printf("\nAluno está Reprovado");
	}else{
		printf("\nO aluno está de Recuperação");
	}
			return 0;
	}
