#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    //imprime o cabeçalho do jogo
    setlocale(LC_ALL, "portuguese");
    printf("\n*******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação! *\n");
    printf("*******************************************\n");

    int numerosecreto = 42;

    int chute;

    printf("\nQual é o seu chute? ");
    scanf("%d", &chute);
    printf("\nO seu chute foi: %d\n\n", chute);

    if(chute == numerosecreto) {
        printf("Parabéns! Você acertou!\n");
    }
    else if(chute > numerosecreto) {
        printf("Seu chute foi maior que o número secreto.\n\n");
    }
    else if(chute < numerosecreto) {
        printf("Seu chute foi menor que o número secreto.\n\n");
    }

    return 0;
}
