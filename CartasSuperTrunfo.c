#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  //CARTA Nº1
  char estado1 ='A'; //definindo variavel char para o caractere referente ao estado escolhido.
  char codigo1[3] = "A1"; //variavel char com array para definir o codigo da carta escolhida ja que utilizei mais de um caractere.
  char nome[20] = "Parana"; //definindo variavel char com array para strings com nome do estado escolhido.
  int população = 11890; // variavel int possui um valores inteiros, assim foi definido a populacao do estado escolhido.
  float area = 199.300; // variavel float possui valores com casas decimais, assim como foi definido a area referente a metros quadrados do estado.
  float PIB = 670.9; // mesma variavel da area, tambem foi usada para definir o PIB do estado.
  int turismo = 2333; // mesma variavel usada para definir a papulacao com valores inteiros, foi usada aqui para definir o numero de pontos turisticos 



//CARTA Nº2
  char estado2 = 'B'; 
  char codigo2[3] = "A2"; 
  char nome2[20] = "Bahia"; 
  int população2 = 23059; 
  float area2 = 567.295; 
  float PIB2 = 430.9; 
  int turismo2 = 4365;



  // Área para entrada de dados

  // Área para exibição dos dados da cidade
  printf("carta Nº1\n\n"); // função printf para exibir o conteudo desejado no terminal do console. notase que usei mais de um \n para quebrar duas linhas 
  
  printf("codigo da carta: %c\n", estado1);// usei a funcao % indicando o tipo de variavel que sera usada e logo apos a virgula selecionei a variavel
  printf("nome do estado: %s\n", nome);
  printf("populacao do estado do Parana: %i habitantes\n",população); 
  printf("a area territorial do estado é de: %.3fkm²\n",area);
  printf("PIB do estado do Parana é de %.1fbi\n",PIB);
  printf("o quantidade de pontos turisticos é de: %i\n",turismo);
  printf("\n\n\n"); //utilizei mais de uma quebra de linha para organizar o resultado exibido terminal

  printf("carta Nº2\n\n");
  
  printf("codigo da carta: %c\n", estado2);
  printf("nome do estado: %s\n", nome2);
  printf("populacao do estado da Bahia: %i habitantes\n",população2);
  printf("a area territorial do estado é de: %.3fkm²\n",area2);
  printf("PIB do estado da Bahia é de %.1fbi\n",PIB2);
  printf("o quantidade de pontos turisticos é de: %i\n",turismo2);
  printf("\n\n\n");




return 0;
} 
