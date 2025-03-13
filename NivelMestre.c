#include <stdio.h>



int main() {                            //informações salvas da Carta 1 e 2
   
    char estado = 'A';                   // Aqui eu insiro as variáveis das duas cartas, dou um espaçamento para ficar menos bagunçado e mais legível.
    char estado2 = 'B';                    // Estado sendo representado por uma letra de A a H.
    char codigo[5] = "B01";               // Código vai ser a letra escolhida para o estado + um número de 01 a 04. ex: A01, B02 ..
    char codigo2[5] = "A02";
    char nome[20]  = "Rio de Janeiro";            // Nome das cidades.
    char nome2[20] = "Fortaleza"; 
    float area = 43.750;                  //Área em km² usando float .              
    float area2 = 312.353; 
    float pib = 359.60;                   // PIB (produto interno bruto) usando float.
    float pib2= 73.40;
    int pontosturisticos= 15;             // Quantidades de pontos turísticos das cidades.
    int pontosturisticos2= 15;
    float populacao = 6.72;            //População das cidades (os dados sempre mudam, é apenas uma estimativa da quantidade de pessoas).
    float populacao2= 2.57;   
    float densidade = 0;
    float densidade2 = 0;
    float pibpercapita = 0;
    float pibpercapita2 = 0;

    float superpoder = 0;
    float superpoder2 = 0;

    densidade = populacao / area;           // divisão da população + area
    pibpercapita = populacao / pib;           // divisão da população + pib
    densidade2 = populacao2 / area2;        // divisão da população + area
    pibpercapita2  = populacao2 / pib2;       // divisão da população + pib
    
    

    printf("Cartas Super Trunfo\n");                       //Print F com todas as informações das cartas
    
    // COMEÇO DA PRIMEIRA CARTA
    printf("Carta 1\n");                             
    printf("Estado: %c\n", estado);
    
    printf("Nome da Cidade: %s\n", nome);                  // Variáveis com seus demais especificadores !
   
    printf("Código: %s\n", codigo);
     
    printf("Área em KM²: %.2fKM²\n", area);

    printf("PIB: %.3f bilhões\n", pib);

    printf("População: %u\n", populacao);

    printf ("Pontos Turísticos: %d\n", pontosturisticos);

    printf("Densidade Populacional: %.f km²\n", densidade);

    printf("PIB per Capita: %.f mil\n", pibpercapita);

    printf("Super Poder: %.f \n", populacao + area + pib + pontosturisticos + densidade + pibpercapita);

    printf("\n");

    // COMEÇO DA SEGUNDA CARTA 2
     
    printf("Carta 2\n"); 

    printf("Estado: %c\n", estado2);
    
    printf("Nome da Cidade: %s\n", nome2);
   
    printf("Código: %s\n", codigo2);
     
    printf("Área em KM²: %.2fKM²\n", area2);

    printf("PIB: %.3f bilhões\n", pib2);

    printf("População: %u\n", populacao2);

    printf ("Pontos Turísticos: %d\n", pontosturisticos2);

    printf("Densidade Populacional: %.f km²\n", densidade2);

    printf("PIB per Capita: %.f mil\n", pibpercapita2);

    printf("Super Poder: %.f\n", populacao2 + area2 + pib2 + pontosturisticos2 + 
                                    densidade2 + pibpercapita2); //SUPER PODER

    printf("\n"); // COMPARAÇÃO DE CARTAS

    printf("Comparação de Cartas:\n");  

    printf("\n");

    printf("Resultado 1, quem vence carta 01 - Resultado 0, quem vence carta 02\n");  //RESULTADO DAS COMPARAÇÃO DAS CARTAS 01 E 02

    printf("\n");
    printf("População: %d\n", populacao > populacao2);
    printf("Area: %d\n", area > area2);
    printf("PIB: %d\n", pib > pib2);
    printf("Ponto Turisticos: %d\n", pontosturisticos > pontosturisticos2);
    printf("Densidade Populacional: %d\n", densidade > densidade2);
    printf("PIB per Capita: %d\n", pibpercapita < pibpercapita2);
    printf("Super Poder: %d\n", superpoder > superpoder2);

    return 0;

}  