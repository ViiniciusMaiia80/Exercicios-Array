#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main(void){
	int numero[SIZE];
	srand(time(NULL));

	for(int i=0;i<SIZE;i++){
		numero[i]=1+rand()%25;
		}
	
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