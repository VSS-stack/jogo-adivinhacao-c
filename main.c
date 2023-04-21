#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main() {
    //imprime o cabeçalho do jogo
    setlocale(LC_ALL, "portuguese");
    printf("\n*******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação! *\n");
    printf("*******************************************\n");

    srand(time(0)); //definindo 'semente' aleatória para a função rand()

    int numerosecreto = rand() % 100;
    int chute;
    int tentativas = 1;
    int ganhou = 0;
    float pontos = 1000;
    int numerotentativas = 5;
    int acertou;
    
    for(int i = 1; i <= numerotentativas; i++ ) {
        printf("\nTentativa %d\n", tentativas);
        printf("\nQual é o seu chute? ");
        scanf("%d", &chute);
        printf("\nO seu chute foi: %d\n\n", chute);

        if(chute < 0) {
            printf("Você não pode chutar números negativos!\n\n");
            printf("*******************************************\n");
            continue;
        }

        acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;
        float pontosperdidos;

        if(acertou) {
            break;
        }else if(maior) {
            printf("Seu chute foi maior que o número secreto.\n\n");
            printf("*******************************************\n");
        }else {
            printf("Seu chute foi menor que o número secreto.\n\n");
            printf("*******************************************\n");
        }

        tentativas++;
        pontosperdidos = abs(chute - numerosecreto) / (float)2;
        pontos = pontos - pontosperdidos;
    }

    printf("\n*******************************************\n");
    printf("\nFim de jogo!\n");

    if(acertou) {
        printf("\nParabéns! Você acertou!\n");
        printf("\nVocê acertou em %d tentativas!\n", tentativas);
        printf("\nTotal de pontos: %.1f / 1000\n", pontos);
    }else {
        printf("\nVocê perdeu!\n");
    }

    printf("\nPressione qualquer tecla para encerrar o programa.\n");

    getch();
    return 0;
}
