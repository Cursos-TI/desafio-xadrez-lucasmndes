#include <stdio.h>

int main() {

    // ----------------------------------------
    // TORRE - Estrutura: FOR
    // ----------------------------------------
    // A torre se move em linha reta. Vamos simular 5 casas para a direita.
    int casasTorre = 5;
    printf("Movimento da TORRE:\n");

    for (int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    printf("\n"); // separador visual


    // ----------------------------------------
    // BISPO - Estrutura: WHILE
    // ----------------------------------------
    // O bispo se move na diagonal. Vamos simular 5 casas para cima e à direita.
    int casasBispo = 5;
    int i = 1;
    printf("Movimento do BISPO:\n");

    while (i <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }

    printf("\n");


    // ----------------------------------------
    // RAINHA - Estrutura: DO-WHILE
    // ----------------------------------------
    // A rainha pode se mover em todas as direções.
    // Vamos simular 8 casas para a esquerda.
    int casasRainha = 8;
    int j = 1;
    printf("Movimento da RAINHA:\n");

    do {
        printf("Casa %d: Esquerda\n", j);
        j++;
    } while (j <= casasRainha);

    printf("\n");


    // ----------------------------------------
    // CAVALO - Estrutura: FOR + WHILE (loops aninhados)
    // ----------------------------------------
    // O cavalo se move em "L":
    // Duas casas em uma direção (baixo) e uma perpendicularmente (esquerda).
    // Vamos simular esse movimento: "Baixo", "Baixo", "Esquerda".
    int movimentoVertical = 2;   // duas casas para baixo
    int movimentoHorizontal = 1; // uma casa para a esquerda

    printf("Movimento do CAVALO:\n");

    // Loop externo: FOR → controla o movimento vertical (para baixo)
    for (int linha = 1; linha <= movimentoVertical; linha++) {
        printf("Casa %d: Baixo\n", linha);
    }

    // Linha em branco para indicar que terminou a parte vertical
    printf("(Virando para o movimento horizontal...)\n");

    // Loop interno: WHILE → controla o movimento horizontal (para a esquerda)
    int coluna = 1;
    while (coluna <= movimentoHorizontal) {
        printf("Casa %d: Esquerda\n", movimentoVertical + coluna);
        coluna++;
    }

    printf("\nSimulação completa!\n");

    return 0;
}
