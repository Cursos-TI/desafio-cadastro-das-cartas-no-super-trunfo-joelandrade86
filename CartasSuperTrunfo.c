#include <stdio.h>



int main() {                            // Carta 1 e 2
   printf("Novo commit\n");
    //carta 1
    char estado2 = 'B';                   
    char estado = 'A';                    
                                          
    char codigo2[5] = "B02";               
    char codigo[5] = "A01";
    
    char nome2[20]  = "Fortaleza";            
    char nome[20] = "Rio de Janeiro"; 
    
    float area2 = 312.4;                                
    float area = 43.750; 

    float pib = 73;                   
    float pib2= 394;
                                       
    int pontosturisticos= 15;             
    int pontosturisticos2= 20;
    
    int populacao = 6200000;            
    int populacao2= 2400000;   

    printf("Cartas Super Trunfo\n");                       
    printf("Carta 1\n");                             
    printf("Estado: %c\n", estado);
    
    printf("Nome da Cidade: %s\n", nome);                  
   
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