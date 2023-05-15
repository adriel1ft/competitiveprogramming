#include <stdio.h>
#include <stdlib.h>

void comparar(int array [], int tamanho){
  int count = 0;

  for(int i=0;i<tamanho;i++){
    if(array[i] != array[i+1]){
    count++;}
  }
  printf("%d\n",count);
}

int main(void) {
  int n, i;
  int* array;

  scanf("%d",&n);

  array = (int *) malloc(n*sizeof(int));

  for(i=0;i<n;i++){
    scanf("%d",&array[i]);
  }

  comparar(array, n);

  free(array);
  return 0;
}