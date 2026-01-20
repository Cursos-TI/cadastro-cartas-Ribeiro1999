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
  float resultado1 , resultado2;

  //EXIBIÇÃO DE CARTAS 
  printf("CARTA Nº1\n\n");// printf para exibir a mensagem no terminal 
  printf("Estado: %c\n", estado1); //definindo a especificação de formato para cada variavel correspondente 
  printf("Nome: %s\n", nome);
  printf("Populacao: %d\n", populacao);
  printf("Area: %.3f km²\n", area);
  printf("PIB: %.1f bi\n", PIB);
  printf("Pontos Turisticos: %d\n", turismo);
  printf("Densidade: %.2f hab/km²\n\n", densidade);//(nota-se que em algumas linhas utilizei mais de um (\n) para organizar melhor o terminal) 

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
 //PRIMEIRO MENU  
  switch (atributo1) {//utilizando o switch para utilizar somente os atributos escolhidos pelo jogador
    case 1: //nome de cada case é unico para utilizar na logica logo abaxo para o jogador escolher somente uma opcao por rodada
      valor1_c1 = populacao;
      valor1_c2 = populacao2;
      printf("voce escolheu população!\n\n");
      resultado1 = populacao > populacao2 ? 1 : 0;//usando operador ternario para definir valores para o resultado, se verdadeiro retorna 1 se não 0
      break;
    case 2:
      valor1_c1 = area;
      valor1_c2 = area2;
      printf("voce escolheu area!\n\n");
      resultado1 = area>area2 ? 1 : 0;
      break;
    case 3:
      valor1_c1 = PIB;
      valor1_c2 = PIB2;
      printf("voce escolheu PIB!\n\n");
      resultado1 = PIB>PIB2 ? 1 : 0;
      break;
    case 4:
      valor1_c1 = turismo;
      valor1_c2 = turismo2;
      printf("voce escolheu turismo!\n\n");
      resultado1 = turismo>turismo2 ? 1 : 0;
      break;
    case 5:
      valor1_c1 = densidade;
      valor1_c2 = densidade2;
      printf("voce escolheu densidade!\n\n");
      resultado1 = densidade<densidade2 ? 1 : 0;
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
      printf("voce escolheu população!\n\n");
      resultado2 = populacao>populacao2 ? 1 : 0;
      break;
    case 2:
      valor2_c1 = area;
      valor2_c2 = area2;
      printf("voce escolheu area!\n\n");
      resultado2 = area>area2 ? 1 : 0;
      break;
    case 3:
      valor2_c1 = PIB;
      valor2_c2 = PIB2;
      printf("voce escolheu PIB!\n\n");
      resultado2 = PIB>PIB2 ? 1 : 0;
      break;
    case 4:
      valor2_c1 = turismo;
      valor2_c2 = turismo2;
      printf("voce escolheu turismo!\n\n");
      resultado2 = turismo>turismo2? 1 : 0;
      break;
    case 5:
      valor2_c1 = densidade;
      valor2_c2 = densidade2;
      printf("voce escolheu densidade!\n\n");
      resultado2 = densidade<densidade2? 1 : 0;
      break;
    default:
      printf("Opcao invalida!\n");
    
  }
  if (resultado1 && resultado2){//se ambos resultados forem verdadeiros (1) ele executa a carta A
    printf("a carta %s venceu\n\n", nome);}
    else if(resultado1!=resultado2){// se resultados forem diferentes (1:0 ou 0:1) ele empatou 
      printf("empate!!!\n\n");}
    else{// senão se falso (0) a carta B vence
      printf("a carta %s venceu\n\n", nome2);
    }

    printf("resultado1\n"); //exibição dos valores dos atributos para comparção manual 
    printf("carta A\n");
    printf("%.2f \n",valor1_c1);
    printf("carta B\n");
    printf("%.2f \n\n",valor1_c2);
    printf("resultado2\n");
    printf("carta A\n");
    printf("%.2f \n",valor2_c1);
    printf("carta B\n");
    printf("%.2f \n\n",valor2_c2);
  
  

 

  return 0;
}


