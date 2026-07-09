#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    //Jogo de Pedra, Papel, Tesoura
    int menu, escolhaJogador, escolhaComputador, jogarNovamente;
    srand(time(0));

    //Repetição do menu principal caso o jogador não queira sair do jogo
    do {
        //Menu principal do jogo
        printf("\nPedra, Papel, Tesoura - Menu Principal \n");
        printf("1. Iniciar Jogo \n");
        printf("2. Regras \n");
        printf("3. Sair \n");
        scanf("%d", &menu);

        switch (menu)
        {
        //Inicia o jogo
        case 1: 
            //Insere a repetição caso o jogador opte por jogar novamente
            do {
                //Repetição caso o jogador insira uma opção inválida
                do {
                    //Escolha do jogador
                    printf("\nEscolha uma opção: \n");
                    printf("1. Pedra \n");
                    printf("2. Papel \n");
                    printf("3. Tesoura \n");
                    scanf("%d", &escolhaJogador);
                
                    if (escolhaJogador < 1 || escolhaJogador > 3) {
                        printf("\nOpção inválida. \n");
                    }
                } while (escolhaJogador < 1 || escolhaJogador > 3); 

                //Geração da escolha do computador de forma aleatória
                escolhaComputador = rand() % 3 + 1;

                //Mostra as escolhas na tela
                switch (escolhaJogador)
                {
                case 1:
                    printf("\nJogador: Pedra - ");
                    break;
                case 2:
                    printf("\nJogador: Papel - ");
                    break;
                case 3:
                    printf("\nJogador: Tesoura - ");
                    break;
                }
                switch (escolhaComputador)
                {
                case 1:
                    printf("Computador: Pedra \n");
                    break;
                case 2:
                    printf("Computador: Papel \n");
                    break;
                case 3:
                    printf("Computador: Tesoura \n");
                    break;
                }

                //Determinação de quem ganhou o jogo
                if (escolhaComputador == escolhaJogador)
                {
                    printf("O jogo empatou! \n");
                } else if ((escolhaComputador == 1) && (escolhaJogador == 2) || 
                    (escolhaComputador == 2) && (escolhaJogador == 3) ||
                    (escolhaComputador == 3) && (escolhaJogador == 1)){
                    printf("### Parabéns! Você ganhou! :) \n");
                } else {
                    printf("### Poxa... Você perdeu! :( \n");
                }

                //Opção de jogar novamente ou voltar ao menu principal e repetição caso o jogador insira uma opção inválida
                do{
                    printf("\n1. Jogar novamente \n");
                    printf("2. Menu Principal \n");
                    scanf("%d", &jogarNovamente);

                    jogarNovamente <1 || jogarNovamente >2 ? printf("\nOpção inválida. \n") : 0;

                } while (jogarNovamente <1 || jogarNovamente >2); 


            } while (jogarNovamente == 1);  

            break;
        //Mostra as regras do jogo
        case 2: 
            printf("\nRegras do Jogo: \n");
            printf("\n 1. Pedra ganha de tesoura \n 2. Tesoura ganha de papel \n 3. Papel ganha de pedra \n");
            printf(" 4. Se ambos escolherem a mesma opção, o jogo empata \n");
            printf("\nComo jogar: \n");
            printf("1. Inicie uma nova partida no menu principal \n");
            printf("2. Escolha Pedra, Papel, ou Tesoura \n");
            printf("3. O computador fará uma escolha aleatória \n");
            printf("4. O resultado será exibido na tela \n");
            break;
        case 3:
            printf("\nSaindo... \n");
            break;
        default:
            printf("\nOpção inválida \n");
            break;
        }
    } while (menu != 3);

    return 0;
}