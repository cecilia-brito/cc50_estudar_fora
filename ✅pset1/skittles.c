#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <cs50.h>

int
main(void){
	// setting up seed for convenient number 
	srand((unsigned)time(NULL));

	//setting up random number interval 
	int randomNumber = rand() % 1024;

	int userNumber =  0;
	printf("o valor é: %d\n", randomNumber);
	printf("Adivinhe o número entre 1 e 1023, humano: \n");

	//loop forever for ask user kick and validate your answers
	while(userNumber != randomNumber){
		userNumber = get_int("Digite seu chute aqui: ", userNumber);
		if(userNumber < randomNumber){
			printf("O número que você chutou é muito baixo!\n");
		} else if (userNumber > randomNumber){
			printf("O número que você chutou é muito alto!\n");
		} 
	}
	
	printf("Parabéns humano!\n");
}
