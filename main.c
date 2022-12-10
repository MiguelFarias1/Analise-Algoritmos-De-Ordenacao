#include <time.h>
#include <stdio.h>
#include "MergeSort.h"
#include "QuickSort.h"
#include "HeapSort.h"
#include "VetoresDezMil.h"
#include "VetoresCem.h"
#include "VetoresDeUmMIlhao.h"
#include <locale.h>

void TempoDeExecucaoMergeSort(int *vetor, int tamanho, char tipoVetor[])
{
    clock_t inicio, fim;
    double tempoDeExecucao;

    inicio = clock();
    int quantidadesTrocas = 0 ;
    MergeSort(vetor, 0, tamanho - 1, &quantidadesTrocas);
    fim = clock();

    tempoDeExecucao = (double) (fim - inicio) / CLOCKS_PER_SEC;

    printf("\nTempo de execução do MergeSort para um vetor de tamanho %d e %s: %lf\n",
           tamanho, tipoVetor, tempoDeExecucao);

    printf("Quantidade de trocas: %d\n", quantidadesTrocas);
}

void TempoDeExecucaoQuickSort(int *vetor, int tamanho, char tipoVetor[])
{
    clock_t inicio, fim;
    double tempoDeExecucao;

    inicio = clock();
    int quantidadesTrocas = 0;
    QuickSort(vetor, 0, tamanho - 1, &quantidadesTrocas);
    fim = clock();

    tempoDeExecucao = (double) (fim - inicio) / CLOCKS_PER_SEC;

    printf("\nTempo de execução do QuickSort para um vetor de tamanho %d e %s: %lf\n",
           tamanho, tipoVetor, tempoDeExecucao);

    printf("Quantidade de trocas: %d\n", quantidadesTrocas);
}

