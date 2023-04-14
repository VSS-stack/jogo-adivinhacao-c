#include <stdio.h>
#include <locale.h>

int main() {
    //imprime o cabe�alho do jogo
    setlocale(LC_ALL, "portuguese");
    printf("\n*******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinha��o! *\n");
    printf("*******************************************\n");

    int numerosecreto = 42;
    int chute;
    int tentativas = 1;
    int ganhou = 0;

    while(ganhou == 0) {
        printf("\nTentativa %d\n", tentativas);
        printf("\nQual � o seu chute? ");
        scanf("%d", &chute);
        printf("\nO seu chute foi: %d\n\n", chute);

        if(chute < 0) {
            printf("Voc� n�o pode chutar n�meros negativos!\n\n");
            printf("*******************************************\n");
            continue;
        }

        int acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;

        if(acertou) {
            printf("Parab�ns! Voc� acertou!\n\n");
            printf("*******************************************\n");
            ganhou = 1;
            break;
        }else if(maior) {
            printf("Seu chute foi maior que o n�mero secreto.\n\n");
            printf("*******************************************\n");
        }else {
            printf("Seu chute foi menor que o n�mero secreto.\n\n");
            printf("*******************************************\n");
        }

        tentativas++;
    }

    printf("\nFim de jogo!\n");
    printf("\nVoc� acertou em %d tentativas!\n", tentativas);

    return 0;
}
