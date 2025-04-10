#include <stdio.h>
#include <string.h>
#include <math.h>
#include "funcoes.h"

int main() {
    char comando[100];
    char funcao[20];
    int a, b;

    printf("Bem vindo a calculadora de terminal\n\n");
    printf("digite 'sair' para finalizar ou 'help' para ajuda:\n\n");
    
    while(1) {
       
        printf("Digite o comando: ");
        fgets(comando, 100, stdin); 

        comando[strcspn(comando, "\n")] = '\0';

        if (strcmp(comando, "sair") == 0) {
            break;
        }

        sscanf(comando, "%s %d %d", funcao, &a, &b);

      

        if (strcmp(funcao, "soma") == 0) {
            soma(a, b);
        } else if (strcmp(funcao, "sub") == 0) {
            sub(a, b);
        } else if (strcmp(funcao, "mult") == 0) {
            mult(a, b);
        } else if (strcmp(funcao, "divi") == 0) {
            divi(a, b);
        } else if (strcmp(funcao, "mod") == 0){
            mod(a, b);
        } else if (strcmp(funcao, "poten") == 0){
            poten(a, b);
        } else if (strcmp(funcao, "compare") == 0){
            compare(a, b);
        } else if (strcmp(funcao, "help") == 0) {
            help();
        }else if (strcmp(funcao, "clear") == 0){
            clear();
        } else {
            printf("Comando desconhecido!\n");
        }
    }

    return 0;
}
