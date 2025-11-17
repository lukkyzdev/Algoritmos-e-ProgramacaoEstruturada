#include <stdio.h>

#define TAXA_DESCONTO 0.09 // 9%

float calcular_salario_bruto(float valor_hora, float horas_trabalhadas) {
    return valor_hora * horas_trabalhadas;
}

float calcular_desconto(float salario_bruto) {
    return salario_bruto * TAXA_DESCONTO;
}


float calcular_salario_liquido(float salario_bruto, float desconto) {
    return salario_bruto - desconto;
}

int main() {
    float valor_hora;
    float horas_trabalhadas;
    float salario_bruto;
    float desconto;
    float salario_liquido;

    printf("--- Calculadora Salarial Modular ---\n");
    
    printf("Digite o valor da hora de trabalho (R$): ");
    if (scanf("%f", &valor_hora) != 1) {
        printf("Erro de leitura para o valor da hora.\n");
        return 1;
    }

    printf("Digite a quantidade de horas trabalhadas no mes: ");
    if (scanf("%f", &horas_trabalhadas) != 1) {
        printf("Erro de leitura para as horas trabalhadas.\n");
        return 1;
    }

    salario_bruto = calcular_salario_bruto(valor_hora, horas_trabalhadas);

    desconto = calcular_desconto(salario_bruto);

    salario_liquido = calcular_salario_liquido(salario_bruto, desconto);

    printf("\n----------------------------------------\n");
    printf("         RESUMO SALARIAL\n");
    printf("----------------------------------------\n");
    printf("Salario Bruto (Valor x Horas): R$ %.2f\n", salario_bruto);
    printf("Desconto (9%%):                 R$ %.2f\n", desconto);
    printf("----------------------------------------\n");
    printf("SALARIO LIQUIDO A RECEBER:     R$ %.2f\n", salario_liquido);
    printf("----------------------------------------\n");

    return 0;
}
