#ifndef ORDENACAO_QUICKSORT_H
#define ORDENACAO_QUICKSORT_H

void QuickSort(int *vetor, int inicio, int fim, int* quantidades)
{
    /* Estou trabalhando com o ponteiro para quantidades para que eu possa
     * incrementar a quantidade de trocas a cada chamada recursiva do
     * QuickSort. Pois a cada nova chamdada recursiva, o valor de quantidades é 0.
     */

    int *quantidadesTrocas = quantidades;

    int pivo, aux, i, j, meio;
    i = inicio;
    j = fim;

    meio = (int) ((i + j) / 2);
    pivo = vetor[meio];

    while(j > i)
    {
        while (vetor[i] < pivo)
            i = i + 1;

        while (vetor[j] > pivo)
            j = j - 1;

        if(i <= j)
        {
            *quantidadesTrocas = *quantidadesTrocas + 1;
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
            i = i + 1;
            j = j - 1;
        }
    }

    if(inicio < j)
        QuickSort(&*vetor, inicio, j, &*quantidades);

    if(i < fim)
        QuickSort(&*vetor, i, fim,&*quantidades);


    *quantidades = *quantidadesTrocas;
}

#endif //ORDENACAO_QUICKSORT_H
