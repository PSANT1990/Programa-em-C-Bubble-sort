#include <stdio.h>
int vetor[10000];
int Qtd;

void bubbleSort() {
  float aux;
  for (int i=0; i<Qtd-1; i++)
    for (int j=0; j<Qtd-1 -i; j++)
      if (vetor[j] > vetor[j+1]){
        aux = vetor[j];
        vetor[j] = vetor[j+1];
        vetor[j+1] = aux;
      }
  }
  
int main(){
int i;
	printf("Quantos n deseja ordenar:");
	scanf("%i",&Qtd);

	for (i=0; i<Qtd; i++) {
	  printf("informe o %i. numero: ",i+1);
	  scanf("%d", &vetor[i]);	
	}

	for(i=0; i<Qtd; i++)  
	  printf("%i, ", vetor[i]);  
	                     
	bubbleSort();
	
	printf("\n Agora o vetor ordenado... \n");
	
	for(i=0; i<Qtd; i++)  
	  printf("%i, ", vetor[i]);
 			
}

