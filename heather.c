// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>



// int saldo = 0; 

// #ifndef BANCO_H
// #define BANCO_H
// #include <stdio.h>
// #include <stdlib.h>


// void menu();
// void saque();
// void dps();
// void xtrt();
// void mprs();
// #endif





// void menu() {
//   int a, dinheiro;
//   srand(time(NULL));
//   dinheiro = rand() % 100000;
//   saldo = dinheiro;
//   printf("Bem vindo(a) ao banco\n\n");
//   printf("[1] Saque\n");
//   printf("[2] Depósito\n");
//   printf("[3] EXTRATO\n");
//   printf("[4] Empréstimo\n\n--> ");
//   scanf("%i", &a);
//   switch (a) {
//     case 1:
//       saque();
//       break;
//     case 2:
//       dps();
//       break;
//     case 3:
//       xtrt();
//       break;
//     case 4:
//       mprs();
//       break;
//     default:
//       printf("Opção inválida!\n");
//       break;
//   }
// }
// void saque() {
//   int valor;
//   printf("Digite o valor do saque:\n\n--> ");
//   scanf("%i", &valor);
//   if (valor <= saldo) {
//     saldo -= valor;
//     printf("Saque realizado com sucesso.\n");
//     printf("Saldo atual: %i\n", saldo);
//   } else {
//     printf("Saldo insuficiente.\n");
//   }
// }
// void dps() {
//   int valor;
//   printf("Digite o valor do depósito:\n\n--> ");
//   scanf("%i", &valor);
//   saldo += valor;
//   printf("Depósito realizado com sucesso.\n");
//   printf("Saldo atual: %i\n", saldo);
// }
// void xtrt() {
//   printf("Extrato:\n\n");
//   printf("Saldo atual: %i\n", saldo);
// }
// void mprs() {
//   printf("\nNão deixo\n");
// }
// int main() {
//   menu();
//   return 0;
// }


// #include <stdio.h>

// int main() {
//   int matriz1[5][5], matriz2[5][5], soma[5][5];
//   int i, j;


//   printf("Digite os elementos da primeira matriz 5x5:\n");
//   for (i = 0; i < 5; i++) {
//     for (j = 0; j < 5; j++) {
//       scanf("%d", &matriz1[i][j]);
//     }
//   }


//   printf("Digite os elementos da segunda matriz 5x5:\n");
//   for (i = 0; i < 5; i++) {
//     for (j = 0; j < 5; j++) {
//       scanf("%d", &matriz2[i][j]);
//     }
//   }


//   for (i = 0; i < 5; i++) {
//     for (j = 0; j < 5; j++) {
//       soma[i][j] = matriz1[i][j] + matriz2[i][j];
//     }
//   }


//   printf("\nMatriz resultante (soma das matrizes):\n");
//   for (i = 0; i < 5; i++) {
//     for (j = 0; j < 5; j++) {
//       printf("%d ", soma[i][j]);
//     }
//     printf("\n");
//   }

//   return 0;
// }


// #include <stdio.h>

// void maiorque50(int matriz[5][5], int *array, int *tamanho) {
//   int i, j;
//   *tamanho = 0; 
  
//   for (i = 0; i < 5; i++) {
//     for (j = 0; j < 5; j++) {
     
//       if (matriz[i][j] > 50) {
//         array[*tamanho] = matriz[i][j];
//         (*tamanho)++; 
//       }
//     }
//   }
// }

// int main() {
//   int matriz[5][5] = {
//     {10, 20, 30, 40, 50},
//     {60, 70, 80, 1, 100},
//     {3, 9822, 130, 81923, 150},
//     {160, 984, 180, 190, 200},
//     {210, 90, 941, 220, 250}
//   };
//   int array[25]; 
//   int tamanho = 0; 

// maiorque50(matriz, array, &tamanho);

//   printf("Elementos maiores que 50:\n");
//   for (int i = 0; i < tamanho; i++) {
//     printf("%d ", array[i]);
//   }
//   printf("\n");

//   return 0;
// }

// #include <stdio.h>

// #define TAMANHO 3

// char tabuleiro[TAMANHO][TAMANHO];

// void inicializaTabuleiro() {
//   int i, j;
//   for (i = 0; i < TAMANHO; i++) {
//     for (j = 0; j < TAMANHO; j++) {
//       tabuleiro[i][j] = ' ';
//     }
//   }
// }

// void imprimeTabuleiro() {
//   int i, j;
//   printf("\n");
//   printf("     |     |     \n");
//   printf("  %c  |  %c  |  %c  \n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
//   printf("_____|_____|_____\n");
//   printf("     |     |     \n");
//   printf("  %c  |  %c  |  %c  \n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
//   printf("_____|_____|_____\n");
//   printf("     |     |     \n");
//   printf("  %c  |  %c  |  %c  \n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);
//   printf("     |     |     \n\n");
// }

// int verificaVitoria() {
//   for (int i = 0; i < TAMANHO; i++) {
//     if (tabuleiro[i][0] != ' ' && tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][0] == tabuleiro[i][2]) {
//       return 1;
//     }
//   }

