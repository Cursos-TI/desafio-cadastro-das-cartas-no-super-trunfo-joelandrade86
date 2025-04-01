#include <stdio.h>
#include <stdlib.h>



int main() {                            //informações salvas da Carta 1 e 2
   
    //carta 1
    char estado2 = 'B';                   // Aqui eu insiro as variáveis das duas cartas, dou um espaçamento para ficar menos bagunçado e mais legível.
    char estado = 'A';                    // Estado sendo representado por uma letra de A a H.                                    
    char codigo2[5] = "B02";               // Código vai ser a letra escolhida para o estado + um número de 01 a 04. ex: A01, B02 ..
    char codigo[5] = "A01";
    char nome2[20]  = "Fortaleza";            // Nome das cidades.
    char nome[20] = "Rio de Janeiro"; 
    float area = 312.400;                  //Área em km² usando float .              
    float area2 = 43.750;
    float pib = 73;                   // PIB (produto interno bruto) usando float.
    float pib2= 394;

    //float divis, divis2, divis3, divis4;    // variavel da divisão
                                       
    int pontosturisticos= 15;             // Quantidades de pontos turísticos das cidades.
    int pontosturisticos2= 20;
    
    int populacao;            //População das cidades (os dados sempre mudam, é apenas uma estimativa da quantidade de pessoas).
    int populacao2;   
    populacao = 6200;
    populacao2 = 2400;
    float desindade = 0;
    float desindade2 = 0;

    float pibpercapita = 0;
    float pibpercapita2 = 0;


    desindade = populacao / area;           // divisão da população + area
    pibpercapita = populacao / pib;           // divisão da população + pib
    desindade2 = populacao2 / area2;        // divisão da população + area
    pibpercapita2  = populacao2 / pib2;        // divisão da população + pib

    int opcao, opcao2, opcao3, opcao4, resultado, resultado2;
    float primeiroAtributo, segundoAtributo, primeiroAtributo2, segundoAtributo2;
    
    //carta 01 - escolha do primeiro atributos
         printf("CARTA 01:\n");
         printf("1. População: %d\n",populacao);
         printf("2. Área: %.2f\n",area);
         printf("3.PIB: %.2f\n",pib);
         printf("4.Numero de pontos turístico: %.d\n",pontosturisticos);
         printf("5.Densidade demográfica: %.2f\n",desindade);
         printf("\nPrimeiro Atributo:");
         scanf("%d", &opcao);
         printf("Segundo Atributo:");
         scanf("%d", &opcao2);

          // Verificação de atributos iguais 
    if (opcao == opcao2) {
      printf("Você escolheu o mesmo atributo duas vezes. Encerrando o programa.\n");
      return 0;
    }

    switch (opcao) {
        case 1:
          primeiroAtributo = populacao;
         break;

        case 2:
         primeiroAtributo = area;
         break;

        case 3:
          primeiroAtributo = pib;
         break;

        case 4:
         primeiroAtributo = pontosturisticos;
         break;

        case 5:
          primeiroAtributo = desindade;
         break;

        default:
         printf("Opção inválida. Tente novamente.\n");
         break; 
      }       

      switch (opcao2) {
        case 1:
          segundoAtributo = populacao;
          break;
                            
        case 2:
          segundoAtributo = area;
          break;
             
        case 3:
          segundoAtributo = pib2;
          break;
             
        case 4:
          segundoAtributo = pontosturisticos;
          break;
             
        case 5:
          segundoAtributo = desindade;
          break;
             
        default:
          printf("Opção inválida. Tente novamente.\n");
      }
        
          resultado = primeiroAtributo + segundoAtributo;
                //printf("Soma dos atrubotos escolhidos são: %d", resultado);

//carta 02 - escolha do primeiro atributos
         printf("-----------------------------------------\n");
         printf("CARTA 02:\n");
         printf("1. População: %d\n",populacao2);
         printf("2. Área: %.2f\n",area2);
         printf("3.PIB: %.2f\n",pib2);
         printf("4.Numero de pontos turístico: %.d\n",pontosturisticos2);
         printf("5.Densidade demográfica: %.2f\n",desindade2);
         printf("\nPrimeiro Atributo:");
         scanf("%d", &opcao3);
         printf("Segundo Atributo:");
         scanf("%d", &opcao4);

         // Verificação de atributos iguais
        if (opcao3 == opcao4) {
          printf("Você escolheu o mesmo atributo duas vezes. Encerrando o programa.\n");
          return 0;
        }

      switch (opcao3){
        case 1:
          primeiroAtributo2 = populacao2;
          break;
               
        case 2:
          primeiroAtributo2 = area2;
          break;

        case 3:
          primeiroAtributo2 = pib2;
          break;

        case 4:
        primeiroAtributo2 = pontosturisticos2;
         break;

        case 5:
          primeiroAtributo2 = desindade2;
          break;

        default:
         printf("Opção inválida. Tente novamente.\n");
         break; 
      }         

      switch (opcao4) {
        case 1:
          segundoAtributo2 = populacao2;
          break;
                            
        case 2:
          segundoAtributo2 = area2;
          break;
             
        case 3:
          segundoAtributo2 = pib2;
          break;
             
        case 4:
          segundoAtributo2 = pontosturisticos2;
          break;
             
        case 5:
          segundoAtributo2 = desindade2;
          break;
             
        default:
          printf("Opção inválida. Tente novamente.\n");
          break; 
      }

                resultado2 = primeiroAtributo2 + segundoAtributo2;
                //printf("Soma dos atrubotos escolhidos são: %d", resultado2);
                printf("-----------------------------------------\n");
                //PRIMEIRA CARTA
                //atributos usados na compração
                printf("Carta 01: %s\n", nome);
                if (opcao == 1){
                  printf("Pimeiro atributo: População - %d hab\n", populacao);
                }else if (opcao == 2){
                  printf("Primeiro atributo: Area - %.2f km²\n", area);
                }else if (opcao == 3){
                  printf("Primeiro atributo: PIB - %.2f\n", pib);
                }else if (opcao == 4){
                  printf("Primeiro atributo: Pontos Turísticos -%d\n",pontosturisticos);
                }else{
                  printf("Primeiro atributo: Densidade demográfica - %.2f\n", desindade);
                }

                if (opcao2 == 1){
                  printf("Segundo atributo: População - %d hab\n", populacao);
                }else if (opcao2 == 2){
                  printf("Segundo atributo: Área - %.2f km²\n", area);
                }else if (opcao2 == 3){
                  printf("Segundo atributo: PIB - %.2f\n", pib);
                }else if (opcao2 == 4){
                  printf("Segundo atributo: Pontos Turísticos - %d\n", pontosturisticos);
                }else{
                  printf("Segundo atributo: Densidade demográfica - %.2f\n", desindade);
                }
                
                printf("-----------------------------------------\n");
                // SEGUNDA CARTA
                //atributos usados na compração
                printf("Carta 02: %s\n", nome2);
                if (opcao3 == 1){
                  printf("Pimeiro atributo: População - %d hab\n", populacao2);
                }else if (opcao3 == 2){
                  printf("Primeiro atributo: Area - %.2f km²\n", area2);
                }else if (opcao3 == 3){
                  printf("Primeiro atributo: PIB - %.2f\n", pib2);
                }else if (opcao3 == 4){
                  printf("Primeiro atributo: Pontos Turísticos - %d\n", pontosturisticos);
                }else{
                  printf("Primeiro atributo: Densidade demográfica - %.2f\n", desindade2);
                }

                if (opcao4 == 1){
                  printf("Segundo atributo: População - %d hab\n", populacao2);
                }else if (opcao4 == 2){
                  printf("Segundo atributo: Área - %.2f km²\n", area2);
                }else if (opcao4 == 3){
                  printf("Segundo atributo: PIB - %.2f\n", pib2);
                }else if (opcao4 == 4){
                  printf("Segundo atributo: Pontos Turísticos - %d\n", pontosturisticos2);
                }else{
                  printf("Segundo atributo: Densidade demográfica - %.2f\n", desindade2);
                }
                printf("-----------------------------------------\n");
                // Compara as somas e determina o vencedor
                  printf("Soma dos atributos de %s: %d pontos\n",nome, resultado);
                   printf("Soma dos atributos de %s: %d pontos\n",nome2, resultado2);
                   printf("-----------------------------------------\n");

                  //if (resultado > resultado2) {
                   //printf("%s Venceu!\n",nome);
                 // } else if (resultado2 > resultado2) {
                  //  printf("%s Venceu!\n", nome2);
                //  } else {
                 //  printf("Empate!\n");
                 // }
                 // printf("-----------------------------------------\n");
                  // Operador Ternário para determinar o vencedor
                char *venceu = (resultado > resultado2) ? nome : (resultado2 > resultado) ? nome2 : "Empate";
                printf("O vencedor foi: %s\n", venceu);
   

                return 0;

               
            
}                     