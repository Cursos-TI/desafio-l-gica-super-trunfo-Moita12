#include <stdio.h>

int main(){
    char nome1[50], nome2[50];
    unsigned long população1, população2, tur1, tur2;
    float area1, area2, pib1, pib2, densidade1, densidade2, per1, per2, poder1, poder2;
    char estado1[2], estado2[2];
    char codigo1[5], codigo2[5];
    printf(" \n ·.★·.·´¯`·.·★ 🆂🆄🅿🅴🆁 🆃🆁🆄🅽🅵🅾! ★·.·´¯`·.·★.· \n");


    printf("Digite o nome da 1° cidade: \n");
    scanf("%s", &nome1);

        printf("Digite a população da 1° cidade: \n");
    scanf("%lu", &população1);
    
            printf("Digite a área da 1° cidade em km²: \n");
    scanf("%f", &area1);

            printf("Digite o pib da 1° cidade: \n");
    scanf("%f", &pib1);

            printf("Digite o número de pontos turisticos da 1° cidade: \n");
    scanf("%d", &tur1);
    
            printf("Digite o código da 1° carta: (A letra do estado seguido de um numero de 1 a 4) \n");
    scanf("%s", &codigo1);

            printf("Digite Uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf("%s", &estado1);

    printf("Carta Número 1 registrada com sucesso: \n");

    printf("\nNome da cidade: %s ", nome1 );
    printf("\nNúmero de população: %lu ", população1 );
    printf("\nÁrea em km²: %.2f ", area1 );
    printf("\nPib: %.2f ", pib1 );
    printf("\nNúmero de pontos turisticos: %d ", tur1 );
    printf("\ncódigo da carta: %s ", codigo1 );
    printf("\nLetra do estado: %s \n", estado1 );

    densidade1 = (float)população1 / pib1;
    printf("\nDensidade Populacional: %.2f \n", densidade1 );
    per1 = pib1 / (float)população1;
    printf("\nPib per cápita: %.2f \n", per1 );

    poder1 = (float)população1 + tur1 + area1 + pib1 + per1 + 1 / densidade1;
    printf("\nSuper Poder: %.2f \n", poder1);

        printf("\nDigite o nome da 2° cidade: \n");
    scanf("%s", &nome2);

        printf("Digite a população da 2° cidade: \n");
    scanf("%lu", &população2);
    
            printf("Digite a área da 2° cidade em km²: \n");
    scanf("%f", &area2);

            printf("Digite o pib da 2° cidade: \n");
    scanf("%f", &pib2);

                printf("Digite o número de pontos turisticos da 2° cidade: \n");
    scanf("%d", &tur2);
    
            printf("Digite o código da 2° carta: (A letra do estado seguido de um numero de 1 a 4) \n");
    scanf("%s", &codigo2);

            printf("Digite Uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf("%s", &estado2);

    printf("Carta Número 2 registrada com sucesso: \n");

    printf("\nNome da cidade: %s ", nome2 );
    printf("\nNúmero de população: %lu ", população2 );
    printf("\nÁrea em km²: %.2f ", area2 );
    printf("\nPib: %.2f ", pib2 );
    printf("\nNúmero de pontos turisticos: %d ", tur2 );
    printf("\ncódigo da carta: %s ", codigo2 );
    printf("\nLetra do estado: %s ", estado2 );
    densidade2 = (float)população2 / pib2;
    printf("\nDensidade Populacional: %.2f \n", densidade2 );
    per2 = pib2 / (float)população2;
    printf("\nPib per cápita: %.2f \n", per2 );

    poder2 = (float)população2 + tur2 + area2 + pib2 + per2 + 1 / densidade2;
    printf("\nSuper Poder: %.2f \n", poder2);

    printf(" \n ·.★·.·´¯`·.·★ Comparação de Cartas! ★·.·´¯`·.·★.· \n");

    printf("\nPOPULAÇÂO\n");
    printf("\npopulação de %s: %lu ", nome1, população1 );
    printf("\npopulação de %s: %lu ", nome2, população2 );
    if(população1 > população2){
    printf("\n%s é a cidade de maior população! com %d habitantes", nome1, população1 );
    }
    else{
        printf("\n%s é a cidade de maior população! com %d habitantes", nome2, população2 );
    }

    printf("\n\nÁREA\n");
    printf("\nárea de %s: %.2f ", nome1, area1 );
    printf("\npopulação de %s: %.2f ", nome2, area2 );
    if(area1 > area2){
    printf("\n%s é a cidade de maior área! com %.2f kilômetros quadrados", nome1, area1 );
    }
    else{
        printf("\n%s é a cidade de maior área! com %.2f kilômetros", nome2, area2 );
    }

    printf("\n\nPIB\n");
    printf("\nPIB de %s: %.2f ", nome1, pib1 );
    printf("\nPIB de %s: %.2f ", nome2, pib2 );
    if(pib1 > pib2){
    printf("\n%s é a cidade de maior PIB! com %.2f ", nome1, pib1 );
    }
    else{
        printf("\n%s é a cidade de maior PIB! com %.2f ", nome2, pib2 );
    }

    printf("\n\nPONTOS TURÍSTICOS\n");
    printf("\nPontos turísticos de %s: %d ", nome1, tur1 );
    printf("\nPontos turísticos de %s: %d ", nome2, tur2 );
    if(tur1 > tur2){
    printf("\n%s é a cidade com mais Pontos turísticos! com %d pontos", nome1, tur1 );
    }
    else{
        printf("\n%s é a cidade com mais Pontos turísticos! com %d pontos", nome2, tur2 );
    }

    printf("\n\nDENSIDADE POPULACIONAL\n");
    printf("\nDensidade P. de %s: %.2f ", nome1, densidade1 );
    printf("\nDensidade P. de %s: %.2f ", nome2, densidade2 );
    if(densidade1 > densidade2){
    printf("\n%s é a cidade de menor Densidade Populacional! com %.2f", nome1, densidade1 );
    }
    else{
        printf("\n%s é a cidade de menor Densidade Populacional! com %.2f", nome2, densidade2 );
    }


} 