#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //imprime o cabe�alho do jogo
    setlocale(LC_ALL, "portuguese");
    printf("*******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinha��o! *\n");
    printf("*******************************************\n");

    int numerosecreto = 42;

    int chute;

    printf("\nQual � o seu chute? ");
    scanf("%d", &chute);
    printf("\n\nO seu chute foi: %d\n", chute);

    return 0;
}
