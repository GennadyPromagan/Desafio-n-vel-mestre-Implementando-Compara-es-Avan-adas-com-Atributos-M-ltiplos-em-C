#include <stdio.h>

#include <stdio.h>

int main() {
    

    char estado1[3];
    char codigo1[4];
    char nomeCidade1[50];
    unsigned int populacao1;
    float area1;
    float pib1;
    int resultado1, resultado2;
    int pontosTuristicos1;
    int opcao, opcao2;
    float percapita;
    float densidade;
    float inversodensicade;
    float SuperPoder;


    printf("\n*** Carta 1 ***\n");

    printf("Digite o estado [UF]\n");
    scanf("%2s", estado1);

    printf("Digite o codigo da carta:\n");
    scanf("%3s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%49s", nomeCidade1);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao1);

    printf("Digite a Area(em km)\n");
    scanf("%f", &area1);

    printf("Digite o pib:\n");
    scanf("%f", &pib1);

    printf("Digite numero de pontos turisticos:\n");
    scanf("%d", &pontosTuristicos1);



    percapita = pib1 / (float)populacao1;
    densidade = populacao1 / (float)area1;
    inversodensicade = 1.0 / densidade;

    SuperPoder = (populacao1 + area1 + pib1 + pontosTuristicos1 + 
    percapita + inversodensicade);

