#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*
1) Escreva um algoritmo para simular o Jogo Pedra-Papel-Tesoura.
Nesse jogo, o usuário jogará contra o computador.
O computador deve gerar um número aleatório de 1 a 3.
Onde:
1 representa Pedra, 2 representa Papel e 3 representa Tesoura.
O usuário digitará um número de 1 a 3 pelo teclado.
Após a geração do número aleatório e a digitação do usuário pelo teclado,
o seu algoritmo deve informar o que cada jogador jogou e determinar quem venceu ou se houve empate.
A saída do seu algoritmo deve ter o mesmo formato dos Exemplos de saída abaixo.
*/

int main()
{
    int numeroAtaque, deNovo=5;
    printf("Digite 5 Para iniciar: ");
    scanf("%d", &deNovo);

    while(deNovo==5)
    {
    printf("\nOpcoes de ataque: 1) Pedra  2) Papel  3) Tesoura. \n\n");
    printf("Digite sua Opcao de Ataque contra Skynet: ");
    scanf("%d", &numeroAtaque);

    srand(time(NULL));
    int numeroDefesa = rand()%3+1;

    printf("\nVoce escolheu: %d \nSkynet escolheu: %d.\n\n", numeroAtaque, numeroDefesa);

        switch(numeroAtaque)
        {
            case 1:
            switch(numeroDefesa)
            {
                case 3:
                    printf("SPLISH ,VITORIA, A Resistencia esta em boas maos. ((Pedra VS Tesoura)).\n\n");
                    break;
                case 2:
                    printf("SPLASH ,DERROTADO, Voce nao eh um T-800 nem Sarah ou John Connor. ((Pedra VS Papel)).\n\n");
                    break;
                case 1:
                    printf("TCHUN... TCHAN... TCHIN... EMPATE, Continue a batalhando. ((Pedra VS Pedra)).\n\n");
                    break;
            }
        }

        switch(numeroAtaque)
        {
            case 2:
            switch(numeroDefesa)
            {
                case 1:
                    printf("SPLISH ,VITORIA, A Resistencia esta em boas maos. ((Papel VS Pedra)).\n\n");
                    break;
                case 3:
                    printf("SPLASH ,DERROTADO, Voce nao eh um T-800 nem Sarah ou John Connor. ((Papel VS Tesoura)).\n\n");
                    break;
                case 2:
                    printf("TCHUN... TCHAN... TCHIN... EMPATE, Continue a batalhando. ((Papel VS Papel)).\n\n");
                    break;
            }
        }

        switch(numeroAtaque)
        {
            case 3:
            switch(numeroDefesa)
            {
                case 2:
                    printf("SPLISH ,VITORIA, A Resistencia esta em boas maos. ((Tesoura VS Papel)).\n\n");
                    break;
                case 1:
                    printf("SPLASH ,DERROTADO, Voce nao eh um T-800 nem Sarah ou John Connor. ((Tesoura VS Pedra)).\n\n");
                    break;
                case 3:
                    printf("TCHUN... TCHAN... TCHIN... EMPATE, Continue a batalhando. ((Tesoura VS Tesoura)).\n\n");
                    break;
            }
        }

    printf("Digite 5 Para Continuar Batalhando e 0 Para Sair: ");
    scanf("%d", &deNovo);

    }
    return 0;
}
