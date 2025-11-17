#include <stdio.h>

int main() {
    int soma = 0;
    int numero;

    printf("--- Somador Interativo ---\n");
    printf("Digite uma sequencia de numeros inteiros.\n");
    printf("Digite 0 (zero) para encerrar e ver o resultado.\n");
    printf("--------------------------\n");

    printf("Insira um numero: ");
    if (scanf("%d", &numero) != 1) {
        printf("Erro: Entrada invalida. Encerrando.\n");
        return 1;
    }

    while (numero != 0) {
        soma = soma + numero; 

        printf("Insira o proximo numero (ou 0 para parar): ");
        if (scanf("%d", &numero) != 1) {
             printf("Erro: Entrada invalida. Encerrando.\n");
             break;
        }
    }

    printf("\n------------------------------------------\n");
    printf("Loop encerrado.\n");
    printf("A soma total de todos os numeros inseridos e: %d\n", soma);
    printf("------------------------------------------\n");
    
    return 0;
}
