#ifndef ORDENACAO_HEAPSORT_H
#define ORDENACAO_HEAPSORT_H

int HeapSort(int *vetor, int tamanho)
{
    int i = tamanho / 2, pai, filho, t;

    int quantidadeTrocas = 0;

    while(1)
    {
        if(i > 0)
        {
            i--;
            t = vetor[i];
        }
        else
        {
            tamanho--;
            if(tamanho == 0)
                return quantidadeTrocas;
            t = vetor[tamanho];
            vetor[tamanho] = vetor[0];
            quantidadeTrocas++;
        }

        pai = i;
        filho = i * 2 + 1;

        while(filho < tamanho)
        {
            if((filho + 1 < tamanho) && (vetor[filho + 1] > vetor[filho]))
                filho++;

            if(vetor[filho] > t)
            {
                vetor[pai] = vetor[filho];
                pai = filho;
                filho = pai * 2 + 1;
                quantidadeTrocas++;
            }
            else
            {
                 break;
            }
        }
        vetor[pai] = t;
    }
}

#endif //ORDENACAO_HEAPSORT_H
