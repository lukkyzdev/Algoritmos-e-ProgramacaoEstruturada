#include <stdio.h>
#include <stdbool.h>

int main() {
    int num1, num2, num3;

    // --- ENTRADA DE DADOS ---
    printf("--- Programa de Operacoes e Verificacoes ---\n");
    printf("Digite o primeiro numero inteiro (num1): ");
    scanf("%d", &num1);
    printf("Digite o segundo numero inteiro (num2): ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero inteiro (num3): ");
    scanf("%d", &num3);

    printf("\nNumeros inseridos: num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);
    printf("-------------------------------------------\n");

    // 1. OPERAÇÕES ARITMÉTICAS
    
    int soma_total = num1 + num2 + num3;
    float divisao = (float)num1 / num2; 
    
    printf("1. Resultados das Operacoes Aritmeticas:\n");
    printf("   Soma Total (num1 + num2 + num3): %d\n", soma_total);
    printf("   Subtracao (num1 - num2): %d\n", num1 - num2);
    printf("   Multiplicacao (num1 * num2): %d\n", num1 * num2);
    printf("   Divisao (num1 / num2): %.2f\n", divisao);
    
    printf("-------------------------------------------\n");

    // 2. OPERAÇÕES RELACIONAIS
    
    bool condicao_a = num1 > num2; 
    bool condicao_b = num2 < num3; 
    
    printf("2. Resultados das Verificacoes Relacionais:\n");
    printf("   - num1 (%d) e maior que num2 (%d)? -> %s\n", num1, num2, condicao_a ? "VERDADEIRO" : "FALSO");
    printf("   - num2 (%d) e menor que num3 (%d)? -> %s\n", num2, num3, condicao_b ? "VERDADEIRO" : "FALSO");
    
    printf("-------------------------------------------\n");

    // 3. OPERAÇÕES LÓGICAS
    
    bool num1_positivo = num1 > 0;           
    bool num2_par = num2 % 2 == 0;           
    
    bool condicao_logica_final = num1_positivo && num2_par;
    
    printf("3. Resultados das Verificacoes Logicas:\n");
    printf("   - num1 (%d) e positivo? -> %s\n", num1, num1_positivo ? "SIM" : "NAO");
    printf("   - num2 (%d) e par? -> %s\n", num2, num2_par ? "SIM" : "NAO");
    
    if (condicao_logica_final) {
        printf("\n=> MENSAGEM ESPECIFICA: Ambas as condicoes (num1 positivo E num2 par) sao VERDADEIRAS!\n");
    } else {
        printf("\n=> Pelo menos uma das condicoes logicas nao foi satisfeita.\n");
    }

    printf("-------------------------------------------\n");
    return 0;
}
