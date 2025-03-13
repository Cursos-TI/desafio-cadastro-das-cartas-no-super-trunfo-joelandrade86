#include <stdio.h>
#include <stdlib.h>


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
                                            //float divis, divis2, divis3, divis4;    // variavel da divisão

    densidade = populacao / area;           // divisão da população + area
    pibpercapita = populacao / pib;           // divisão da população + pib
    densidade2 = populacao2 / area2;        // divisão da população + area
    pibpercapita2  = populacao2 / pib2;        // divisão da população + pib

    int opcao;
    int escolhaUmnumero;
    
     printf("*** Jogo de Comparação ***\n");
     printf("...............................\n");
     printf("Menu Principal\n");
     printf("\n");
     printf("1. Iniciar Jogo\n");
     printf("2. Ver Regras\n");
     printf("3. Sair\n");
     printf(".................................\n");
     printf("Escolha uma opção:\n");
    scanf("%d", &opcao);

    printf(".................................\n");

    switch (opcao) {
        case 1:
         printf("> Escolha um atributos <\n");
         printf("...........................\n");
         printf("1. População\n");
         printf("2. Área\n");
         printf("3. PIB\n");
         printf("4. Numero de pontos turístico\n");
         printf("5. Densidade demográfica\n");
         printf("..............................\n");
         printf("> Digite o Atributo de escolha <\n");
         scanf("%d", &escolhaUmnumero);
         
         printf("..............................\n");

         switch (escolhaUmnumero) {
            case 1:
             printf("População\n");

             if(populacao == populacao2){
                printf("*** EMPATE ***\n");
             }else if (populacao > populacao2){
                printf("%s, ganhou com %.2f milhões\n",nome, populacao);
             }else{
                printf("%s, ganhou com %.2f milhões\n",nome2, populacao2);
             }
             break;
            
                                
            case 2:
             printf("Área\n");

             if(area == area2){
                printf("*** EMPATE ***\n");
             }else if (area > area2){
                printf("%s, ganhou com %.2f Bilhoes\n", nome, area);
             }else{
                printf("%s, ganhou com %.2f pontos\n", nome2, area2);
             }
             break;
             
    
            case 3:
             printf("PIB\n");

             if(pib == pib2){
                printf("*** EMPATE ***\n");
             }else if (pib > pib2){
                printf("%s, ganhou com %.2f Bilhões\n",nome, pib);
             }else{
                printf("%s, ganhou com %.2f Bilhões\n",nome2, pib2);
             }
             break;
             
    
            case 4:
             printf("Numero de pontos turístico\n");
             
             if(pontosturisticos == pontosturisticos2){
                printf("*** EMPATE ***\n");
             }else if (pontosturisticos > pontosturisticos2){
                printf("%s, ganhou com %d pontos\n",nome, pontosturisticos);
             }else{
                printf("%s, ganhou com %d pontos\n",nome2, pontosturisticos2);
             }
             break;
    
            case 5:
             printf("Densidade demográfica\n");

             if(densidade == densidade2){
                printf("*** EMPATE ***\n");
             }else if (densidade < densidade2){
                printf("%s, ganhou com %.2f Hab-km²\n",nome, densidade);
             }else{
                printf("%s, ganhou com %.2f Hab-km²\n",nome2, densidade2);
             }
             break;
    
             default:
             printf("Opção inválida. Tente novamente.\n");
             
            }       
            break;
         printf("*****************************\n");
        case 2:
         printf("Regras do Jogo:\n");
         printf("\n");
         printf("1. Escolha um atributo.\n");
         printf("2. Escolha entre 1 a 5.\n");
         printf("3. Ganha tem tiver mais pontos no atributo selecionado.\n");
         break;
        case 3:
         printf("Saindo...\n");
         break;

         default:
         printf("Opção inválida. Tente novamente.\n");

    }
    return 0;

}