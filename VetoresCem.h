#ifndef ORDENACAO_VETORESCEM_H
#define ORDENACAO_VETORESCEM_H

#define CEM 100

#include <stdlib.h>

int * VetorOrdenadoDeCem()
{
    int *vetor = (int *) malloc(sizeof(int) * CEM);

    for (int i = 0; i < CEM; i++)
    {
        vetor[i] = i;
    }
    return vetor;
}

int * VetorOrdenadoDeCem__Decrescente()
{
    int *vetor = (int *) malloc(sizeof(int) * CEM);

    for (int i = 0; i < CEM ; i++)
    {
        vetor[i] = CEM - i;
    }

    return vetor;
}

int * VetorAleatorioDeCem()
{
    int *vetor = (int *) malloc(sizeof(int) * CEM);

    for (int i = 0; i < CEM; i++)
    {
        vetor[i] = -100 + rand() % 200 + 1;
    }

    return vetor;
}

#endif //ORDENACAO_VETORESCEM_H
