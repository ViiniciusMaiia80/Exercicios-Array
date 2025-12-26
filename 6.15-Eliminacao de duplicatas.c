#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

void gerarNumerosAleatorios(int[]);
void bubbleSort(int []);
void verificaDuplicata(int numero[]);

int main(void){
	int numero[SIZE];
	srand(time(NULL));

	gerarNumerosAleatorios(numero);
	bubbleSort(numero);
	verificaDuplicata(numero);

	return 0;
}

void gerarNumerosAleatorios(int numero[]){
	for(int i=0;i<SIZE;i++){
		numero[i]= 10+rand()%100;
	}
}

void bubbleSort(int numero[]){
	int troca = 0;
	do{
		troca = 0;
		int aux;
		for(int i=0;i<SIZE;i++){
			if(numero[i]>numero[i+1]){
				troca = 1;
				aux = numero[i];
				numero[i] = numero[i+1];
				numero[i+1] = aux;
			}
		}
	}while(troca == 1);
}

void verificaDuplicata(int numero[]){
	int ehDuplicata;
	for(int i=0;i<SIZE;i++){
		ehDuplicata=0;
		for(int j=0;j<i;j++){
			if(numero[i]==numero[j]){
				ehDuplicata=1;
				break;
			}

		}
		if(ehDuplicata==0){
			printf("%d ", numero[i]);
		}
	}
}