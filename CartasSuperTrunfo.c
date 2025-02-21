#include <stdio.h>



int main() {                            //informações salvas da Carta 1 e 2
   printf("Novo commit\n");
    //carta 1
    char estado2 = 'B';                   // Aqui eu insiro as variáveis das duas cartas, dou um espaçamento para ficar menos bagunçado e mais legível.
    char estado = 'A';                    // Estado sendo representado por uma letra de A a H.
                                          
    char codigo2[5] = "B02";               // Código vai ser a letra escolhida para o estado + um número de 01 a 04. ex: A01, B02 ..
    char codigo[5] = "A01";
    
    char nome2[20]  = "Fortaleza";            // Nome das cidades.
    char nome[20] = "Rio de Janeiro"; 
    
    float area2 = 312.4;                  //Área em km² usando float .              
    float area = 43.750; 

    float pib = 73;                   // PIB (produto interno bruto) usando float.
    float pib2= 394;
                                       
    int pontosturisticos= 15;             // Quantidades de pontos turísticos das cidades.
    int pontosturisticos2= 20;
    
    int populacao = 6200000;            //População das cidades (os dados sempre mudam, é apenas uma estimativa da quantidade de pessoas).
    int populacao2= 2400000;   

    printf("Cartas Super Trunfo\n");                       //Print F com todas as informações das cartas
    printf("Carta 1\n");                             
    printf("Estado: %c\n", estado);
    
    printf("Nome da Cidade: %s\n", nome);                  // Variáveis com seus demais especificadores !
   
    printf("Código: %s\n", codigo);
     
    printf("Área em KM²: %.2fKM²\n", area);

    printf("PIB: %.3f bilhões\n", pib);

    printf("População: %d\n", populacao);

    printf ("Pontos Turísticos: %d\n", pontosturisticos);
     
    printf("\n");
    
    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    
    printf("Nome da Cidade: %s\n", nome2);
   
    printf("Código: %s\n", codigo2);
     
    printf("Área em KM²: %.2fKM²\n", area2);

    printf("PIB: %.3f bilhões\n", pib2);

    printf("População: %d\n", populacao2);

    printf ("Pontos Turísticos: %d\n", pontosturisticos2);

}  