//   for (int j = 0; j < TAMANHO; j++) {
//     if (tabuleiro[0][j] != ' ' && tabuleiro[0][j] == tabuleiro[1][j] && tabuleiro[0][j] == tabuleiro[2][j]) {
//       return 1;
//     }
//   }

//   if (tabuleiro[0][0] != ' ' && tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[0][0] == tabuleiro[2][2]) {
//     return 1;
//   }
//   if (tabuleiro[0][2] != ' ' && tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[0][2] == tabuleiro[2][0]) {
//     return 1;
//   }

//   return 0;
// }

// int verificaEmpate() {
//   int i, j;
//   for (i = 0; i < TAMANHO; i++) {
//     for (j = 0; j < TAMANHO; j++) {
//       if (tabuleiro[i][j] == ' ') {
//         return 0;
//       }
//     }
//   }
//   return 1;
// }

// void jogada(char jogador) {
//   int linha, coluna;

//   printf("Jogador %c, escolha uma posição (linha e coluna): ", jogador);
//   scanf("%d %d", &linha, &coluna);

//   if (linha < 1 || linha > 3 || coluna < 1 || coluna > 3 || tabuleiro[linha - 1][coluna - 1] != ' ') {
//     printf("Posição inválida. Tente novamente.\n");
//     jogada(jogador);
//     return;
//   }

//   tabuleiro[linha - 1][coluna - 1] = jogador;
// }

// int main() {
//   int jogadorAtual = 1;
//   char jogador = 'X';

//   inicializaTabuleiro();

//   while (1) {
//     imprimeTabuleiro();

//     jogada(jogador);

//     if (verificaVitoria()) {
//       imprimeTabuleiro();
//       printf("O jogador %c venceu!\n", jogador);
//       break;
//     } else if (verificaEmpate()) {
//       imprimeTabuleiro();
//       printf("Empate!\n");
//       break;
//     }

//     jogadorAtual = (jogadorAtual % 2) + 1; 
//     jogador = (jogadorAtual == 1) ? 'X' : 'O';
//   }

//   return 0;
// }


#include <stdio.h>
#include <stdlib.h>



// typedef struct Alunos{

//   char nome[20], RA[8];

// }aluno;

// int main(){

//   aluno teste;

//   printf("Digite seu nome\n\n--> ");
//   gets(teste.nome);

//   printf("\n\n%s",teste.nome);

//   printf("\n\nDigite seu RA:\n\n--> ");
//   gets(teste.RA);

//   printf("\n\n%s",teste.RA);
// }

// typedef struct horas{

//   int hora, mnt,sgnd;

// }horas;

// typedef struct data{

//   int dia, mes, ano;
// }data;

// typedef struct compromisso{
  
//   char desc[100];
//   horas horas;
//   data data;

// }compromisso;

//~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~//
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// typedef struct {
//     char nome[50];
//     int matricula;
//     char curso[50];
// } Aluno;

// int main() {
//     Aluno aluno[5];
//     int i;

//     for (i = 0; i < 5; i++) {
//         printf("\nDigite o nome do aluno:\n\n--> ");
//         fgets(aluno[i].nome, 50, stdin);
//         aluno[i].nome[strcspn(aluno[i].nome, "\n")] = '\0';

//         printf("\nDigite a matricula do aluno:\n\n--> ");
//         scanf("%d", &aluno[i].matricula);
//         while (getchar() != '\n'); 

//         printf("\nDigite o curso do aluno:\n\n--> ");
//         fgets(aluno[i].curso, 50, stdin);
//         aluno[i].curso[strcspn(aluno[i].curso, "\n")] = '\0';
//     }

//     printf("\n    Dados dos Alunos    \n");
//     for (i = 0; i < 5; i++) {
//         printf("\nAluno %d:\n", i + 1);
//         printf("\nNome: %s\n", aluno[i].nome);
//         printf("\nMatrícula: %d\n", aluno[i].matricula);
//         printf("\nCurso: %s\n", aluno[i].curso);
//         printf("\n");
//     }

//     return 0;

//}
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// typedef struct {
//     char nome[50];
//     char matricula[10];
//     char curso[50];
//     float nota1,nota2,nota3,media;
// } Aluno;

// int main(){

//     Aluno al1,al2,al3,al4,al5;
//     float media1,media2,media3,media4,media5;
//     int i;
        
//     printf("Digite o nome do aluno:\n\n--> ");
//     fgets(al1.nome, 50, stdin);
//     al1.nome[strcspn(al1.nome, "\n")] = '\0';
//     printf("\nDigite a matricula do aluno:\n\n--> ");
//     fgets(al1.matricula, 10, stdin);
//     al1.matricula[strcspn(al1.matricula, "\n")] = '\0';
//     printf("\nDigite o curso do aluno:\n\n--> ");
//     fgets(al1.curso, 50, stdin);
//     al1.curso[strcspn(al1.curso, "\n")] = '\0';
//     printf("\nDigite a nota 1 do aluno:\n\n--> ");
//     scanf("%f", &al1.nota1);
    
        
        
    

//     }

