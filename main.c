#include <stdio.h>
#include <string.h>
#include "string.h"

int main() {
    /*printf("%d\n", comparar("Oi", ""));
    printf("%d\n", comparar("Prog", "ro"));
    printf("%d\n", comparar("Prg Prog", "ro"));*/

    //quebra("oi bom dia,      turma");

    printf("%d\n", meu_strcmp("ABC", "ABC"));

    printf("%d\n", meu_strcmp("ABC", "ABE"));

    printf("%d\n", meu_strcmp("ABC", "AB"));

    printf("%d\n", meu_strcmp("ABC", "abc"));

    printf("%d\n", meu_strcmp("ABC", "ABCDE"));
    return 0;
}
