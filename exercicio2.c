#include <stdio.h>

// Função para verificar se o número pertence à sequência de Fibonacci
int pertenceAFibonacci(int numero) {
    // Iniciando os dois primeiros números da sequência de Fibonacci
    int a = 0, b = 1;
    // Verificando os primeiros números da sequência
    if (numero == a || numero == b) {
        return 1; // Retorna 1 se o número pertence à sequência
    }

    int proximo = a + b;

    // Loop para gerar a sequência de Fibonacci até que o próximo número seja maior ou igual ao número informado
    while (proximo <= numero) {
        if (proximo == numero) {
            return 1; // Retorna 1 se o número pertence à sequência
        }
        a = b;
        b = proximo;
        proximo = a + b;   // Calcula o próximo valor da sequência
    }

    return 0; // Retorna 0 se o número não pertence à sequência
}

int main() {
    int numero;

    printf("Digite um numero para verificar se pertence a sequencia de Fibonacci: ");
    scanf("%d", &numero);

    // Chama a função para verificar se o número pertence à sequência de Fibonacci
    if (pertenceAFibonacci(numero)) {
        printf("O numero %d pertence a sequencia de Fibonacci.\n", numero);
    } else {
        printf("O numero %d nao pertence a sequencia de Fibonacci.\n", numero);
    }

    return 0;
}
