#include <stdio.h>
#include "my_string.h"

int main(void){
    char string[100];

    input("Digite uma string:\n", string);
    printf("String digitada: %s\n", string);
    printf("Tamanho da string: %d\n", length(string));
    printf("String em maiusculas: %s\n", toUpper(string));
    printf("String em minusculas: %s\n", toLower(string));
    scanf("%*c");
}