#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main() {
    //imprime o cabe�alho do jogo
    setlocale(LC_ALL, "portuguese");
    printf("\n*********************************************************\n");
    printf("******** Bem-vindo ao nosso jogo de adivinha��o! ********\n");
    printf("*********************************************************\n");

    printf("\n\nAdivinhe um n�mero de 0 a 100.\n\n");

    srand(time(0)); //definindo 'semente' aleat�ria para a fun��o rand()

    int numerosecreto = rand() % 100;
    int chute;
    int tentativas = 1;
    int ganhou = 0;
    float pontos = 1000;
    int numerotentativas;
    int acertou = 0;
    int nivel;

    while(1) {
        printf("\nEscolha o n�vel de dificuldade:\n");
        printf("\n(1)F�cil, (2)M�dio, (3)Dif�cil\n");
        printf("\nDigite o n�mero do n�vel escolhido: ");
        scanf("%d", &nivel);

        switch(nivel) {
            case 1:   
                numerotentativas = 20;
                printf("\nDificuldade escolhida: F�cil, total de %d tentativas.\n\n", numerotentativas);
                printf("*********************************************************\n");
                break;
            case 2:
                numerotentativas = 15;
                printf("\nDificuldade escolhida: M�dio, total de %d tentativas.\n\n", numerotentativas);
                printf("*********************************************************\n");
                break;
            case 3:
                numerotentativas = 8;
                printf("\nDificuldade escolhida: Dif�cil, total de %d tentativas.\n\n", numerotentativas);
                printf("*********************************************************\n");
                break;
            default:
                printf("\nDigite um n�mero dentre as op��es apresentadas.\n\n");
                printf("*********************************************************\n");
                continue;
        }
        break;
    }
    
    for(int i = 1; i <= numerotentativas; i++ ) {
        printf("\nTentativa %d\n", i);
        printf("\nQual � o seu chute? ");
        scanf("%d", &chute);
        printf("\nO seu chute foi: %d\n\n", chute);

        if(chute < 0) {
            printf("Voc� n�o pode chutar n�meros negativos!\n\n");
            printf("*********************************************************\n");
            i--;
            continue;
        }

        acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;
        float pontosperdidos;

        if(acertou) {
            break;
        }else if(maior) {
            printf("Seu chute foi maior que o n�mero secreto.\n\n");
            printf("*********************************************************\n");
        }else {
            printf("Seu chute foi menor que o n�mero secreto.\n\n");
            printf("*********************************************************\n");
        }

        tentativas++;
        pontosperdidos = abs(chute - numerosecreto) / (float)2;
        pontos = pontos - pontosperdidos;
    }

    printf("\n*********************************************************\n");
    printf("\nFim de jogo!\n");

    if(acertou) {
        printf("\nParab�ns! Voc� acertou!\n");
        printf("\nVoc� acertou em %d tentativas!\n", tentativas);
        printf("\nTotal de pontos: %.1f / 1000\n", pontos);
    }else {
        printf("\nVoc� perdeu!\n");
    }

    printf("\nPressione qualquer tecla para encerrar o programa.\n");

    getch();
    return 0;
}
