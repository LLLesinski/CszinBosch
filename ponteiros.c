// TROCA //

/* Implementar uma função que receba dois valores e utilize ponteiros para
trocar o valor das variáveis. Defina um valor inicial e exiba o valor inicial e
o valor após a alteração. */

/*#include <stdio.h>


int trocar(int a, int b, int x){
  
  int *at, *bt;

  at = &a;
  bt = &b;
  x = *at;
  *at = x;
  *at = b;

  *bt = x;

printf("O novo valor de A é: %i\n\n", *at); 
printf("O novo valor de B é: %i", *bt);
    return 0;
}

int main() {

  int a, b, x, y;

  printf("\nDigite um valor para A:\n\n--> ");
  scanf("%i",&a);

  printf("\nDigite um valor para B:\n\n--> ");
  scanf("%i",&b);

  trocar(a, b, x);
  
  
  return 0;
}
*/

// COMPARAÇÃO //

/* Escreva um programa que contenha uma função que receba dois valores
  inteiros. Leia esses valores do teclado. Em seguida, compare seus
  endereços e exiba o conteúdo do maior endereço. */

/*#include <stdio.h>

void comparar(int a, int b, int x){

  int *ac, *bc;

    ac = &a;
    bc = &b;
  
  if(ac > bc){
    printf("O endereço de A é maior que o de B:\n\nEis o valor de A: %i",*ac);
  }
  else{
    printf("O endereço de B é maior que o de A:\n\nEis o valor de B: %i",*bc);
  
  }
  
}

int main(){

  int a, b, x, y;

  printf("Digite um valor para A:\n\n--> ");
  scanf("%i",&a);

  printf("Digite um valor para B:\n\n--> ");
  scanf("%i",&b);

  comparar(a, b, x);


  return 0;
}*/

/*Escreva um programa que declare um inteiro, um real e um char, e
ponteiros para inteiro, real e char. Associe as variáveis aos ponteiros (use
&). Modifique os valores de cada variável usando os ponteiros. Imprima os
valores das variáveis antes e após a modificação.*/


/*
#include <stdio.h>

int main(){

  int a = 10, *d, g;
  char b = "p", *e, h;
  float c = 1.5, *f, i;


    d = &a;
    e = &b;
    f = &c;

    *d = 20;
    *e = "L";
    *f = 17.56;

  printf("%i", *d);
  printf(" %s", *e);
  printf("%.2f", *f);
 return 0; 
}  
    
    
*/