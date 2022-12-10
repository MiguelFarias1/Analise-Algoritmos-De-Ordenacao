#ifndef ORDENACAO_VETORESDEZMIL_H
#define ORDENACAO_VETORESDEZMIL_H

#include <stdlib.h>
#define DEZ_MIL 10000

int * VetorOrdenadoDeDezMil()
{
    int *vetor = (int *) malloc(sizeof(int) * DEZ_MIL);

    for (int i = 0; i < DEZ_MIL; i++)
    {
        vetor[i] = i;
    }
    return vetor;
}

int * VetorOrdenadoDeDezMil__Decrescente()
{
    int *vetor = (int *) malloc(sizeof(int) * DEZ_MIL);

    for (int i = 0; i < DEZ_MIL ; i++)
    {
        vetor[i] = DEZ_MIL - i;
    }

    return vetor;
}

int * VetorAleatorioDeDezMil()
{
    int *vetor = (int *) malloc(sizeof(int) * DEZ_MIL);

    for (int i = 0; i < DEZ_MIL; i++)
    {
        vetor[i] = -DEZ_MIL + rand() % (2 * DEZ_MIL + 1);
    }

    return vetor;
}

#endif //ORDENACAO_VETORESDEZMIL_H
