#include <stdio.h>
#include <locale.h>

//Declarando Fun��o.
float notas (float nota1, float nota2){
	float media;
	media = (nota1 + nota2) /2;
	if(media >= 7){
		printf("\nO Aluno est� Aprovado!!");
}else{
	printf("\nO Aluno est� Reprovado!!");
}
	return media;	
}

int main (){
	setlocale(LC_ALL,"portuguese");
	float nota1, nota2, media;
	

// Declarando Vari�veis.
	printf("Digite sua primeira nota: ");
	scanf("%f",&nota1);
	
	printf("Digite sua segunda nota: ");
	scanf("%f",&nota2);
	
	media = notas (nota1,nota2);
	
	printf("\nSua M�dia Final �: %f",media);
	
	return 0;	
}

