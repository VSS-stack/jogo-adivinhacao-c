#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //imprime o cabeçalho do jogo
    setlocale(LC_ALL, "portuguese");
    printf("*******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação! *\n");
    printf("*******************************************\n");

    int numerosecreto = 42;

    printf("\nPressione qualquer tecla para encerrar\n");
    getchar();
    return 0;
}
