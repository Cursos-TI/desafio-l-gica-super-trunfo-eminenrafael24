#include <stdio.h>

int main (){
    printf("Desafio Super Trunfo - Países - Cadastro das Cartas\n");
    float populacao = 320.600;
    float area = 123.520;
    float PIB = 359.64;
    int turísticos = 58;
    char cidade[20] = "Rio de janeiro";
    char codigo[10] = "A09";

    printf("Entre com o numero da população:\n");
    scanf("%f", &populacao);
    printf("Entre com a area:\n");
    scanf("%f", &area);
    printf("Entre com o PIB:\n");
    scanf("%f", &PIB);
    printf("Entre com o numero de pontos turísticos:\n");
    scanf("%d", &turísticos);

    if (populacao > 320.600) {
        printf("Sua cidade Tem mais Pessoas que o Rio de Janeito.\n");
    } else{
        printf("Sua cidade Tem menos pessoas que no Rio de Janeito.\n");
    }
    
    if (area > 123.520) {
        printf("Sua cidade Tem mais area do que no Rio de Janeiro.\n");
    }else{
        printf("Sua cidade Tem menos area que no Rio de janeito.\n");
    }

    if (PIB > 359.64 ) {
        printf("Sua cidade Tem mais PIB.\n");
    }else{
        printf("Sua cidade Tem menos PIB.\n");
    }
    
    if (turísticos > 58 ) {
        printf("Sua cidade Tem mais pontos turisticos.\n");
    }else{
        printf("Sua cidade Tem menos pontos turisticos.\n");
    }





    
    return 0;

}