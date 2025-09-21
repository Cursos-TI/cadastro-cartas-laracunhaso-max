#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
/* supertrunfo - os usuários tem que cadastrar 2 cartas, com as seguintes informações: Estado: Uma letra de 'A' a 'H', em char; Código da Carta: letra do estado + número de 01 a 04, char[]
  Nome da Cidade: nome, em char[]; População: número de habitantes, em int; Área: A área da cidade em km2, em float; PIB, em float; Pontos Turísticos: qtde, em int
*/
int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado;
char nomecid[20];
int pontostur, codcarta, populacao;
float areakm, pib;
  // Área para entrada de dados
printf("Bem vindo ao Super Trunfo!\n");
printf("Antes de começar a jogar, vamos cadastrar suas cartas: \n");
  
    printf("Dê um nome à sua cidade: \n");
    scanf("%s", &nomecid);
    
    printf("Em qual Estado a %s fica localizada? Escolha uma letra de A a H: \n", nomecid);
    scanf(" %c", &estado);

    printf("A %s será sua cidade 01 ou 02? \n", nomecid);
    scanf("%d", &codcarta);

    printf("A %s será sua carta %c0%d \n", nomecid, estado, codcarta);

    printf("Qual será a população da %s? \n", nomecid);
    scanf("%d", &populacao);

    printf("Agora, qual será a área construída (em quilometros quadrados)? \n");
    scanf("%f", &areakm);

    printf("E, quantos pontos turísticos a %s tem? \n", nomecid);
    scanf("%d", &pontostur);

    printf("Ótimo! Só falta definir o PIB! Qual o Produto Interno Bruto (em milhões de reais)? \n");
    scanf("%f", &pib);

  printf("Sua primeira carta foi cadastrada com sucesso! Confira abaixo as informações da %s: \n", nomecid);
      printf("CARTA 1;");
      printf(" Código da Carta: %c0%d \n", estado, codcarta);
      printf("Estado: %c \n", estado);
      printf("Nome da Cidade: %s \n", nomecid);
      printf("População: %d \n", populacao);
      printf("Área: %.2f km² \n", areakm);
      printf("PIB: %.2f milhões de reais \n", pib);
      printf("Número de Pontos Turísticos: %d \n", pontostur);

printf("\n Pronto para criar sua segunda carta?\n");
  // Área para exibição dos dados da cidade
/* repetição da carta 1, mas alterando as "caixas" de informação para '2'*/
char estado2;
char nomecid2[20];
int pontostur2, codcarta2, populacao2;
float areakm2, pib2;
  
    printf("Qual nome da segunda cidade? \n");
    scanf("%s", &nomecid2);
    
    printf("Em qual Estado a %s fica localizada? Escolha uma letra de A a H: \n", nomecid2);
    scanf(" %c", &estado2);

    printf("A %s será sua cidade 03 ou 04? \n", nomecid2);
    scanf("%d", &codcarta2);

    printf("A %s será sua carta %c0%d \n", nomecid2, estado2, codcarta2);

    printf("Qual será a população da %s? \n", nomecid2);
    scanf("%d", &populacao2);

    printf("Agora, qual será a área construída (em quilometros quadrados)? \n");
    scanf("%f", &areakm2);

    printf("E, quantos pontos turísticos a %s tem? \n", nomecid2);
    scanf("%d", &pontostur2);

    printf("Ótimo! Só falta definir o PIB! Qual o Produto Interno Bruto (em milhões de reais)? \n");
    scanf("%f", &pib2);

  printf("A segunda carta foi cadastrada com sucesso! Confira abaixo as informações da %s: \n", nomecid2);
      printf("CARTA 2;");
      printf(" Código da Carta: %c0%d \n", estado2, codcarta2);
      printf("Estado: %c \n", estado2);
      printf("Nome da Cidade: %s \n", nomecid2);
      printf("População: %d \n", populacao2);
      printf("Área: %.2f km² \n", areakm2);
      printf("PIB: %.2f milhões de reais \n", pib2);
      printf("Número de Pontos Turísticos: %d \n", pontostur2);

printf("Tudo pronto para você começar a jogar!");
    
return 0;
} 