//exibir dados

    printf("\n=== Dados da Carta 1 ===\n");
    

    printf("Estado: %s\n", estado1);
    printf("Codigo: %3s\n", codigo1);
    printf("Nome da cidade: %49s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area em km: %.3f\n", area1);
    printf("PIB: %.3f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("O pib per capita e: %f\n", percapita);
    printf("A densidade populacional e de: %.2f\n", densidade);
    printf("Valor do Super poder e : %.0f\n", SuperPoder);


//dados da carta 2
   
    char estado2[3];
    char codigo2[4];
    char nomeCidade2[50];
    unsigned int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float percapita2;
    float densidade2;
    float inversodensidade2;
    float superpoder2;


    printf("\n*** Carta 2 ***\n");

    printf("Digite o estado [UF]\n");
    scanf("%2s", estado2);

    printf("Digite o codigo da carta:\n");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%49s", nomeCidade2);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao2);

    printf("Digite a Area(em km)\n");
    scanf("%f", &area2);

    printf("Digite o pib:\n");
    scanf("%f", &pib2);

    printf("Digite numero de pontos turisticos:\n");
    scanf("%d", &pontosTuristicos2);

    percapita2 = pib2 / (float)populacao2;
    densidade2 = populacao2 / area2;
    inversodensidade2 = 1.0 / densidade2;

    superpoder2 = (populacao2 + area2 + pib2 + pontosTuristicos2 + 
    percapita2 + inversodensidade2);

//exibir dados 2

    printf("=== Dados da Carta 2 ===\n");
    
 
    printf("Estado: %s\n", estado2);
    printf("Codigo: %3s\n", codigo2);
    printf("Nome da cidade: %49s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area em km: %.3f\n", area2);
    printf("PIB: %.3f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("O pib per capita e: %f\n", percapita2);
    printf("A densidade populacional e de: %.2f\n", densidade2);
    printf("O valor do Super Poder e: %.0f\n", superpoder2);

    printf("\n ### BATALHA DE CARTAS ###\n");
    
// opcao das cartas

    printf("Escolha DUAS categorias de comparacao \n");
    printf("1. Comparar Populacao\n");
    printf("2. Comparar Area\n");
    printf("3. Comparar Pib\n");
    printf("4. Comparar Pontos turisticos\n");
    printf("5. Comparar Pib per capita\n");
    printf("6. Comparar Menor densidade populacional\n");
    printf("7. Comparar Super Poder\n");

    printf("Primeira Escolha: ");
    scanf("%d", &opcao);


    switch(opcao){
        case 1:
          printf("@@@@ Categoria Populacao @@@@\n");
            resultado1 = populacao1 > populacao2 ?1 : 0;
        break;

        case 2:
          printf("### Categoria Area ###\n");
            resultado1 = area1 > area2 ? 1 : 0;
            printf("Carta 1: %f / Carta 2: %f\n", area1, area2);

        break;

        case 3:
          printf("@@@@ Categoria Pib @@@@\n");
            resultado1 = pib1 > pib2 ? 1 : 0;
            printf("Carta 1: %.3f / Carta 2: %.3f\n", pib1, pib2);

        break;

        case 4:
          printf("### Categoria Pontos Turisticos ###\n");
           resultado1 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
           printf("Carta 1: %d / Carta 2: %d\n", pontosTuristicos1, pontosTuristicos2);

        break;

        case 5:
          printf("@@@@ Categoria Pib per capita @@@@\n");
            resultado1 = percapita > percapita2 ? 1 : 0;
            printf("Carta 1: %.3f / Carta 2: %.3f\n",percapita, percapita2);

        break;

        case 6:
          printf("### Categoria Menor Densicade populacional ###\n");
            resultado1 = densidade < densidade2 ? 1 : 0;
            printf("Carta 1: %.2f / Carta 2: %.2f\n", densidade, densidade2);

        break;
        
        case 7: 
          printf("@@@@ Categoria Super Poder @@@@\n");
            resultado1 = SuperPoder > superpoder2 ? 1 : 0;
            printf("Carta 1: %.2f / Carta 2: %.2f\n", SuperPoder, superpoder2);
            
        break;
    }


    printf("Escolha DUAS categorias de comparacao \n");
    printf("1. Comparar Populacao\n");
    printf("2. Comparar Area\n");
    printf("3. Comparar Pib\n");
    printf("4. Comparar Pontos turisticos\n");
    printf("5. Comparar Pib per capita\n");
    printf("6. Comparar Menor densidade populacional\n");
    printf("7. Comparar Super Poder\n");

    printf("Segunda Escolha: ");
    scanf("%d", &opcao2);

    if(opcao == opcao2){
        printf("Voce escolheu a msm categoria\n");
    }else{
        switch(opcao2){
            case 1:
             printf("@@@@ Categoria Populacao @@@@\n");
             resultado2 = populacao1 > populacao2 ? 1 : 0;
             printf("Carta 1: %d / Carta 2: %d\n", populacao1, populacao2);

            break;

            case 2:
             printf("### Categoria Area ###\n");
             resultado2 = area1 > area2 ? 1 : 0;
             printf("Carta 1: %f / Carta 2: %f\n", area1, area2);

            break;

            case 3:
             printf("@@@@ Categoria Pib @@@@\n");
             resultado2 = pib1 > pib2 ? 1 : 0;
             printf("Carta 1: %.3f / Carta 2: %.3f\n", pib1, pib2);

             break;

            case 4:
             printf("### Categoria Pontos Turisticos ###\n");
             resultado2 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
             printf("Carta 1: %d / Carta 2: %d\n", pontosTuristicos1, pontosTuristicos2);

            break;

            case 5:
             printf("@@@@ Categoria Pib per capita @@@@\n");
             resultado2 = percapita > percapita2 ? 1 : 0;
             printf("Carta 1: %.3f / Carta 2: %.3f\n",percapita, percapita2);

             break;

            case 6:
             printf("### Categoria Menor Densicade populacional ###\n");
             resultado2 = densidade < densidade2 ? 1 : 0;
             printf("Carta 1: %.2f / Carta 2: %.2f\n", densidade, densidade2);

            break;
        
            case 7: 
             printf("@@@@ Categoria Super Poder @@@@\n");
             resultado2 = SuperPoder > superpoder2 ? 1 : 0;
             printf("Carta 1: %.2f / Carta 2: %.2f\n", SuperPoder, superpoder2);

            break;
        }
    }


    if( resultado1 && resultado2){
        printf("A Carta 1 ganhou!!\n");
        printf("Carta 1: %d / Carta 2: %d\n", populacao1, populacao2);
        printf("Carta 1: %f / Carta 2: %f\n", area1, area2);

    }else if (resultado1 != resultado2){
        printf("Empatou!!\n");
    
    }else{
        printf("A Carta 1 perdeu!!\n");
       
    }