/*************************************************
Autor: Caio Henrique Pessoa de Lima

Data: 05/07/2022.

Descrição: O código apresentado tem como objetivo 
montar uma matriz com valores preenchidos pelo
usuário, depois fazer o computador entender qual
o maior elemento da matriz e multiplicalo com 
os valores restantes da matriz montando outra 
matriz. 
**************************************************/
#include <stdio.h>
#include <stdlib.h>

void matriz ();
void multmatriz ();

int m[2][2], resp[2][2], op;

int main(void) {
do{
  matriz ();
  
    printf ("\n");
  
  multmatriz ();
  
}while (op==1);
return 0;
}

void matriz() { // Função que faz a coletagem de dados do usuário, e monta sua matriz com estes dados.
  system ("cls");
  printf ("Digite dois números para a primeira coluna:\n ");
  scanf("%d %d", &m[0][0],&m[0][1]);

  printf ("Digite dois números para a segunda coluna:\n ");
  scanf("%d %d", &m[1][0],&m[1][1]);

  printf ("\n");

  for (int i=0; i<2; i++) { // Matriz Preenchida. 
    printf (" %d ", m[0][i]);
    printf (" %d ", m[1][i]);
    printf ("\n");

  }
}

void multmatriz(){ // Função que analisa as condições de cada parte da matriz e faz o calculo de multiplicação.
  if (m[0][0]>m[0][1]&&m[0][0]>m[1][0]&&m[0][0]>m[1][1]) { // 1ºCondição, se o primeiro elemento for maior que todos
    
    printf ("\n\nO Maior Elemento Inserido na Matriz Foi: [ %d ]\n", m[0][0]);

    for (int i=0; i<2; i++){  
        resp[0][0]= m[0][0]*m[0][0];
        resp[0][1]= m[0][0]*m[0][1];
        resp[1][0]= m[0][0]*m[1][0];
        resp[1][1]= m[0][0]*m[1][1];

        printf (" %d ", resp[0][i]);
        printf (" %d ", resp[1][i]);
        printf ("\n");
    }   
  }

  if (m[0][1]>m[0][0]&&m[0][1]>m[1][0]&&m[0][1]>m[1][1]) { // 2ºCondição, se o segundo elemento for maior que todos
    
    printf ("\n\nO Maior Elemento Inserido na Matriz Foi: [ %d ]\n", m[0][1]);

    for (int i=0; i<2; i++){ 
        resp[0][1]= m[0][1]*m[0][1];
        resp[0][0]= m[0][1]*m[0][0];
        resp[1][0]= m[0][1]*m[1][0];
        resp[1][1]= m[0][1]*m[1][1];
        
        printf (" %d ", resp[0][i]);
        printf (" %d ", resp[1][i]);
        printf ("\n");
    }   
  }

  if (m[1][0]>m[0][0]&&m[1][0]>m[0][1]&&m[1][0]>m[1][1]) { // 3ºCondição, se o terceiro elemento for maior que todos
   
    printf ("\n\nO Maior Elemento Inserido na Matriz Foi: [ %d ]\n", m[1][0]);

    for (int i=0; i<2; i++){
        resp[0][1]= m[1][0]*m[0][1];
        resp[0][0]= m[1][0]*m[0][0];
        resp[1][0]= m[1][0]*m[1][0];
        resp[1][1]= m[1][0]*m[1][1];
        
        printf (" %d ", resp[0][i]);
        printf (" %d ", resp[1][i]);
        printf ("\n");
    }   
  }

  if (m[1][1]>m[0][0]&&m[1][1]>m[0][1]&&m[1][1]>m[1][0]) { // 4ºCondição, se o quarto elemento for maior que todos.

    printf ("O Maior Elemento Inserido na Matriz Foi: [ %d ]\n\n", m[1][1]);

    for (int i=0; i<2; i++){
        resp[0][1]= m[1][1]*m[0][1];
        resp[0][0]= m[1][1]*m[0][0];
        resp[1][0]= m[1][1]*m[1][0];
        resp[1][1]= m[1][1]*m[1][1];

        printf(" %d ", resp[0][i]);
        printf(" %d ", resp[1][i]);
        printf("\n");
    }  
  }
  printf ("\n(1)  Continuar  |  (2)  Sair");
  scanf("%d", &op);
}