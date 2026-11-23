#include <stdio.h>
#include "string.h"

int comparar(char* texto1, char* texto2) {
    if (texto2[0] == 0) return 0;

    for (int i = 0; texto1[i] != 0; i++) {
        //Passa por todos os caracteres de texto1 procurando o primeiro caracter do texto2
        if (texto1[i] == texto2[0]) {
            printf("Achei a primeira\n");
            //Ao encontrar a primeira, verificar se as subsequentes também são iguais
            for (int j = 0; texto2[j] != 0; j++) {
                if (texto1[i+j] != texto2[j]) {
                    // Não encontrou o próximo caractere? Então esse trecho não corresponde!
                    break;
                } else {
                    if (texto2[j+1] == 0) {
                        //Está tudo certo até agora e o texto2 acabou? Então encontramos nosso trecho correspondente!
                        return i;
                    }
                }
            }
        }
    }
    return -1;
}

void babilonia(char* texto){
    for(int i = 0; texto[i] != '\0'; i++){
        if(texto[i] == ' '){
            while(texto[i+1] == ' '){
                i++;
            }
            printf("\n");
        } else {
            printf("%c", texto[i]);
        }
    }
    printf("\n");
}

void quebra(char* texto) {
    babilonia(texto);

    int espaco_encontrado = 0;
    for (int i = 0; texto[i] != 0; i++) {
        if (texto[i] == ' ' && espaco_encontrado == 0) {
            printf("\n");
            espaco_encontrado = 1;
        } else if (texto[i] != ' ') {
            printf("%c", texto[i]);
            espaco_encontrado = 0;
        }
    }
    printf("\n");
}

int meu_strcmp(char* texto1, char* texto2) {
    // ABC ABCDE
    int texto1_acabou = 0;
    int texto2_acabou = 0;
    for(int i = 0; texto1_acabou == 0 || texto2_acabou == 0; i++) {
        if (texto1[i] == 0) texto1_acabou = 1;
        if (texto2[i] == 0) texto2_acabou = 1;

        if (texto1[i] != texto2[i]) {
            return texto1[i] - texto2[i];
        }
    }
    return 0;
}
