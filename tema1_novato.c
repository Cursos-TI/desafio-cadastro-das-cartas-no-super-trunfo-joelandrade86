#include <stdio.h>



int main() {                            //informações salvas da Carta 1 e 2
   
    //carta 1
    char estado,codigo[5],nome[20];
    float area,pib;
    int populacao,pontosturisticos;
                  
    //carta 2                                                          
    char estado2,codigo2[5],nome2[20];                         
    float area2,pib2; 
    int populacao2,pontosturisticos2;          
    
    
    
    printf("Cartas Super Trunfo\n");

    printf("\n");
    
    printf("Carta 1\n");
    printf("Estado:");
    scanf("%c",&estado);

    printf("Código:");
    scanf("%s",&codigo);

    printf("Nome da Cidade:");
    scanf("%s",nome);

    printf("População:");
    scanf("%d",&populacao);

    printf("Área em KM²:");
    scanf("%f",&area);

    printf("PIB:");
    scanf("%f",&pib);

    printf ("Pontos Turísticos:");
    scanf("%d",&pontosturisticos);
    
    printf("\n");
    printf("Carta 2\n");
    printf("Estado:");
    scanf(" %c",&estado2);

    printf("Código:");
    scanf(" %s",&codigo2);

    printf("Nome da Cidade:");
    scanf("%s",nome2);

    printf("População:");
    scanf("%d",&populacao2);

    printf("Área em KM²:");
    scanf("%f",&area2);

    printf("PIB:");
    scanf("%f",&pib2);
    
    printf ("Pontos Turísticos:");
    scanf("%d",&pontosturisticos2);
    
    printf("\n");
    printf("CARTA 1\n");
    printf("Estado: %c\n",estado);
    printf("Codigo da Carta: %s\n",codigo);
    printf("Nome da Cidade: %s\n",nome);
    printf("População: %d\n",populacao);
    printf("Área: %f km²\n",area);
    printf("PIB: R$ %f Bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d pontos\n",pontosturisticos);
    
    printf("\n");
    printf("CARTA 2\n");
    printf("Estado: %c\n",estado2);
    printf("Codigo da Carta: %s\n",codigo2);
    printf("Nome da Cidade: %s\n",nome2);
    printf("População: %d\n",populacao2);
    printf("Área: %f km²\n",area2);
    printf("PIB: R$ %f Bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d pontos\n",pontosturisticos2);


    return 0;

}  