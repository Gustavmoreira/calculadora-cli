#include <stdio.h>
#include <math.h> 
#include "funcoes.h"

void soma(int a, int b) {
    printf("Resultado: %d\n", a + b);
}

void sub(int a, int b) {
    printf("Resultado: %d\n", a - b);
}

void mult(int a, int b) {
    printf("Resultado: %d\n", a * b);
}

void divi(float a, float b) {
    if (b != 0) {
        printf("Resultado: %2f\n", a / b);
    } else {
        printf("Erro: divisao por zero!\n");
    }
}

void mod(int a, int b) {
    if (b != 0) {
        printf("Resultado: %d\n", a % b);
    } else {
        printf("Error: divisao por zero!\n");
    }
}

void poten(int a, int b) {
    printf("Resultado: %.2f\n", pow(a, b));
}

void compare(double a, double b){
    if(a != b){
        printf("os numeros sao diferentes!\n");
    } else {
        printf("os numeros sao iguais!\n");
    }

}


void help(void){
    printf("\nfuncionalidades matematicas:\n\n");

    printf("'soma': a,b soma dois numeros\n");
    printf("'sub': a,b subtrai dois numeros\n");
    printf("'mult': a,b multiplica dois numeros\n");
    printf("'divi': a,b divide dois numeros");
    printf("'mod': a,b divide e exibe o resto da divisao\n");
    printf("'poten': a,b faz a potencia de um numero ( 'a' elevado a 'b')\n");

    printf("\n\n");

    printf("funcionalidades utilitarias\n\n");

    printf("'compare' a,b compara dois numeros e diz se sao iguais\n");
    printf("'clear' limpa a tela\n");

    printf("\n\n");
}

void clear(void){
    printf("\033[H\033[J");
}