#ifndef ORDENACAO_VETORESDEUMMILHAO_H
#define ORDENACAO_VETORESDEUMMILHAO_H

#include <stdlib.h>
#define UM_MILHAO 1000000

int * VetorOrdenadoDeUmMilhao()
{
    int *vetor = (int *) malloc(sizeof(int) * UM_MILHAO);

    for (int i = 0; i < UM_MILHAO; i++)
    {
        vetor[i] = i;
    }
    return vetor;
}

int * VetorOrdenadoDeUmMilhao__Decrescente()
{
    int *vetor = (int *) malloc(sizeof(int) * UM_MILHAO);

    for (int i = 0; i < UM_MILHAO ; i++)
    {
        vetor[i] = UM_MILHAO - i;
    }

    return vetor;
}

int * VetorAleatorioDeUmMilhao()
{
    int *vetor = (int *) malloc(sizeof(int) * UM_MILHAO);

    for (int i = 0; i < UM_MILHAO; i++)
    {
        vetor[i] = (-1000 + rand() % 2001) * 1000;
    }

    return vetor;
}


#endif //ORDENACAO_VETORESDEUMMILHAO_H
