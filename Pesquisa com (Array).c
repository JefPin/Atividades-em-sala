#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int idade, contadorSalario = 0, mediaSalarial, mulheres;
	int  maiorIdade = 0, menorIdade = 999, mulheres5k = 0;
	char sexo, usuario, opcao;
	float salario, somaSalario = 0, mediaSalario = 0 ;

	do{
	
	printf("\n === Menu === \n");
	printf("1 - Adicionar pessoa \n");
	printf("2 - Exibir resultados e sair \n");
	printf("Digite a op��o desejada: ");
	scanf("%d",&opcao);
	
	switch (opcao){
		case 1:
	printf("\nPor favor, Digite sua Idade: ");
	scanf("%i",&idade);
		
	printf("Digite seu Sexo: ");
	scanf("%s",&sexo);
	
	sexo = toupper(sexo); // Converter em mai�sculo.
	
	printf("Informe seu Sal�rio: ");
	scanf("%f",&salario);	
	
	if (idade > maiorIdade){
		maiorIdade = idade;
	}
	
	if (idade < menorIdade)
		menorIdade = idade;
	
	// somaSalario = somaSalario + salario;
	somaSalario += salario;
	
	// contadorSalario = contadorSalario + 1;
	contadorSalario++;
	
	
	
		if(sexo == 'F' && salario >= 5000){
			mulheres5k++;
		}
	
		break;
	case 2:
		
		mediaSalario = somaSalario / contadorSalario;
		
		printf("\n === Exibindo Resultados === ");
		printf("\nM�dia do sal�rio do grupo: R$ %.2f", mediaSalario);
		printf("\nMaior idade do grupo: %i", maiorIdade);
		printf("\nMenor idade do grupo: %i", menorIdade);
		printf("\nQuantidade de mulheres com sal�rio maior que 5 mil: %i \n", mulheres5k);
		
		
		break;
	default:	
			printf("Op��o inv�lida...");
			
	}
}while (opcao != 2);
	
	return 0;
	
}
