#include <stdio.h>

int main(){

    char estado, estado2;
    char codigo[20], codigo2[20];
    char nome[20], nome2[20];
    unsigned int populacao, populacao2, superpoder, superpoder2;
    float area, area2;
    float pib, pib2;
    int pontoTutisticos, pontoTuristicos2;
    float densidade, densidade2;
    double pibPercapita=0;
    double pibPercapita2=0;
    char carta[20] = "Carta 1";
    char carta2[20] = "Carta 2";

    superpoder = populacao+area+pib+pontoTutisticos+pibPercapita+densidade;
    superpoder2 = populacao2+area2+pib2+pontoTuristicos2+pibPercapita2+densidade2;
    
    printf("***SUPER TRUFO***\n");

    printf("\n");
    printf("%s\n",carta);
    printf("Estato: Uma letra de 'A' a 'H' (representado um dos oito estados).\n");
    scanf(" %c",&estado);

    printf("Código da Carta: A letra do estado seguida de um numero de 01 a 04 (ex:A01,B03).\n");
    scanf(" %s",&codigo);

    printf("Nome da Cidade: O nome da cidade.\n");
    scanf(" %s",&nome);

    printf("População: O número de habitantes da cidade.\n");
    scanf(" %i",&populacao);

    printf("Área (em km²): A área da cidade em quilômetros quadrado.\n");
    scanf(" %f",&area);

    printf("PIB: O produto Interno Bruto da cidade.\n");
    scanf(" %f",&pib);

    printf("Número de Ponto Turísticos: A quantidade de pontos turístico na cidade.\n");
    scanf(" %d",&pontoTutisticos);

    printf("\n");
    printf("%s\n",carta2);
    printf("Estato: Uma letra de 'A' a 'H' (representado um dos oito estados).\n");
    scanf(" %c",&estado2);

    printf("Código da Carta: A letra do estado seguida de um numero de 01 a 04 (ex:A01,B03).\n");
    scanf("%s",&codigo2);

    printf("Nome da Cidade: O nome da cidade.\n");
    scanf("%s",&nome2);

    printf("População: O número de habitantes da cidade.\n");
    scanf("%d",&populacao2);

    printf("Área (em km²): A área da cidade em quilômetros quadrado.\n");
    scanf("%f",&area2);

    printf("PIB: O produto Interno Bruto da cidade.\n");
    scanf("%f",&pib2);

    printf("Número de Ponto Turísticos: A quantidade de pontos turístico na cidade.\n");
    scanf("%d",&pontoTuristicos2);

    printf("\n");
    printf("Estado: %c\n",estado);
    printf("Código da Carta: %s\n",codigo);
    printf("Nome da Cidade: %s\n",nome);
    printf("População: %d\n",populacao);
    printf("Área (em km²): %.2f km²\n",area);
    printf("PIB: %.2f Bilhões\n",pib);
    printf("Número de Pontos Turísticos: %d\n",pontoTutisticos);
    printf("Densidade Populacional: %.2f hab/km²\n",populacao/area);
    printf("PIB per Capita: %.2f reais\n",pib/populacao);

    printf("\n");
    printf("Estado: %c\n",estado2);
    printf("Código da Carta: %s\n",codigo2);
    printf("Nome da Cidade: %s\n",nome2);
    printf("População: %d\n",populacao2);
    printf("Área (em km²): %.2f km²\n",area2);
    printf("PIB: %.2f Bilhões de reais\n",pib2);
    printf("Número de Pontos Turísticos: %d\n",pontoTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n",populacao2/area2);
    printf("PIB per Capita: %.2f reais\n",pib2/populacao2);

    printf("\n");
    printf("Comparação de Cartas:\n");  
    printf("\n");
    printf("Resultado 1, quem vence carta 01 - Resultado 0, quem vence carta 02\n");  
    printf("\n");
    printf("População: %d\n", populacao > populacao2);
    printf("Area: %d\n", area > area2);
    printf("PIB: %d\n", pib > pib2);
    printf("Ponto Turisticos: %d\n", pontoTutisticos > pontoTuristicos2);
    printf("Densidade Populacional: %d\n", densidade > densidade2);
    printf("PIB per Capita: %d\n", pibPercapita < pibPercapita2);
    printf("Super Poder: %d\n", superpoder > superpoder2);

    printf("\n");
    printf("Atributo: População:\n");
    printf("%s - %s: %d\n",carta,nome,populacao);
    printf("%s - %s: %d\n",carta2,nome2,populacao2);
    if(populacao > populacao2){
        printf("Reultado: %s venceu!\n",carta);
    }else{
        printf("Resultado: %s venceu!\n",carta2);
    }
    printf("\n");

    printf("Atributo: Área:\n");
    printf("%s - %s: %.2f\n",carta,nome,area);
    printf("%s - %s: %.2f\n",carta2,nome2,area2);
    if(area > area2){
        printf("Reultado: %s venceu!\n",carta);
    }else{
        printf("Resultado: %s venceu!\n",carta2);
    }
    printf("\n");

    printf("Atributo Pib:\n");
    printf("%s - %s: %.2f\n",carta,nome,pib);
    printf("%s - %s: %.2f\n",carta2,nome2,pib2);
    if(pib > pib2){
        printf("Reultado: %s venceu!\n",carta);
    }else{
        printf("Resultado: %s venceu!\n",carta2);
    }
    printf("\n");

    printf("Atributo Pontos Turísticos:\n");
    printf("%s - %s: %d\n",carta,nome,pontoTutisticos);
    printf("%s - %s: %d\n",carta2,nome2,pontoTuristicos2);
    if(pontoTutisticos > pontoTuristicos2){
        printf("Reultado: %s venceu!\n",carta);
    }else{
        printf("Resultado: %s venceu!\n",carta2);
    }
    printf("\n");

    printf("Atributo Desindade:\n");
    printf("%s - %s: %.2f\n",carta,nome,populacao/area);
    printf("%s - %s: %.2f\n",carta2,nome2,populacao2/area2);
    if(densidade > densidade2){
        printf("Reultado: %s venceu!\n",carta);
    }else{
        printf("Resultado: %s venceu!\n",carta2);
    }
    printf("\n");

    printf("Atributo PIB per Capita:\n");
    printf("%s - %s: %.2f\n",carta,nome,pib/populacao);
    printf("%s - %s: %.2f\n",carta2,nome2,pib2/populacao2);
    if(pibPercapita < pibPercapita2){
        printf("Reultado: %s venceu!\n",carta);
    }else{
        printf("Resultado: %s venceu!\n",carta2);
    }
        

    return 0;

}  