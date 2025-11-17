#include <stdio.h>

#define TAMANHO 5

int main() {
    int vendas_diarias[TAMANHO];
    
    int soma_total = 0;
    
    int i;

    printf("--- Analise de Vendas Diarias ---\n");
    
    printf("\nInsira a quantidade de vendas realizadas em 5 dias:\n");
    
    for (i = 0; i < TAMANHO; i++) {
        printf("Vendas do Dia %d: ", i + 1);
        
        if (scanf("%d", &vendas_diarias[i]) != 1) {
             printf("Erro: Entrada invalida. Encerrando.\n");
             return 1;
        }
    }

    for (i = 0; i < TAMANHO; i++) {
        soma_total += vendas_diarias[i]; 
    }

    printf("\n----------------------------------------\n");
    printf("   RELATORIO DE VENDAS DO PERIODO\n");
    printf("----------------------------------------\n");
    
    printf("Vendas por dia:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("Dia %d: %d\n", i + 1, vendas_diarias[i]);
    }

    printf("\n----------------------------------------\n");
    
    printf("Soma total de vendas no periodo: %d\n", soma_total);
    printf("----------------------------------------\n");

    return 0;
}
