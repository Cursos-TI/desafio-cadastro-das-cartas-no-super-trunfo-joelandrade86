#include <stdio.h>



int main() {                            //informações salvas da Carta 1 e 2
   
    //carta 1
    
    char estado = 'A';                      // Aqui eu insiro as variáveis das duas cartas, dou um espaçamento para ficar menos bagunçado e mais legível.
    char estado2 = 'B';                    // Estado sendo representado por uma letra de A a H.
                                          
    char codigo[5] = "A01";
    char codigo2[5] = "B02";               // Código vai ser a letra escolhida para o estado + um número de 01 a 04. ex: A01, B02 ..
    
    char nome[20] = "Rio de Janeiro"; 
    char nome2[20]  = "Fortaleza";            // Nome das cidades.
    
    float area = 312.400;                  //Área em km² usando float .              
    float area2 = 43.750; 

    float pib = 73;                   // PIB (produto interno bruto) usando float.
    float pib2= 394;

    //float divis, divis2, divis3, divis4;    // variavel da divisão
                                       
    int pontosturisticos= 15;             // Quantidades de pontos turísticos das cidades.
    int pontosturisticos2= 20;
    
    unsigned int populacao = 6200000;            //População das cidades (os dados sempre mudam, é apenas uma estimativa da quantidade de pessoas).
    unsigned int populacao2= 2400000;   

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

    printf("Super Poder: %.f\n", populacao2 + area2 + pib2 + pontosturisticos2 + densidade2 + pibpercapita2);

printf("\n");
    printf("Atributo População:\n");
    if(populacao > populacao2){
        printf("Rio de janeiro venceu\n");
    }else{
        printf("Fortaleza venceu\n");
    }
    printf("\n");

    printf("Atributo Área:\n");
        if(area > area2){
        printf("Rio de janeiro venceu\n");
    }else{
        printf("Fortaleza venceu\n");
    }
    printf("\n");

    printf("Atributo Pib:\n");
        if(pib > pib2){
        printf("Rio de janeiro venceu\n");
    }else{
        printf("Fortaleza venceu\n");
    }
    printf("\n");

    printf("Atributo Pontos Turísticos:\n");
        if(pontosturisticos > pontosturisticos2){
        printf("Rio de janeiro venceu\n");
    }else{
        printf("Fortaleza venceu\n");
    }
    printf("\n");

    printf("Atributo Desindade:\n");
        if(densidade > densidade2){
        printf("Rio de janeiro venceu\n");
    }else{
        printf("Fortaleza venceu\n");
    }

    printf("\n");

    printf("Atributo PIB per Capita:\n");
        if(pibpercapita > pibpercapita2){
        printf("Rio de janeiro venceu\n");
    }else{
        printf("Fortaleza venceu\n");
    }

    printf("\n");

    printf("Atributo Super poder:\n");
        if(superpoder > superpoder2){
        printf("Rio de janeiro venceu\n");
    }else{
        printf("Fortaleza venceu\n");
    }


    return 0;
}