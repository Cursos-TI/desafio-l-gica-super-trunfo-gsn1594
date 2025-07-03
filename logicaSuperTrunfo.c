#include <stdio.h>

int main() {

    char estado,estado1,codigo[4],codigo1[4],cidade[50],cidade1[50];
    unsigned long int populacao, populacao1;
    int pTuristicos,pTuristicos1,opcao;
    float area,area1,pib,pib1,densidade,pCapita,densidade1,pCapita1;
    float superPoder,superPoder1,dInvertida,dInvertida1;
    
//Cadastro da carta 1 - Pega e salva no scanf.
  
    printf("\n\nCADASTRO DA CARTA 1\n\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados):\n");
    scanf(" %c",&estado);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf(" %s",codigo);

    printf("Digite o nome da cidade (ex:Rio_de_Janeiro):\n");
    scanf(" %s",cidade);

    printf("Digite o número de habitantes da cidade:\n");
    scanf(" %u",&populacao);
    
    printf("Digite a área da cidade em quilômetros quadrados:\n");
    scanf(" %f",&area);
    
    printf("Digite o Produto Interno Bruto da cidade:\n");
    scanf(" %f",&pib);

    printf("Digite quantidade de pontos turísticos na cidade:\n"); 
    scanf(" %d",&pTuristicos);


//Calcula a densidade populacional da cidade e cria a inversão da desindade.

    densidade=populacao/area;

    dInvertida=1/densidade;

//Calcula o pib per capita e super poder.

    pCapita=pib/populacao;

    superPoder = populacao + area + pib + pTuristicos + pCapita + dInvertida;


//Printa a carta 1 na tela o que foi salvo.


    printf("\n\nCarta 1:\n\n");

    printf("Estado:%c\n",estado);

    printf("Código:%s\n",codigo);

    printf("Nome da Cidade: %s\n",cidade);

    printf("População:%u\n",populacao);

    printf("Área: %.2f km²\n",area);

    printf("PIB: %.2f bilhões de reais\n",pib);

    printf("Número de Pontos Turísticos:%d\n",pTuristicos);

    printf("Densidade Populacional: %.2f hab/km²\n",densidade);

    printf("PIB per Capita: %.2f reais\n",pCapita);

    printf("Super Poder: %.2f\n",superPoder);


//Cadastro da carta 2 - Pega e salva no scanf.
  

    printf("\n\nCADASTRO DA CARTA 2\n\n");

    printf("Digite uma letra de 'A' a 'H' (representando um dos oito estados):\n");
    scanf(" %c",&estado1);

    printf("Digite a letra do estado seguida de um número de 01 a 04 (ex: A01, B03):\n");
    scanf(" %s",codigo1);

    printf("Digite o nome da cidade (ex:Rio_de_Janeiro):\n");
    scanf(" %s",cidade1);

    printf("Digite o número de habitantes da cidade:\n");
    scanf(" %u",&populacao1);
    
    printf("Digite a área da cidade em quilômetros quadrados:\n");
    scanf(" %f",&area1);
    
    printf("Digite o Produto Interno Bruto da cidade:\n");
    scanf(" %f",&pib1);

    printf("Digite quantidade de pontos turísticos na cidade:\n"); 
    scanf(" %d",&pTuristicos1);
    

//Calcula a densidade populacional e inversão da densidade da cidade 2.


    densidade1=populacao1/area1;

    dInvertida1=1/densidade;


//Calcula o pib da cidade 2 per capita e super poder.


    pCapita1=pib1/populacao1;

    superPoder1 = populacao1 + area1 + pib1 + pTuristicos1 + pCapita1 +dInvertida1;

//Printa a carta 2 na tela o que foi salvo.


    printf("\n\nCarta 2:\n\n");

    printf("Estado:%c\n",estado1);

    printf("Código:%s\n",codigo1);

    printf("Nome da Cidade: %s\n",cidade1);

    printf("População:%u\n",populacao1);

    printf("Área: %.2f km²\n",area1);

    printf("PIB: %.2f bilhões de reais\n",pib1);

    printf("Número de Pontos Turísticos:%d\n",pTuristicos1);

    printf("Densidade Populacional: %.2f hab/km²\n",densidade1);

    printf("PIB per Capita: %.2f reais\n",pCapita1);

    printf("Super Poder: %.2f\n",superPoder1);

//menu com switch para escolher o atributo da comparação.

    printf("\nEscolha o atributo com numero do menu:\n");
    printf("1. População\n");
    printf("2. Area\n");
    printf("3. Pontos Turísticos\n");
    printf("4. P.I.B.\n");
    printf("5. P.I.B. per Capita\n");
    printf("6. Densidade\n");
    printf("7.Super Poder\n");

    scanf(" %d",&opcao);

    //switch com if e elsei e else para fazer a comparação.

    switch (opcao)
    {
    case 1:

            printf("Carta %s:%u",cidade,populacao);
            printf("Carta %s:%u",cidade1,populacao1);


            if(populacao > populacao1){

                printf("Resultado: A carta %s venceu!\n",cidade);


            }else if(populacao < populacao1){
                
                printf("Resultado: A carta %s venceu!\n",cidade1);

            }else{


                printf("Resultado: Deu empate!\n");


            }

        break;

        case 2:

            printf("Carta %s:%.2f\n",cidade,area);
            printf("Carta %s:%2f\n",cidade1,area1);


            if(area > area1){

                printf("Resultado: A carta %s venceu!\n",cidade);


            }else if(area < area1){
                
                printf("Resultado: A carta %s venceu!\n",cidade1);

            }else{


                printf("Resultado: Deu empate!\n");


            }

        break;

     case 3:

            printf("Carta %s: %d\n",cidade,pTuristicos);
            printf("Carta %s: %d\n",cidade1,pTuristicos1);


            if(pTuristicos > pTuristicos){

                printf("Resultado: A carta %s venceu!\n",cidade);


            }else if(pTuristicos<pTuristicos1){
                
                printf("Resultado: A carta %s venceu!\n",cidade1);

            }else{


                printf("Resultado: Deu empate!\n");


            }

        break;
    
        case 4:

            printf("Carta %s:%.2f\n",cidade,pib);
            printf("Carta %s:%.2f\n",cidade1,pib1);


            if(pib > pib1){

                printf("Resultado: A carta %s venceu!\n",cidade);


            }else if(pib < pib1){
                
                printf("Resultado: A carta %s venceu!\n",cidade1);

            }else{


                printf("Resultado: Deu empate!\n");


            }

        break;
        
        case 5 :

            printf("Carta %s:%.2f\n",cidade,pCapita);
            printf("Carta %s:%.2f\n",cidade1,pCapita1);


            if(pCapita > pCapita1){

                printf("Resultado: A carta %s venceu!\n",cidade);


            }else if(pCapita < pCapita1){
                
                printf("Resultado: A carta %s venceu!\n",cidade1);

            }else{


                printf("Resultado: Deu empate!\n");


            }

        break;
         
        case 6 :

            printf("Carta %s : %.2f\n",cidade,densidade);
            printf("Carta %s : %.2f\n",cidade1,densidade1);


            if(densidade < densidade1){

                printf("Resultado: A carta %s venceu!\n",cidade);


            }else if(densidade > densidade1){
                
                printf("Resultado: A carta %s venceu!\n",cidade1);

            }else{


                printf("Resultado: Deu empate!\n");


            }

        break;
         

        case 7:
         
            printf("Carta %s: %.2f\n", cidade, superPoder);

            printf("Carta %s: %.2f\n",cidade1,superPoder1);


            if (superPoder > superPoder1)
            {

                printf("Resultado: A carta %s venceu!\n",cidade);


            }else if (superPoder < superPoder1){
                
                printf("Resultado: A carta %s venceu!\n",cidade1);

            }else{


                printf("Resultado: Deu empate!\n");


            }

        break;
         

        default:
            printf("Não tem essa opção no menu.\n");
        
        break;
}
    
    
    return 0;
}
