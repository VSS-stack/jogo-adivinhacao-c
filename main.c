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

    for(int i = 1; i<=3; i++){
        printf("\nTentativa %d de 3\n", i);
        printf("\nQual é o seu chute? ");
        scanf("%d", &chute);
        printf("\nO seu chute foi: %d\n\n", chute);

        int acertou = chute == numerosecreto;

        if(acertou) {
            printf("Parabéns! Você acertou!\n\n");
            printf("*******************************************\n");
            break;
        }else {
            int maior = chute > numerosecreto;

            if(maior) {
                printf("Seu chute foi maior que o número secreto.\n\n");
                printf("*******************************************\n");
            }else {
                printf("Seu chute foi menor que o número secreto.\n\n");
                printf("*******************************************\n");
            }
        }
    }

    printf("\nFim de jogo!\n");

    return 0;
}
