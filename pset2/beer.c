#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int
main(void){

    int quantBeers = 0;
    while(quantBeers <= 0){
        quantBeers = get_int("Digite um número positivo e maior que zero: \n");
    }
    for(int i = quantBeers; i > 0; i--){
        string bottles = (i == 1) ? "garrafa" : "garrafas";
        (i==1) ? printf("%d %s de cerveja no muro, bebo uma, jogo no lixo, nenhuma %s no muro...\n", i, bottles, bottles) : printf("%d garrafas de cerveja no muro, bebo uma, jogo no lixo, %d %s no muro...\n", i, i - 1, bottles);
    }
}        