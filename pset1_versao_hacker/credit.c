#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main(void){
    char str[64];
    long long int cardNumber = get_long_long("Digite");
    string stringConvertida = snprintf(str, 16, "%lld\n", cardNumber);
    printf("o char é: %s", stringConvertida);
    // printf("%lld", cardNumber);
    // int quantDigitos = strlen(charQuantDigitos);
    // int digitos [quantDigitos];
    // for (int i = 0; i < quantDigitos; i++){
    //     if(i > 0){
    //          digitos[i] = cardNumber % (pow(10, i));
    //     } else{
    //         digitos[i] = cardNumber % 10;
    //     }
    //     printf("o número é: %d", digitos);
    // }
}