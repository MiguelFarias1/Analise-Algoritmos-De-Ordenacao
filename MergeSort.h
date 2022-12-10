#ifndef ORDENACAO_MERGESORT_H
#define ORDENACAO_MERGESORT_H

#include <stdlib.h>

void MergeSort(int *vetor, int inicio, int fim, int *quantidadesTrocas)
{
    int meio, i, j, k;
    int *vetorTemp;

    if(inicio == fim) return;

    meio = (inicio + fim) / 2;

    MergeSort(vetor, inicio, meio, &*quantidadesTrocas);
    MergeSort(vetor, meio + 1, fim, &*quantidadesTrocas);

    i = inicio;
    j = meio + 1;
    k = 0;

    vetorTemp = (int *) malloc(sizeof(int) * (fim - inicio + 1));

    while(i < meio + 1 || j  < fim + 1)
    {
        if (i == meio + 1 )
        {
            vetorTemp[k] = vetor[j];
            j++;
            k++;
        }
        else
        {
            if (j == fim + 1)
            {
                vetorTemp[k] = vetor[i];
                i++;
                k++;
            }
            else
            {
                if (vetor[i] < vetor[j])
                {
                    vetorTemp[k] = vetor[i];
                    i++;
                    k++;
                }
                else
                {
                    vetorTemp[k] = vetor[j];
                    j++;
                    k++;
                }
            }
        }
    }

    for(i = inicio; i <= fim; i++)
    {
        vetor[i] = vetorTemp[i - inicio];
        *quantidadesTrocas = *quantidadesTrocas + 1;
    }

    vetorTemp = NULL;

    free(vetorTemp);
}

#endif //ORDENACAO_MERGESORT_H
