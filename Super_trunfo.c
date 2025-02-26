#include <stdio.h>

int main (){

    char estado, estado2;
    char codigo_carta[05], nome[20], codigo_carta2[05], nome2[20];
    int populacao, turismo, populacao2, turismo2;
    float area, pib, area2, pib2; //tipos e nomes das variáveis.

    printf("Vamos Jogar! Me aprensente dados de duas cidades que representarão cartas no nosso jogo!\n");
    
    printf("Digite uma Letra (De A até H) que representará o primero Estado escolhido: ");
    scanf(" %c", &estado);


    printf("ÓTIMO! Agora escreve a letra mais um número de 1 a 4 para ser o código carta(ex: H01): ");
    scanf("%s", codigo_carta);

    printf("E qual será o nome da cidade?: ");
    scanf("%s", nome);

    printf("Certo, e o número populacional dessa cidade é qual? ");
    scanf("%d", &populacao);

    printf("A área da cidade em KM²: ");
    scanf("%f", &area);

    printf("Digite o PIB dessa cidade: ");
    scanf("%f", &pib);

    printf("Agora só falta digitar o número de pontos turísticos: ");
    scanf("%d", &turismo);

    printf("SUA PRIMEIRA CARTA FOI FEITA! VAMOS DIGITAR A SEGUNDA AGORA!\n");

    //Começando agora o registro de dados da segunda carta.

    printf("Digite outra Letra (De A até H) que representará o segundo Estado escolhido: ");
    scanf(" %c", &estado2);
    

    printf("ÓTIMO! Agora escreve a letra mais um número de 1 a 4 para ser o código carta(ex: H01): ");
    scanf("%s", codigo_carta2);

    printf("E qual será o nome da outra cidade?: ");
    scanf("%s", nome2);

    printf("Certo, e o número populacional dessa cidade é qual? ");
    scanf("%d", &populacao2);

    printf("A área da cidade em KM²: ");
    scanf("%f", &area2);

    printf("Digite o PIB dessa cidade: ");
    scanf("%f", &pib2);

    printf("Agora só falta digitar o número de pontos turísticos: ");
    scanf("%d", &turismo2);

    //Apresentação das Cartas agora.

    printf("   \n"); //coloquei pela melhor organização de apresentação no terminal

    printf("Carta 1\n");
    printf("Estado: %c\n",estado);
    printf("O código é: %s\n", codigo_carta);
    printf("O nome da cidade é: %s\n", nome);
    printf("A população é: %d\n", populacao);
    printf("A área dessa cidade é: %f km²\n", area);
    printf("O pib da cidade é: %f bilhoões de reais\n",pib);
    printf("O número de pontos turísticos é: %d\n", turismo);

    printf("    \n"); //coloquei pela melhor organização de apresentação no terminal

    printf("Carta 2\n");
    printf("Estado: %c\n",estado2);
    printf("O código é: %s\n", codigo_carta2);
    printf("O nome da cidade é: %s\n", nome2);
    printf("A população é: %d\n", populacao2);
    printf("A área dessa cidade é: %f km²\n", area2);
    printf("O pib da cidade é: %f bilhoões de reais\n",pib2);
    printf("O número de pontos turísticos é: %d", turismo2);

    return 0; //retorna verdadeiro 
}
