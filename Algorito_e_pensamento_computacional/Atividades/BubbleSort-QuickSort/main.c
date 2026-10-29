#include <stdio.h>

// Função para exibir as notas formatadas
void exibirNotas(float notas[], int tamanho, const char *mensagem) {
    printf("%s\n", mensagem);
    for (int i = 0; i < tamanho; i++) {
        printf("[%.1f] ", notas[i]);
    }
    printf("\n\n");
}
// Função para copiar os elementos de um array para outro
void copiarArray(float origem[], float destino[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        destino[i] = origem[i];
    }
}
// Algoritmo Bubble Sort (Ordem Decrescente)
void bubbleSort(float notas[], int tamanho) {
    int i, j;
    float temp;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            // Para ordem decrescente, se o elemento atual for MENOR que o próximo, trocamos
            if (notas[j] < notas[j + 1]) {
                temp = notas[j];
                notas[j] = notas[j + 1];
                notas[j + 1] = temp;
            }
        }
    }
}