#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

char *mbrlh(char *plvrs) {
    int i, j, len = strlen(plvrs);

    srand(time(NULL));

    for (i = len - 1; i > 0; i--) {
        j = rand() % (i + 1);

        char temp = plvrs[i];
        plvrs[i] = plvrs[j];
        plvrs[j] = temp;
    }
    return plvrs;
}

void diff() {
    FILE *arq;
    char plvrs[100], plve[20], plvc[20], rspst[20];

    arq = fopen("dificil.txt", "r");
    int linhaes = 0, i = 0;
    if (arq) {
        while (fgets(plvrs, sizeof(plvrs), arq)) {
            linhaes++;
        }

        srand(time(NULL));
        linhaes = rand() % linhaes;

        fseek(arq, 0, SEEK_SET);
        for (int i = 0; i <= linhaes; i++) {
            fgets(plvrs, sizeof(plvrs), arq);
            strcpy(plvc, plvrs);
        }

        strcpy(plve, mbrlh(plvrs));

        fclose(arq);

        printf("Você tem cinco tentativas!:\n\n");

        while (i < 5) {
            printf("%s\n\n--> ", plve);
            scanf("%s", rspst);
            i++;

            if (strcmp(rspst, plvc) == 0) {
                printf("Acertouuuuu");
                break;
            }

            if (i == 5) {
                printf("\n\nF total\n\nA palavra era: %s",plvc);
            }
        }
    } else {
        printf("Não foi possível ler o arquivo!\n");
    }
}

void med() {
    FILE *arq;
    char plvrs[100], plve[20], plvc[20], rspst[20];
    int linhaes = 0, i = 0;

    arq = fopen("Medio.txt", "r");
    if (arq) {
        while (fgets(plvrs, sizeof(plvrs), arq)) {
            linhaes++;
        }

        srand(time(NULL));
        linhaes = rand() % linhaes;

        fseek(arq, 0, SEEK_SET);
        for (int i = 0; i <= linhaes; i++) {
            fgets(plvrs, sizeof(plvrs), arq);
            strcpy(plvc, plvrs);
        }

        strcpy(plve, mbrlh(plvrs));

        fclose(arq);

        printf("Você tem cinco tentativas!:\n\n");

        while (i < 5) {
            printf("%s\n\n--> ", plve);
            scanf("%s", rspst);
            i++;

            if (strcmp(rspst, plvc) == 0) {
                printf("Acertouuuuu");
                break;
            }

            if (i == 5) {
                printf("\n\nF total\n\n");
            }
        }
    } else {
        printf("Não foi possível ler o arquivo!\n");
    }
}

void fac() {
    FILE *arq;
    char plvrs[100], plve[20], plvc[20], rspst[20];
    int linhaes = 0, i = 0;

    arq = fopen("Facio.txt", "r");
    if (arq) {
        while (fgets(plvrs, sizeof(plvrs), arq)) {
            linhaes++;
        }

        srand(time(NULL));
        linhaes = rand() % linhaes;

        fseek(arq, 0, SEEK_SET);
        for (int i = 0; i <= linhaes; i++) {
            fgets(plvrs, sizeof(plvrs), arq);
            strcpy(plvc, plvrs);
        }

        strcpy(plve, mbrlh(plvrs));

        fclose(arq);

        printf("Você tem cinco tentativas!:\n\n");

        while (i < 5) {
            printf("%s\n\n--> ", plve);
            scanf("%s", rspst);
            i++;

            if (strcmp(rspst, plvc) == 0) {
                printf("Acertouuuuu");
                break;
            }

            if (i == 5) {
                printf("\n\nF total\n\n");
            }
        }
    } else {
        printf("Não foi possível ler o arquivo!\n");
    }
}

int main() {
    int i;

    INICIO:
    printf("Escolha:\n\n[1] Facil\n\n[2] Medio\n\n[3] Dificil\n\n--> ");
    scanf("%i", &i);

    switch (i) {
        case 1:
            fac();
            break;

        case 2:
            med();
            break;

        case 3:
            diff();
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
            goto INICIO;
            break;
    }

    return 0;
}
