#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n,i,result,count=1;
  int* array;
  int* array_result;

  scanf("%d", &n);
  
  array = (int*) malloc(n*sizeof(int));
  array_result = (int*) malloc(n*sizeof(int));

  for(i=0;i<n;i++){
    scanf("%d",&array[i]);
  }

  for(i=0;i<n-1;i++){  
    array_result[i] = (array[i] - array[i+1]); 
  }

  for(i=0;i<n-2;i++){  
    if(array_result[i]!=array_result[i+1]){
      count++;
    }
  }

  printf("%d\n",count);

  free(array);
  free(array_result);

  return 0;
}
