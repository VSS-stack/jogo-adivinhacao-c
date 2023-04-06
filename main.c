#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //imprime o cabe�alho do jogo
    setlocale(LC_ALL, "portuguese");
    printf("\n*******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinha��o! *\n");
    printf("*******************************************\n");

    int numerosecreto = 42;

    int chute;

    printf("\nQual � o seu chute? ");
    scanf("%d", &chute);
    printf("\nO seu chute foi: %d\n\n", chute);

    if(chute == numerosecreto) {
        printf("Parab�ns! Voc� acertou!\n");
    }
    else if(chute > numerosecreto) {
        printf("Seu chute foi maior que o n�mero secreto.\n\n");
    }
    else if(chute < numerosecreto) {
        printf("Seu chute foi menor que o n�mero secreto.\n\n");
    }

    return 0;
}
