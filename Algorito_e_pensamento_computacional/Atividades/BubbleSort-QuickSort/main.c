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
// Função auxiliar de partição para o Quick Sort (Ordem Decrescente)
int particionar(float notas[], int baixo, int alto) {
    float pivo = notas[alto]; 
    int i = (baixo - 1);
    float temp;

    for (int j = baixo; j <= alto - 1; j++) {
        if (notas[j] >= pivo) {
            i++;
            temp = notas[i];
            notas[i] = notas[j];
            notas[j] = temp;
        }
    }
    temp = notas[i + 1];
    notas[i + 1] = notas[alto];
    notas[alto] = temp;
    return (i + 1);
}
// Algoritmo Quick Sort (Recursivo)
void quickSort(float notas[], int baixo, int alto) {
    if (baixo < alto) {
        int pi = particionar(notas, baixo, alto);
        quickSort(notas, baixo, pi - 1);
        quickSort(notas, pi + 1, alto);
    }
}