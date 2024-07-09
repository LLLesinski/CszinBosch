#include <stdio.h>

float somas(float x, float y, float z){
  
  printf("Digite um número:\n\n--> ");
  scanf("%f",&x);
  
  printf("Digite outro número:\n\n--> ");
  scanf("%f",&y);
  
  z = y + x;
  
  return printf("%.2f",z);
}

float subts(float x, float y, float z){
  
  printf("Digite um número:\n\n--> ");
  scanf("%f",&x);
  
  printf("Digite outro número:\n\n--> ");
  scanf("%f",&y);

  z = y - x;

  return printf("%.2f",z);
}

float divds(float x, float y, float z, int a){
  a = 1;
  while (a == 1){
  printf("\n\nDigite um número:\n\n--> ");
  scanf("%f",&x);
  
  printf("Digite outro número:\n\n--> ");
  scanf("%f",&y);
  if(x == 0 || y == 0){
    printf("\n\nNão utilize 0 na divisão!\n\n");
    a = 1;
    
  }
    else{
      a = 0;
    }
  z = y / x;
  }
  return printf("\n\n%.2f",z);
  
}

float mults(float x, float y, float z){
  
  printf("Digite um número:\n\n--> ");
  scanf("%f",&x);
  
  printf("Digite outro número:\n\n--> ");
  scanf("%f",&y);

  z = y * x;

  return printf("%.2f",z);
}

float farcel(float x, float y, float z, float a){

  printf("Digite uma temperatura em farenheit:\n\n--> ");
  scanf("%f",&y);

  z = ((y - 32) * 0.55);

  return(printf("%.2f",z));
}

float farcel2(float x, float y, float z, float a){

  printf("Digite uma temperatura em celsius:\n\n--> ");
  scanf("%f",&x);

  a =  x * (9/5) + 32;

  return(printf("%.2f",a));
}

float kelvin(float x, float y, float z, float a){

  printf("Digite uma temperatura em celsius:\n\n--> ");
  scanf("%f",&x);

  return(printf("%.2f", x + 273.15));
}

float kelton(float x, float y, float z, float a){
  
  printf("Digite uma temperatura em farenheit:\n\n--> ");
  scanf("%f",&x);

  return(printf("%.2f", (x - 32) * 5 / 9 + 273.15));
  
}

float kelly( float x, float y, float z, float a){
  
  printf("Digite uma temperatura em Kelvin :\n\n--> ");
  scanf("%f",&x);

  return(printf("%.2f", x - 273.15));
}

float kleber( float x, float y, float z, float a){
  
  printf("Digite uma temperatura em Kelvin:\n\n--> ");
  scanf("%f",&x);

  return(printf("%.2f", (x - 273.15) * 5 / 9 + 32));
}


int main(){
  
  float x, y, z, a;
  
  
  INICIO:  

  
  printf("\n\n------ BIG CALCULADORA! ------\n\n");
  
  int m1, p;
  
  printf("[1] Soma\n\n[2] Subtração\n\n[3] Divisão\n\n[4] Multiplicação\n\n[5] Conversão de temp\n\n--> ");
  scanf("%i",&m1);

  switch (m1){

    case 1:
    somas(x,y,z);

    break;
    case 2:
    subts(x,y,z);
      
    break;
    
    case 3:
    divds(x,y,z,a);
    break;

    case 4:
    mults(x,y,z);
    break;

    case 5:
         
        printf("Escolha:\n\n[1] Converter F para C\n\n[2] Converter C para F\n\n[3] Converter K para C\n\n[4] Converter K para F\n\n[5] Converter C para K\n\n[6] Converter F para K\n\n--> ");
        scanf("%i",&p);
        
        if(p==1){farcel(x, y, z, a);break;}

        else if(p==2){farcel2(x, y, z, a);break;}

        else if(p==3){kelly(x,y,z,a);break;}

        else if(p==4){kleber(x,y,z,a);break;}

        else if(p==5){kelvin(x,y,z,a);break;}

        else if(p==6){kelton(x,y,z,a);break;}

        else{
          printf("Escolha uma opão válida!");
          goto INICIO;
          break;
        }

      
    default:

    printf("\n\nEscolha uma opção válida!\n\n");

    goto INICIO;
    break;
      
    
  }  
  return 0;

}