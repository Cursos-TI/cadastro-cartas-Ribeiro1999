#include <stdio.h>

int main() {

  //VARIAVEL CARTA Nº1
  char estado1 = 'A'; //usei varial char, para inserir os caracteres de identificaçao das cartas
  char codigo1[3] = "A1"; // aqui usei colchetes definindo a quantidade de catacteres permitidos no array
  char nome[20] = "Parana";
  int populacao = 818926;//variavel int para definir a quantidad com numeros inteiros
  float area = 199.300;//float para inserir numeros fracionados na variaval 
  float PIB = 670.9;
  int turismo = 2333;
  float densidade = (populacao / area); //unico comparativo que vence o menor
  float percapita = (populacao / PIB);

  //VARIAVEL CARTA Nº2 
  char estado2 = 'B';
  char codigo2[3] = "A2";
  char nome2[20] = "Bahia";
  int populacao2 = 830591;
  float area2 = 567.295;
  float PIB2 = 430.9;
  int turismo2 = 4365;
  float densidade2 = (populacao2 / area2);
  float percapita2 = (populacao2 / PIB2);

  //VARIÁVEIS DO JOGO
  int atributo1, atributo2;
  float valor1_c1 , valor1_c2; // defini variaveis para as somas que seram feitas na compação valor1 e valor2 de cada carta 
  float valor2_c1 , valor2_c2;
  float soma1 , soma2;

  //EXIBIÇÃO DE CARTAS (nota-se que em algumas linhas utilizei mais de um (\n) para organizar melhor o terminal)
  printf("CARTA Nº1\n\n");// printf para exibir a mensagem no terminal 
  printf("Estado: %c\n", estado1); //definindo a especificação de formato para cada variavel correspondente 
  printf("Nome: %s\n", nome);
  printf("Populacao: %d\n", populacao);
  printf("Area: %.3f km²\n", area);
  printf("PIB: %.1f bi\n", PIB);
  printf("Pontos Turisticos: %d\n", turismo);
  printf("Densidade: %.2f hab/km²\n\n", densidade); 

  printf("CARTA Nº2\n\n");
  printf("Estado: %c\n", estado2);
  printf("Nome: %s\n", nome2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.3f km²\n", area2);
  printf("PIB: %.1f bi\n", PIB2);
  printf("Pontos Turisticos: %d\n", turismo2);
  printf("Densidade: %.2f hab/km²\n\n", densidade2);

  //MENU 1 
  printf("Escolha o PRIMEIRO atributo para comparacao:\n");
  printf("1 - Populacao\n");
  printf("2 - Area\n");
  printf("3 - PIB\n");
  printf("4 - Pontos Turisticos\n");
  printf("5 - Densidade Demografica (menor vence)\n");
  scanf("%d", &atributo1); // scanf para capturar a escolha do jogador 
 //PRIMEIRO MENU utilizando o switch para utilizar somente os atributos escolhidos pelo jogador 
  switch (atributo1) {
    case 1:
      valor1_c1 = populacao;
      valor1_c2 = populacao2;
      break;
    case 2:
      valor1_c1 = area;
      valor1_c2 = area2;
      break;
    case 3:
      valor1_c1 = PIB;
      valor1_c2 = PIB2;
      break;
    case 4:
      valor1_c1 = turismo;
      valor1_c2 = turismo2;
      break;
    case 5:
      valor1_c1 = densidade;
      valor1_c2 = densidade2;
      break;
    default: 
      printf("Opcao invalida!\n");
  }

  //MENU 2 utilizando dinamica para nao poder utilizar o mesmo atributo 
  printf("Escolha o SEGUNDO atributo (diferente do primeiro):\n");
// nesse trecho estou definindo a dinamica para nao escolher o mesmo atributo 
  if (atributo1 != 1) printf("1 - Populacao\n"); // printf não aparecera para o terminal se (atributo1 == atributo2 )somente os diferentes aparecerão.
  if (atributo1 != 2) printf("2 - Area\n");
  if (atributo1 != 3) printf("3 - PIB\n");
  if (atributo1 != 4) printf("4 - Pontos Turisticos\n");
  if (atributo1 != 5) printf("5 - Densidade Demografica\n");
  scanf("%d", &atributo2);

  if (atributo2 == atributo1) { //se for igual nao aparecerá, mas para controle de segurança se o jogador digitar manualmente aparecerá no terminal essa mensagem
    printf("Nao e permitido escolher o mesmo atributo duas vezes!\n");
  }

  switch (atributo2) {
    case 1:
      valor2_c1 = populacao;
      valor2_c2 = populacao2;
      break;
    case 2:
      valor2_c1 = area;
      valor2_c2 = area2;
      break;
    case 3:
      valor2_c1 = PIB;
      valor2_c2 = PIB2;
      break;
    case 4:
      valor2_c1 = turismo;
      valor2_c2 = turismo2;
      break;
    case 5:
      valor2_c1 = densidade;
      valor2_c2 = densidade2;
      break;
    default:
      printf("Opcao invalida!\n");
    
  }

  //  SOMA DOS ATRIBUTOS // nao cosegui deselvolver uma logica para a subtração da densidade 
  soma1 = valor1_c1 + valor2_c1;
  soma2 = valor1_c2 + valor2_c2;

  //  RESULTADO 
  printf("Comparacao entre %s e %s\n\n", nome, nome2);
  printf("Soma dos atributos %s: %.2f\n", nome, soma1);
  printf("Soma dos atributos %s: %.2f\n\n", nome2, soma2);

  // Operador ternário + empate
  (soma1 > soma2) ? printf("Vencedor: %s\n\n", nome) :
  (soma2 > soma1) ? printf("Vencedor: %s\n\n", nome2) :
  printf("Empate!\n\n");

  return 0;
}

//obs nao consegui criar uma logica para comparar as densidades demograficas pois a soma dos dois valores estao juntas e nao consegui pensar em algo para resolver este problema tendo em vista q é unica diferente 
