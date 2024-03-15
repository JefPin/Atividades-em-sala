#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	char loginCadastrado[200] = "bora";
	char senhaCadastrada[200] = "415263";
	char login[200];
	char senha[200];
	
	printf("Por favor, Digite abaixo seu login e senha.\n ");
	fflush(stdin);
	
	do{
		printf("\n=== Senai ===");
		printf("\nLogin: ");
		scanf("%s",&login);
	
		printf("Senha: ");
		scanf("%s",&senha);		
		
		// strcmp == Usado para Comparar
	}while (strcmp(loginCadastrado, login) != 0 || strcmp(senhaCadastrada,senha) != 0);
	
	if((strcmp(loginCadastrado, login) == 0 && strcmp(senhaCadastrada,senha) == 0)){
	
	printf("\nAcessando Sistema...");
	}

	return 0;
}
