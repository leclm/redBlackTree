#include <stdio.h>
#include <stdlib.h>
#include "ArvoreRB.h"
#include "ArvoreRB.c"

int main() {
    ArvoreRB * raiz = cria_ArvoreRB();

    //int i, N = 7, val[7] ={20, 15, 30, 85, 50, 21, 70};
    int i, N = 9, val[9] = {11, 2, 1, 5, 4, 7, 8, 14, 15};
    //int i, N = 10, val[10] ={10, 15, 10, 20, 30, 70, 70, 85, 50, 50};

    for(i = 0; i < N; i++) {
        insere_ArvoreRB(raiz, val[i]);
    }

    emOrdem_ArvoreRB(raiz, 0);

    printf("\n\n==========================\n\n");

    remove_ArvoreRB(raiz, 4);
    emOrdem_ArvoreRB(raiz, 0);

    printf("\n\n==========================\n\n");

    remove_ArvoreRB(raiz, 1);
    emOrdem_ArvoreRB(raiz, 0);

    return 0;
}
