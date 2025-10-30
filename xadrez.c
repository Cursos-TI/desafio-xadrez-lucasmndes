#include <stdio.h>

int main() {

    // -------------------------------
    // TORRE - Estrutura: FOR
    // -------------------------------
    // A torre se move em linha reta, neste caso 5 casas para a direita.
    int casasTorre = 5;
    printf("Movimento da TORRE:\n");

    // O laço for é ideal quando sabemos o número exato de repetições.
    for (int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    printf("\n"); // linha em branco para separar as seções


    // -------------------------------
    // BISPO - Estrutura: WHILE
    // -------------------------------
    // O bispo se move na diagonal. Vamos simular 5 casas para cima e à direita.
    int casasBispo = 5;
    int i = 1; // contador para o while
    printf("Movimento do BISPO:\n");

    // O while é usado quando queremos repetir enquanto uma condição for verdadeira.
    while (i <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }

    printf("\n");


    // -------------------------------
    // RAINHA - Estrutura: DO-WHILE
    // -------------------------------
    // A rainha pode se mover em todas as direções.
    // Vamos simular 8 casas para a esquerda.
    int casasRainha = 8;
    int j = 1;
    printf("Movimento da RAINHA:\n");

    // O do-while executa o bloco pelo menos uma vez,
    // mesmo que a condição seja falsa depois.
    do {
        printf("Casa %d: Esquerda\n", j);
        j++;
    } while (j <= casasRainha);

    printf("\nSimulação concluída!\n");

    return 0;
}
