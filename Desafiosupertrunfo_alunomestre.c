#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    printf("Desafio Super Trunfo - Países - Cadastro das Cartas\n");
    int populacao = 320;
    int area = 123;
    int PIB = 359;
    int turísticos = 58;
    char cidade[20] = "Rio de janeiro";
    char codigo[10] = "A09";
    int escolhajogador, resultado;
    char comparacao;

    printf("### Cartas de Super Trunfo ###\n");
    printf("1. Selecione a população\n");
    printf("2. Selecione a area\n");
    printf("3. Selecione o PIB\n");
    printf("4. Selecione o ponto Turísticos\n");

    printf("Escolha a comparação: \n");
    scanf("%c", &comparacao);


    switch (comparacao)
    {
    case 'P':
        printf("Você escolheu a categoria População\n");
        printf("Jogador: população -  \n");
        scanf("%f", &populacao);
        resultado = escolhajogador >= resultado ? 1 : 0;
        break;
    case 'a':
    case 'A':
        printf("Você escolheu a categoria Area\n");
        printf("Jogador: area - \n");
        scanf("%f", &area);
        resultado = escolhajogador >= resultado ? 1 : 0;
        break; 
    case 'b':
    case 'B':
        printf("Você escolheu a categoria PIB\n");
        printf("Jogador: PIB - \n");
        scanf("%f", &PIB);
        resultado = escolhajogador >= resultado ? 1 : 0;
        break;
    case 't':
    case 'T':
        printf("Você escolheu a categoria Turísticos\n");
        printf("Jogador: Turísticos - \n");
        scanf("%d", &turísticos);
        resultado = escolhajogador >= resultado ? 1 : 0;
        break;        
    
    default:
        printf("Opção invalida!");
        break;
    }

    switch (resultado)
    {
    case 'P':
        resultado = escolhajogador >= resultado ? 1 : 0;
        printf("Carta: população - 320 \n");
        break;
    case 'a':
    case 'A':
        resultado = escolhajogador >= resultado ? 1 : 0;
        printf("Carta: area - 123 \n");
        break; 
    case 'b':
    case 'B':
        resultado = escolhajogador >= resultado ? 1 : 0;
        printf("Carta: PIB - 359 \n");
        break;
    case 't':
    case 'T':
        resultado = escolhajogador >= resultado ? 1 : 0;
        printf("Carta: Turísticos - 58 \n");
        break;     
    }   
    
    printf("O número da cartatrunfo é: %d e o da escolhajogador é: %d\n", resultado, escolhajogador);
    
      if (resultado == 1)
      {
        printf("Parabéns, você venceu!\n");
      } else
      {
        printf("Infelizmente, Você perdeu!\n");
      }
      

      

return 0;

}