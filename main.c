#include <stdio.h>

float soma(float a, float b) { return a + b; }
float subtracao(float a, float b) { return a - b; }
float multiplicacao(float a, float b) { return a * b; }
float divisao(float a, float b) { 
    if (b == 0) {
        printf("Erro: Divisao por zero!\n");
        return 0;
    }
    return a / b; 
}

int main() {
    float num1, num2, resultado;
    char operacao;
    char continuar;

    printf("*********************************************\n");
    printf("               CALCULADORA SIMPLES           \n");
    printf("               SIMPLE CALCULATOR             \n");
    printf("*********************************************\n");

    do {
        printf("Escolha a operacao (+, -, *, /): / Choose the operation (+, -, *, /): ");
        scanf(" %c", &operacao);
        
        printf("Digite o primeiro numero / Enter the first number: ");
        scanf("%f", &num1);
        
        printf("Digite o segundo numero / Enter the second number: ");
        scanf("%f", &num2);

        switch (operacao) {
            case '+':
                resultado = soma(num1, num2);
                printf("%.2f + %.2f = %.2f\n", num1, num2, resultado);
                break;
            case '-':
                resultado = subtracao(num1, num2);
                printf("%.2f - %.2f = %.2f\n", num1, num2, resultado);
                break;
            case '*':
                resultado = multiplicacao(num1, num2);
                printf("%.2f * %.2f = %.2f\n", num1, num2, resultado);
                break;
            case '/':
                resultado = divisao(num1, num2);
                printf("%.2f / %.2f = %.2f\n", num1, num2, resultado);
                break;
            default:
                printf("Operacao invalida! / Invalid operation!\n");
                break;
        }

        printf("Deseja realizar outra operacao? (s/n) / Do you want to perform another operation? (y/n): ");
      
        scanf("%c", &continuar);

    } while (continuar == 's' || continuar == 'y');

    return 0;
}
