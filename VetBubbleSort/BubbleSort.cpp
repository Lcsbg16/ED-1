//BubbleSort.cpp
#include "BubbleSort.h"
void swap(int* a,int* b)
{
   	int aux = *a;
    *a = *b;
    *b = aux;
}

void BubbleSort(int *vetor, int size)
{
	for(int i = 0; i < size - 1; i++){
		for( int j = 0; j < size - i - 1; j++){
			if(vetor[j] > vetor[j+1]){
				swap(&vetor[j],&vetor[j+1]);
			}
		}
	}
}
