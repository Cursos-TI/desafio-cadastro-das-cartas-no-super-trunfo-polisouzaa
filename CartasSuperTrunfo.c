#include <stdio.h>


int main (){
    char estado;
    char codigodacarta [4];
    char nomedacidade [20];
    float populacao;
    float area;
    float pib;
    int pontosturisticos;


    printf ("Bem vindo ao Super Trunfo: Brasil\n");
    printf("Vamos completar o fornecimento das informações de suas cartas:\n");

    printf( "Insira a letra do seu Estado: \n");
    scanf("%s", &estado );

    printf("Insira o código da carta:\n");
    scanf("%s", &codigodacarta);

    printf("Insira o nome da cidade:\n");
    scanf("%s", nomedacidade); 

    printf("Insira o número da população:\n");
    scanf("%f", &populacao );

    printf("Insira a área em km²:\n");
    scanf("%f", &area ); 

    printf("Insira o PIB:\n");
    scanf("%f", &pib );

    printf("Insira o Nº de pontos turísticos:\n");
    scanf("%d", &pontosturisticos );

    printf("\n--- Dados Cadastrados ---\n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigodacarta);
    printf("Nome da Cidade: %s\n", nomedacidade);
    printf("População: %.0lf\n", populacao); 
    printf("Área: %.2f km²\n", area); 
    printf("PIB: %.2f bilhões\n", pib); 
    printf("Pontos Turísticos: %d\n", pontosturisticos);


    printf("Carta 2 \n");
    printf( "Insira a letra do seu Estado: \n");
    scanf("%s", &estado );

    printf("Insira o código da carta:\n");
    scanf("%s", &codigodacarta);

    printf("Insira o nome da cidade:\n");
    scanf("%s", nomedacidade); 

    printf("Insira o número da população:\n");
    scanf("%f", &populacao );

    printf("Insira a área em km²:\n");
    scanf("%f", &area ); 

    printf("Insira o PIB:\n");
    scanf("%f", &pib );

    printf("Insira o Nº de pontos turísticos:\n");
    scanf("%d", &pontosturisticos );

    printf("\n--- Dados Cadastrados carta 2 ---\n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigodacarta);
    printf("Nome da Cidade: %s\n", nomedacidade);
    printf("População: %.0lf\n", populacao); 
    printf("Área: %.2f km²\n", area); 
    printf("PIB: %.2f bilhões\n", pib); 
    printf("Pontos Turísticos: %d\n", pontosturisticos);



    return 0;
}
