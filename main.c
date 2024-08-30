#include <stdio.h>
#include <string.h>
#include <math.h>


// declaração das funçoes de utilidade
void help(void);
void compare(double a, double b);

// Declaração das funções matematicas
void soma(int a, int b);
void sub(int a, int b);
void mult(int a, int b);
void divi(int a, int b);
void mod(int a, int b);
void poten(int a, int b);


int main() {
    char comando[100];
    char funcao[20];
    int a, b;

    printf("Bem vindo a calculadora de terminal\n\n");
    printf("digite 'sair' para finalizar ou 'help' para ajuda:\n\n");
    
    while(1) {
        // Exibe o prompt
        printf("Digite o comando: ");
        fgets(comando, 100, stdin);  // Lê o comando completo do usuário

        // Remove a quebra de linha no final do comando
        comando[strcspn(comando, "\n")] = '\0';

        // Se o usuário digitar "sair", finaliza o programa
        if (strcmp(comando, "sair") == 0) {
            break;
        }

        // Lê o nome da função e os parâmetros a partir do comando
        sscanf(comando, "%s %d %d", funcao, &a, &b);

      

        // Verifica o nome da função e chama a função correspondente
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
        } else {
            printf("Comando desconhecido!\n");
        }
    }

    return 0;
}

// Implementação das funções
void soma(int a, int b) {
    printf("Resultado: %d\n", a + b);
}

void sub(int a, int b) {
    printf("Resultado: %d\n", a - b);
}

void mult(int a, int b) {
    printf("Resultado: %d\n", a * b);
}

void divi(int a, int b) {
    if (b != 0) {
        printf("Resultado: %d\n", a / b);
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


    printf("\n\n");
}