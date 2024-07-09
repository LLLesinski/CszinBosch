
/*1.Faça a soma de todos os valores de um array.*/
/*
#include <stdio.h>


int main() {

int soma = 0, i, array[11] = {1,2,3,4,5,6,7,8,9,10};

  for(i = 0; i <= 10; i++){

    soma = array[i] + soma;
    
  }

  printf("%i", soma);
  return 0;
}

*/


/*Identifique o maior valor dentro de uma sequência de valores
armazenadas em um array*/
/*
#include <stdio.h>

int main(){

    int nums[11] = {1,58,5,28,9,43,0,55,40,2}, i, j, maior;


    for(i = 0; i<10; i++){
      
      for(j = i - 1; j > 0; j--){
        
        if( nums[j] > nums[i]){
          maior = nums[j];
        }
        
        
      
      }
      
     
    }

  printf("O maior número eh: %i",maior);
  
return 0;
}
*/


/* Faça um programa para uma escola chamada IANES que fará todo o
gerenciamento de alunos, cursos, e média de alunos. Utilize um arquivo
de texto para fazer esse gerenciamento.(Escrita e leitura) */
/*
#include <stdio.h>

int main(){

  float notas[5] = {7.00, 8.50, 10.00, 6.55, 7.55}, notas2[5] = {6.50, 5.80, 9.40, 7.00, 7.50}, notas3[5] = {8.50,9.00,6.80, 8.50, 8.00};

  int cursos[3] = {1,2,3};

  
  
  return 0;
}*/

/*Crie um programa que armazene informações de alunos de uma escola.
Serão lidos 3 alunos, contendo três notas e seus nomes.*/

/*
#include <stdio.h>
#include <string.h>

int main(){

  int matriz[3][4],i,j;
  char nomes[3][15];
  
  for (i = 0; i < 3; i++){
  printf("Digite o nome do Aluno %i:\n\n--> ",i + 1);
    scanf("%s", nomes[i]);
}
  for (i = 0; i < 3; i++) { 
    for (j = 0; j < 3; j++) {
      printf("Digite o valor da %ix%i:\n\n--> ", i + 1, j + 1);
      scanf("%i", &matriz[i][j]);
      
    }
    
  }
  printf("\n\n\n---- Informações dos Alunos ----\n\n");
  
  for (i = 0; i < 3; i++){
    
    printf("Aluno: %s\n", nomes[i]);
    
    for (j = 0; j < 3; j++) {
      
      printf("Nota %i: %i\n", j + 1, matriz[i][j]); 
      
    }
    
    printf("\n"); 
    
  }

  
return 0;
  
}
*/


/* Faça um programa onde o usuário possa inserir dados em uma matriz 3x3.
Você deve realizar a soma dos valores em cada uma das linhas. Deverão ser
exibidos três resultados */

#include <stdio.h>

int main(){

  int matriz[3][4],i,j, soma1, soma2, soma3;

  for (i = 0;i < 3; i++){
    for (j = 0;j < 3; j++){
      printf("Digite o valor %ix%i:\n\n--> ",i,j);
      scanf("%i", &matriz[i][j]);
      
    }
    
  }
  
  soma1 = matriz[1][0] + matriz[1][1] + matriz[1][2];
  soma2 = matriz[2][0] + matriz[2][1] + matriz[2][2];
  soma3 = matriz[0][0] + matriz[0][1] + matriz[0][2];

  printf("Soma da linha 1: --> %i\n\n",soma3);
  printf("Soma da linha 2: --> %i\n\n",soma1);
  printf("Soma da linha 3: --> %i",soma2);

  return 0;
}