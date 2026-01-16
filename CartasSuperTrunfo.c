#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  //CARTA Nº1
  char estado1 ='A'; //definindo variavel char para o caractere referente ao estado escolhido.
    char codigo1[3] = "A1"; //variavel char com array para definir o codigo da carta escolhida ja que utilizei mais de um caractere.
    char nome[20] = "Parana"; //definindo variavel char com array para strings com nome do estado escolhido.
    int população = 818926; // variavel int possui um valores inteiros, assim foi definido a populacao do estado escolhido.
    float area = 199.300; // variavel float possui valores com casas decimais, assim como foi definido a area referente a metros quadrados do estado.
    float PIB = 670.9; // mesma variavel da area, tambem foi usada para definir o PIB do estado.
    int turismo = 2333; // mesma variavel usada para definir a papulacao com valores inteiros, foi usada aqui para definir o numero de pontos turisticos 
    float densidade = (população/area );//nestas linhas usei o operador de divisao "/" para caulcular a densidade e o pib per capita 
    float percapita = (população/PIB ); 


//CARTA Nº2
  char estado2 = 'B'; 
    char codigo2[3] = "A2"; 
    char nome2[20] = "Bahia"; 
    int população2 = 830591; 
    float area2 = 567.295; 
    float PIB2 = 430.9; 
    int turismo2 = 4365;
    float densidade2 = (população2/area2 );
    float percapita2 = (população2/PIB2 ); 




  // Área para entrada de dados

  // Área para exibição dos dados da cidade
  printf("CARTA Nº1\n\n"); // função printf para exibir o conteudo desejado no terminal do console. nota-se que usei mais de um \n para quebrar duas linhas 
  
  printf("codigo da carta: %c\n", estado1);// usei a funcao % indicando o tipo de variavel que sera usada e logo apos a virgula selecionei a variavel
  printf("nome do estado: %s\n", nome);
  printf("populacao do estado do Parana: %i milhões de habitantes\n",população); 
  printf("a area territorial do estado é de: %.3f km²\n",area);
  printf("PIB do estado do Parana é de %.1fbi de Reais\n",PIB);
  printf("o quantidade de pontos turisticos é de: %i\n",turismo);
  printf("a densidade populacional do estado é de %.2f hab/km²\n", densidade);
  printf("PIB per Capita é de %.2f de Reais\n", percapita);
  printf("\n\n"); //utilizei mais de uma quebra de linha para organizar o resultado exibido terminal

  printf("CARTA Nº2\n\n");
  
  printf("codigo da carta: %c\n", estado2);
  printf("nome do estado: %s\n", nome2);
  printf("populacao do estado da Bahia: %i milhões de habitantes\n",população2);
  printf("a area territorial do estado é de: %.3f km²\n",area2);
  printf("PIB do estado da Bahia é de %.1fbi de Reais\n",PIB2);
  printf("o quantidade de pontos turisticos é de: %i\n",turismo2);
  printf("a densidade populacional do estado é de %.2f hab/km²\n", densidade2);
  printf("PIB per Capita é de %.2f de Reais\n", percapita2);
  printf("\n\n");
 
  //usei o "%s" porque o valor da variavel sera apresentado em strings no terminal.
  printf("as cartas ecolhidas para comparaçao foram %s e %s.\n", nome,nome2);// aqui selecionei as cartas que seram comparadas, na linha abaixo o atributo que sera comparado 
  printf("o atributo escolhido para essa comparação foi o PIB, bora comparar?\n\n");//quem for maior vence!

  printf("O PIB do(a) %s é de %.2f \n",nome, PIB);
  printf("O PIB do(a) %s é de %.2f \n", nome2,PIB2);
  if (PIB>PIB2){ //definindo a estrutura if else e os blocos de codigo a serem seguidos. 
    printf("a carta %s foi a vencedora!!!\n\n", nome);//se verdadeiro execultara este bloco, senão ele execultara o proximo e assim ate a condição ser verdadeira.
  }else if (PIB<PIB2) {
    printf("a carta %s foi a vencedora!!!\n\n", nome2);
  }else {
    printf("as cartas empataram!!!\n\n");
  }
 
  printf("as cartas ecolhidas para comparaçao foram %s e %s.\n", nome,nome2);
  printf("o atributo escolhido para essa comparação foi a Densidade Populacional, bora comparar? o menor vence.\n\n");//quem for menor vence!
  
  printf("densidade do(a) %s é de %.2f \n",nome, densidade);
  printf("densidade do(a) %s é de %.2f \n", nome2,densidade2);
  if (densidade<densidade2){
    printf("a carta %s foi a vencedora!!!\n\n", nome);
  }else if (densidade>densidade2) {
    printf("a carta %s foi a vencedora!!!\n\n", nome2);
  }else {
    printf("as cartas empataram!!!\n\n");
  }

//Ps eu utilizei em algumas linhas mais de um "\n" para quebrar linhas e deixar o terminal mais organizado.
// nenhum dado fornecido neste jogo é real/atualizado.
return 0;
} 

