#include <stdio.h>

/* ===========================
   Protótipos (recursividade)
   =========================== */
void mover_torre_direita(int passos);
void mover_bispo_cima_direita_rec(int passos);
void mover_rainha_esquerda(int passos);

/* ===========================
   Torre (recursivo)
   -> Move "Direita" N vezes
   =========================== */
void mover_torre_direita(int passos) {
    if (passos <= 0) return;           // caso-base
    printf("Direita\n");
    mover_torre_direita(passos - 1);   // passo recursivo
}

/* ===========================
   Bispo (recursivo)
   -> Para cada casa: "Cima" e "Direita"
   (imprime uma direção por linha, conforme padrão)
   =========================== */
void mover_bispo_cima_direita_rec(int passos) {
    if (passos <= 0) return;           // caso-base
    printf("Cima\n");
    printf("Direita\n");
    mover_bispo_cima_direita_rec(passos - 1);
}

/* ===========================
   Rainha (recursivo)
   -> Move "Esquerda" N vezes
   =========================== */
void mover_rainha_esquerda(int passos) {
    if (passos <= 0) return;           // caso-base
    printf("Esquerda\n");
    mover_rainha_esquerda(passos - 1);
}

int main(void) {
    /* ===========================
       Parâmetros (definidos no código)
       =========================== */
    int passosTorre  = 5;  // Direita
    int passosBispo  = 5;  // Cima + Direita
    int passosRainha = 8;  // Esquerda

    /* ===========================
       TORRE (RECUSIVO)
       =========================== */
    printf("Movimento da TORRE (recursivo):\n");
    mover_torre_direita(passosTorre);
    printf("\n");

    /* ===========================
       BISPO (RECUSIVO)
       =========================== */
    printf("Movimento do BISPO (recursivo):\n");
    mover_bispo_cima_direita_rec(passosBispo);
    printf("\n");

    /* ===========================
       BISPO (LOOPS ANINHADOS)
       -> Externo: vertical (Cima)
       -> Interno: horizontal (Direita)
       Para cada passo diagonal:
         - imprime "Cima"
         - depois, no loop interno, "Direita"
       =========================== */
    printf("Movimento do BISPO (loops aninhados):\n");
    for (int v = 0; v < passosBispo; v++) { // vertical (Cima)
        printf("Cima\n");
        for (int h = 0; h < 1; h++) {       // horizontal (Direita)
            printf("Direita\n");
        }
    }
    printf("\n");

    /* ===========================
       RAINHA (RECUSIVO)
       =========================== */
    printf("Movimento da RAINHA (recursivo):\n");
    mover_rainha_esquerda(passosRainha);
    printf("\n");

    /* ===========================
       CAVALO (LOOPS COMPLEXOS)
       Requisito: 2 para CIMA e 1 para DIREITA (movimento em "L")
       - Usa loops aninhados
       - Usa múltiplas variáveis/condições
       - Demonstra uso de 'continue' e 'break'
       Lógica:
         * Um laço externo controla as “etapas” (3 ações: Cima, Cima, Direita)
         * As 2 primeiras iterações imprimem "Cima" e usam 'continue'
         * Na 3ª, executa um laço interno while para a "Direita" e usa 'break'
       =========================== */
    printf("Movimento do CAVALO (loops complexos):\n");
    int etapasTotais = 3;    // 2 Cima + 1 Direita
    int moveuDireita = 0;    // flag para demonstrar controle de fluxo

    for (int etapa = 1, sub = 0; etapa <= etapasTotais; etapa++, sub++) {
        // Etapas 1 e 2: movimentação vertical (Cima)
        if (etapa <= 2) {
            printf("Cima\n");
            // pula o restante desta iteração do laço externo
            continue;
        }

        // Etapa 3: movimentação horizontal (Direita) via laço interno
        int h = 0;
        while (h < 1) {
            // condição extra apenas para ilustrar múltiplas condições/variáveis
            if (moveuDireita) {
                // se por algum motivo já moveu, interrompe
                break;
            }
            printf("Direita\n");
            moveuDireita = 1;
            h++;

            // após cumprir a etapa horizontal, encerramos o laço interno
            if (h == 1) {
                break; // controle de saída explícito
            }
        }
    }

    printf("\nSimulação concluída!\n");
    return 0;
}
