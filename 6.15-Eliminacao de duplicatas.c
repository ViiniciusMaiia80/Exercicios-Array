#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

void gerarNumerosAleatorios(int[]);
int main(void){
	int numero[SIZE];
	srand(time(NULL));

	gerarNumerosAleatorios(numero);
	
	for(int i=0;i<SIZE;i++){
		int ehDuplicata=0;
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
	
	return 0;
}

void gerarNumerosAleatorios(int numero[]){
	for(int i=0;i<SIZE;i++){
		numero[i]= 10+rand()%100;
	}
}