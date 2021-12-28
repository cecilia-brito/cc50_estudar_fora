#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <cs50.h>
#include <string.h>

int
main(void){

    char grafico1[81] = "";
    char grafico2[81] = "";
    char grafico3[81] = "";
    char grafico4[81] = "";
    int teste = 1;


    printf("M procurando F: ");
    int m_procurando_f = get_int("");
    printf("F procurando M: "); 
    int f_procurando_m = get_int("");
    printf("F procurando F: "); 
    int f_procurando_f = get_int("");
    printf("M procurando M: "); 
    int m_procurando_m = get_int("");

    while(teste){

        if(m_procurando_f < 0){    
            printf("Você digitou um número negativo, por favor, digite um número positivo\n");
            printf("M procurando F: ");
            m_procurando_f = get_int("");
        } else if(m_procurando_m < 0){
            printf("Você digitou um número negativo, por favor, digite um número positivo\n");
            printf("F procurando M: "); 
            f_procurando_m = get_int("");
        } else if (f_procurando_f < 0){
            printf("Você digitou um número negativo, por favor, digite um número positivo\n");
            printf("F procurando F: "); 
            f_procurando_f = get_int("");
        } else if (f_procurando_m < 0){
            printf("Você digitou um número negativo, por favor, digite um número positivo\n");
            printf("M procurando M: "); 
            m_procurando_m = get_int("");
        } else{
            teste = 0;
        }
    }

    int sum_values = m_procurando_f + f_procurando_m + f_procurando_f + m_procurando_m;

    int percent_m_procurando_f = (100 * m_procurando_f)/sum_values;
    int percent_f_procurando_m = (100 * f_procurando_m)/sum_values;
    int percent_f_procurando_f = (100 * f_procurando_f)/sum_values;
    int percent_m_procurando_m = (100 * m_procurando_m)/sum_values;

    int caracteres_m_procurando_m = (100*percent_m_procurando_m)/80;
    int caracteres_m_procurando_f = (100*percent_m_procurando_f)/80;
    int caracteres_f_procurando_m = (100*percent_f_procurando_m)/80;
    int caracteres_f_procurando_f = (100*percent_f_procurando_f)/80;

    printf("                             \n");
    printf("Quem procura quem? \n");
    printf("                             \n");

    for(int i = 1; i <= caracteres_m_procurando_f; i++){
        strcat(grafico1, "#");
    }
    printf("M procurando F\n");
    printf("%s\n", grafico1);

    
    for(int i = 1; i <= caracteres_f_procurando_m; i++){
         strcat(grafico2, "#");
    }

    printf("F procurando M\n");
    printf("%s\n", grafico2);
    
    for(int i = 1; i <= caracteres_f_procurando_f; i++){
        strcat(grafico3, "#");
    }
    printf("F procurando F\n");
    printf("%s\n", grafico3);
    
    for(int i = 0; i < caracteres_m_procurando_m; i++){
         strcat(grafico4, "#");
    }
    printf("M procurando M\n");
    printf("%s\n", grafico4);
}