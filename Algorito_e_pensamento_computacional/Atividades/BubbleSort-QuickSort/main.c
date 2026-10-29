#include <stdio.h>

// Função para exibir as notas formatadas
void exibirNotas(float notas[], int tamanho, const char *mensagem) {
    printf("%s\n", mensagem);
    for (int i = 0; i < tamanho; i++) {
        printf("[%.1f] ", notas[i]);
    }
    printf("\n\n");
}