#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <cs50.h>

int
main(void){
                                                                                                                                                        
    printf("            ████████████                                       \n");                                  
    printf("        ████░░░░░░░░░░░░████                                   \n");                               
    printf("      ██░░░░▒▒▒▒▒▒▒▒▒▒▒▒░░░░██          Sabendo que usaremos   \n");                               
    printf("    ██░░░░▒▒░░░░░░░░░░░░▒▒░░░░██       moedas de 25 centavos,  \n");                             
    printf("    ██░░▒▒░░░░      ░░░░░░  ░░██       10 centavos, 5 centavos \n");                                
    printf("  ██░░▒▒░░░░░░  ░░░░▒▒░░░░░░  ░░██          e 1 centavo...     \n");                                
    printf("  ██░░▒▒░░      ░░░░░░  ░░░░  ░░██                             \n");                                
    printf("  ██░░▒▒░░  ░░░░░░░░░░░░▒▒░░  ░░██                             \n");                                
    printf("  ██░░▒▒░░  ░░░░░░░░░░░░▒▒░░  ░░██                             \n");                                
    printf("  ██░░▒▒░░░░▒▒░░░░░░▒▒▒▒▒▒░░  ░░██                             \n");                                
    printf("  ██░░▒▒░░░░░░  ░░░░▒▒░░░░░░  ░░██                             \n");                                
    printf("    ██░░▒▒░░░░░░▒▒▒▒▒▒░░░░  ░░██                               \n");                               
    printf("    ██░░░░  ░░░░░░░░░░░░  ░░░░██                               \n");                               
    printf("      ██░░░░            ░░░░██                                 \n");                                 
    printf("        ████░░░░░░░░░░░░████                                   \n");                                  
    printf("            ████████████                                       \n");                                    

    
    float troco = get_float("                                   Digite quanto eu devo: ");

    while(troco < 0){
        printf("                                                Não posso pagar um troco negativo, por favor, tente novamente: ");
        troco = get_float("");
    }

    int centavos = (troco*100);
    int moeda = 0;
    int quant_moedas = 0;

    while(centavos > 0){

        if(centavos >= 25){
            moeda = 25;
        } else if (centavos >= 10){
            moeda = 10;
        } else if (centavos >= 5){
            moeda = 5;
        } else {
            moeda = 1;
        }
        centavos -= moeda;
        quant_moedas++;
    }  

    printf("                                  A quantidade de moedas mínimas para pagar seu troco é: %d\n", quant_moedas);
}