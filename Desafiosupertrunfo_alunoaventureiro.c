#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    printf("Desafio Super Trunfo - Países - Cadastro das Cartas\n");
    float populacao = 320.6;
    float area = 123.5;
    float PIB = 359.6;
    int turísticos = 58;
    char cidade[20] = "Rio de janeiro";
    char codigo[10] = "A09";
    int escolhajogador;
    int cartatrunfo;
    srand(time(0)); 


    cartatrunfo = rand() %4;

    printf("### Cartas de Super Trunfo ###\n");
    printf("1. Selecione a população\n");
    printf("2. Selecione a area\n");
    printf("3. Selecione o PIB\n");
    printf("4. Selecione o ponto Turísticos\n");
    printf("Escolha a categoria: \n");
    scanf("%d", &escolhajogador);

    switch (escolhajogador)
    {
    case 1:
        printf("Jogador: população -  ");
        scanf("%f", &populacao);
        break;
    case 2:
        printf("Jogador: area - ");
        scanf("%f", &area);
        break; 
    case 3:
        printf("Jogador: PIB - ");
        scanf("%f", &PIB);
        break;
    case 4:
        printf("Jogador: Turísticos - ");
        scanf("%d", &turísticos);
        break;        
    
    default:
        printf("Opção invalida!");
        break;
    }

    switch (cartatrunfo)
    {
    case 1:
        printf("Carta: população - 320.600 ");
        break;
    case 2:
        printf("Carta: area - 123.520 ");
        break; 
    case 3:
        printf("Carta: PIB - 359.64 ");
        break;
    case 4:
        printf("Carta: Turísticos - 58 ");
        break;        

    }
    if (escolhajogador >= cartatrunfo)
        {
            printf("Jogo Empatou!\n");
            
        } else if ((escolhajogador = 1) && (cartatrunfo = 1) ||
                    (escolhajogador = 2) && (cartatrunfo = 2) ||
                     (escolhajogador = 3) && (cartatrunfo = 3) ||
                     (escolhajogador = 4) && (cartatrunfo = 4)) 
        {
            printf("### Parabéns, Você Ganhou!\n");
        } else {
            printf("### Você Perdeu! ###\n");
        }




    
    return 0;



}