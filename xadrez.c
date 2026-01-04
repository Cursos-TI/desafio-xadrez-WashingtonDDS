#include <stdio.h>

/* =====================================================
   FUNÇÕES RECURSIVAS - NÍVEL MESTRE
   ===================================================== */

/* Torre - movimento recursivo para a direita */
void moverTorre(int casas) {
    if (casas == 0) {
        return;
    }
    printf("Direita\n");
    moverTorre(casas - 1);
}

/* Rainha - movimento recursivo para a esquerda */
void moverRainha(int casas) {
    if (casas == 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

/* Bispo - movimento recursivo diagonal (cima + direita) */
void moverBispoRecursivo(int casas) {
    if (casas == 0) {
        return;
    }
    printf("Cima\n");
    printf("Direita\n");
    moverBispoRecursivo(casas - 1);
}

int main() {

    /* =====================================================
       NÍVEL NOVATO - FOR / WHILE / DO-WHILE
       ===================================================== */

    printf("=== NIVEL NOVATO ===\n");

    /* Torre - 5 casas para a direita (FOR) */
    int casasTorreNovato = 5;
    printf("\nMovimento da TORRE:\n");
    for (int i = 1; i <= casasTorreNovato; i++) {
        printf("Direita\n");
    }

    /* Bispo - 5 casas na diagonal (WHILE) */
    int casasBispoNovato = 5;
    int contadorBispo = 1;
    printf("\nMovimento do BISPO:\n");
    while (contadorBispo <= casasBispoNovato) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    /* Rainha - 8 casas para a esquerda (DO-WHILE) */
    int casasRainhaNovato = 8;
    int contadorRainha = 1;
    printf("\nMovimento da RAINHA:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainhaNovato);

    /* =====================================================
       NÍVEL AVENTUREIRO - CAVALO COM LOOPS ANINHADOS
       ===================================================== */

    printf("\n=== NIVEL AVENTUREIRO ===\n");
    printf("\nMovimento do CAVALO:\n");

    int movimentoVertical = 2;
    int movimentoHorizontal = 1;

    /* Cavalo: 2 para baixo + 1 para a esquerda */
    for (int i = 1; i <= movimentoVertical; i++) {
        printf("Baixo\n");

        int contadorHorizontal = 1;
        while (contadorHorizontal <= movimentoHorizontal) {
            if (i == movimentoVertical) {
                printf("Esquerda\n");
            }
            contadorHorizontal++;
        }
    }

    /* =====================================================
       NÍVEL MESTRE - RECURSIVIDADE E LOOPS COMPLEXOS
       ===================================================== */

    printf("\n=== NIVEL MESTRE ===\n");

    int casasTorreMestre = 3;
    int casasRainhaMestre = 4;
    int casasBispoMestre = 3;

    /* Torre recursiva */
    printf("\nMovimento da TORRE (Recursivo):\n");
    moverTorre(casasTorreMestre);

    /* Rainha recursiva */
    printf("\nMovimento da RAINHA (Recursivo):\n");
    moverRainha(casasRainhaMestre);

    /* Bispo com loops aninhados */
    printf("\nMovimento do BISPO (Loops Aninhados):\n");
    for (int vertical = 1; vertical <= casasBispoMestre; vertical++) {
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }

    /* Bispo recursivo */
    printf("\nMovimento do BISPO (Recursivo):\n");
    moverBispoRecursivo(casasBispoMestre);

    /* Cavalo com loops complexos, continue e break */
    printf("\nMovimento do CAVALO (Loops Complexos):\n");

    for (int vertical = 1; vertical <= 3; vertical++) {

        if (vertical <= 2) {
            printf("Cima\n");
            continue;
        }

        for (int horizontal = 1; horizontal <= 2; horizontal++) {
            if (horizontal == 2) {
                break;
            }
            printf("Direita\n");
        }
    }

    return 0;
}