void TempoDeExecucaoHeapSort( int *vetor, int tamanho, char tipoVetor[])
{
    clock_t inicio, fim;
    double tempoDeExecucao;

    inicio = clock();
    int quantidadesTrocas = HeapSort(vetor, tamanho);
    fim = clock();

    tempoDeExecucao = (double) (fim - inicio) / CLOCKS_PER_SEC;

    printf("\nTempo de execução do HeapSort para um vetor de tamanho %d e %s: %lf\n",
           tamanho, tipoVetor, tempoDeExecucao);

    printf("Quantidade de trocas: %d\n", quantidadesTrocas);
}

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Portuguese");

    int *vetorOrdenadodeCem = VetorOrdenadoDeCem();
    int *vetorOrdenadodeCemDecrescente = VetorOrdenadoDeCem__Decrescente();
    int *vetorAleatoriodeCem = VetorAleatorioDeCem();
    int *vetorAleatoriodeCem2 = vetorAleatoriodeCem;
    int* vetorAleatoriodeCem3 = vetorAleatoriodeCem;

    // Criei copias dos vetores aleatorios para que cada algoritmo possa ordenar o mesmo vetor !
    // Caso contrario, cada algoritmo ordenaria um vetor diferente, o que nao seria correto.

    int *vetorOrdenadodeDezMil = VetorOrdenadoDeDezMil();
    int *vetorOrdenadodeDezMilDecrescente = VetorOrdenadoDeDezMil__Decrescente();
    int *vetorAleatoriodeDezMil = VetorAleatorioDeDezMil();
    int *vetorAleatoriodeDezMil2 = vetorAleatoriodeDezMil;
    int* vetorAleatoriodeDezMil3 = vetorAleatoriodeDezMil;

    int *vetorOrdenadodeUmMilhao = VetorOrdenadoDeUmMilhao();
    int *vetorOrdenadodeUmMilhaoDecrescente = VetorOrdenadoDeUmMilhao__Decrescente();
    int *vetorAleatoriodeUmMilhao = VetorAleatorioDeUmMilhao();
    int *vetorAleatoriodeUmMilhao2 = vetorAleatoriodeUmMilhao;
    int* vetorAleatoriodeUmMilhao3 = vetorAleatoriodeUmMilhao;

    // Vetores de cem
    for (int i = 0; i < 3; i++)
    {
        if(i == 0)
        {
            printf("\n\nVetor Ordenado de Cem !\n");
            TempoDeExecucaoMergeSort(vetorOrdenadodeCem, CEM, "ordenado");
            TempoDeExecucaoQuickSort(vetorOrdenadodeCem, CEM, "ordenado");
            TempoDeExecucaoHeapSort(vetorOrdenadodeCem, CEM, "ordenado");
        }
        else if(i == 1)
        {
            printf("\n\nVetor Ordenado de Cem Decrescente !\n");
            TempoDeExecucaoMergeSort(vetorOrdenadodeCemDecrescente, CEM, "ordenado decrescente");
            TempoDeExecucaoQuickSort(vetorOrdenadodeCemDecrescente, CEM, "ordenado decrescente");
            TempoDeExecucaoHeapSort(vetorOrdenadodeCemDecrescente, CEM, "ordenado decrescente");
        }
        else if(i == 2)
        {
            printf("\n\nVetor Aleatório de Cem !\n");
            TempoDeExecucaoMergeSort(vetorAleatoriodeCem, CEM, "aleatório");
            TempoDeExecucaoQuickSort(vetorAleatoriodeCem2, CEM, "aleatório");
            TempoDeExecucaoHeapSort(vetorAleatoriodeCem3, CEM, "aleatório");
        }
    }

    // Vetores de dez mil
    for(int i = 0; i < 3; i++)
    {
        if(i == 0)
        {
            printf("\n\nVetor Ordenado de Dez Mil !\n");
            TempoDeExecucaoMergeSort(vetorOrdenadodeDezMil, DEZ_MIL, "ordenado");
            TempoDeExecucaoQuickSort(vetorOrdenadodeDezMil, DEZ_MIL, "ordenado");
            TempoDeExecucaoHeapSort(vetorOrdenadodeDezMil, DEZ_MIL, "ordenado");
        }
        else if(i == 1)
        {
            printf("\n\nVetor Ordenado de Dez Mil Decrescente !\n");
            TempoDeExecucaoMergeSort(vetorOrdenadodeDezMilDecrescente, DEZ_MIL, "ordenado decrescente");
            TempoDeExecucaoQuickSort(vetorOrdenadodeDezMilDecrescente, DEZ_MIL, "ordenado decrescente");
            TempoDeExecucaoHeapSort(vetorOrdenadodeDezMilDecrescente, DEZ_MIL, "ordenado decrescente");
        }
        else if(i == 2)
        {
            printf("\n\nVetor Aleatório de Dez Mil !\n");
            TempoDeExecucaoMergeSort(vetorAleatoriodeDezMil, DEZ_MIL, "aleatório");
            TempoDeExecucaoQuickSort(vetorAleatoriodeDezMil2, DEZ_MIL, "aleatório");
            TempoDeExecucaoHeapSort(vetorAleatoriodeDezMil3, DEZ_MIL, "aleatório");
        }
    }

    // Vetores de um milhão
    for(int i = 0; i < 3; i++)
    {
        if(i == 0)
        {
            printf("\n\nVetor Ordenado de Um Milhão !\n");
            TempoDeExecucaoMergeSort(vetorOrdenadodeUmMilhao, UM_MILHAO, "ordenado");
            TempoDeExecucaoQuickSort(vetorOrdenadodeUmMilhao, UM_MILHAO, "ordenado");
            TempoDeExecucaoHeapSort(vetorOrdenadodeUmMilhao, UM_MILHAO, "ordenado");
        }
        else if(i == 1)
        {
            printf("\n\nVetor Ordenado de Um Milhão Decrescente !\n");
            TempoDeExecucaoMergeSort(vetorOrdenadodeUmMilhaoDecrescente, UM_MILHAO, "ordenado decrescente");
            TempoDeExecucaoQuickSort(vetorOrdenadodeUmMilhaoDecrescente, UM_MILHAO, "ordenado decrescente");
            TempoDeExecucaoHeapSort(vetorOrdenadodeUmMilhaoDecrescente, UM_MILHAO, "ordenado decrescente");
        }
        else if(i == 2)
        {
            printf("\n\nVetor Aleatório de Um Milhão !\n");
            TempoDeExecucaoMergeSort(vetorAleatoriodeUmMilhao, UM_MILHAO, "aleatório");
            TempoDeExecucaoQuickSort(vetorAleatoriodeUmMilhao2, UM_MILHAO, "aleatório");
            TempoDeExecucaoHeapSort(vetorAleatoriodeUmMilhao3, UM_MILHAO, "aleatório");
        }
    }

    return 0;
}