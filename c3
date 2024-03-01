#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "");
    //DEFINIDO VARIAVEIS
    
    int idade;
    //solicitando dados 
    
    printf("\n\nDigite sua idade:");
    scanf("%i",&idade);
    
    //verificando se e obrigado a votar
    
    if(idade<=18 || idade>=65){
    	printf("Nao e obrigatorio a votar.");
    	
	}
	
	else{
		printf("obrigatorio a votar");
	}	
	return 0;
	
    
}
