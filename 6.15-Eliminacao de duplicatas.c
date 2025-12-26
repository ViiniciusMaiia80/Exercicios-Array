#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

int main(void){
	int duplicado[91]={0}, num;
	srand(time(NULL));

	printf("%s", "Digite 20 elementos a seguir(Entre 10 e 100): ");
	for(int i = 0; i < SIZE;i++){
		printf("\n%s %d:","Elemento",i+1);
		scanf("%d", &num);
		if(num<10 || num>100){
			printf("Numero fora do intervalo. Digite novamente entre 10 e 100:");
			i--;
			continue;
		}
		if(duplicado[num-10]==0){
			printf("%d ", num);
			duplicado[num-10]=1;
		}else{
			printf("%s", "(duplicado)");
		}
	}
	return 0;
}

