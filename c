

#include <stdio.h>
#include <string.h>

  
void cabecalho(){
     system("cls || clear "); // limpa o terminal...
	 printf("\n========= \n");
	 printf("\n== SENAI === \n");
	 printf("\n========= \n");
	 fflush(stdin); // limpa cache de input...	
}

int main() {
	
    char login [200], logincadastrado[200] = "Gabriel";
	char senha[200], senhacadastrada[200] = "123";
	
	
	cabecalho();
	printf("Digite o login: ");
	scanf("%s",&login);
	
	cabecalho();
	printf("Digite sua senha: ");
	scanf("%s",&senha);
	
	
	cabecalho();
	if(strcmp(login,logincadastrado) == 0 && strcmp(senha,senhacadastrada) == 0 ){
	  printf("Bem vindo!!");		
	} else {
		printf("login errado, Acesso negado.");
	}

   return 0; 
   
   	
} 
     
