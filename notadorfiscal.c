// EX 1 //

/*Faça um programa que imprima todos os números pares até o valor que foi
inserido pelo usuário.*/
/*
#include <stdio.h>

int main(){

  int i, a, cont;
  
  i = 0;
    
  printf("Escreva um número\n\n--> ");
  scanf("%i",&a);

  for(i = 0; i <= a ; i++){
    
    (i % 2 == 0) ? printf("\n\n%i",i) : printf("");
  }
  return 0;
}
*/

// EX 2 //

/* Faça um programa que some todos os números naturais até o valor inserido
pelo usuário */

/*#include <stdio.h>

int main(){

  int a, b, i;
  b = 0;
  printf("Digite um número:\n\n--> ");
  scanf("%i",&a);

  for(i = 0; i <= a; i++){

    b = i + b;
    
  }
  printf("\n\n%i",b);
}*/

// EX 3 //

/*Faça um programa que exiba uma tabela com a tabuada de um valor inserido
pelo usuário.*/

/*
#include <stdio.h>

int main (){

  int a,b,i;

  printf("Digite um valor!\n\n--> ");
  scanf("%i",&a);

  for(i = 1; i <= 10; i++){

    b = i * a;

    printf("\n\n%i",b);
  }
  return 0;
}
*/

// EX 4 //

/* Escreva um código onde será identificado os números primos até o valor
  inserido pelo usuário. */


/*#include <stdio.h>

int main(){

  int a, b, i, j;
 
  printf("Digite um número:\n\n-->");
  scanf("%i",&a);

  for(i = 2; i <=a; i++){
     b = 0;
    for(j = 1; j <= i; j++){

      if(i % j == 0){
        b++;
           }
          }
  
  if(b == 2){
    printf("\n\n%i",i);
      }
    }
  return 0;
}*/


// EX 5 //

/*Exiba para o usuário os múltiplos de um número inserido por ele até 100.*/
/*
#include <stdio.h>

int main(){

  int a, b, i;

  printf("Digite um número até 100:\n\n-->");
  scanf("%i",&a);

  for(i = 1; i <= 100; i++){
    (i%a==0) ? printf("\n\n%i",i) : 0;
      
    }
  return 0;
}
*/


// EX 6 //


/*
#include <stdio.h>

int main(){

  int i, a, b, j, base, altura;

  INICIO:
   printf("Digite o valor da base:\n\n--> ");
   scanf("%i",&base);

   printf("Digite o valor da altura:\n\n--> ");
   scanf("%i",&altura);
    
  if( base > 20 || altura > 20){
    printf ("\n\nDigite um valor menor que 20!\n\n");
    goto INICIO;
  }
    else if (base == altura){
      printf("\nRetângulo de lado igual? >=(\n\n");
      goto INICIO;
    }

  else{
  
  for (i = 0; i <= base ; i++){

    for (j = 0; j <= altura ; j++){

      printf("# ");
    
      j++;
    
      }
    printf("\n");
    }

  i++;
  }
  return 0;

}
*/


// EX 7 //

/*
#include <stdio.h>

int main(){

  float num, num2;
  long int i, con;

  printf("Digite um número: ");
  scanf("%li", &num);

  for(i = 0; i <= 20; i++){
    
  }
}
*/












