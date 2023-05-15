#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int i, ealbum, n_fig_carimbada, n_fig_comprada;
  int *array_fig_carimbada, *array_fig_comprada;
  
  cin >> ealbum >> n_fig_carimbada  >> n_fig_comprada;

  //definindo tamanho dos arrays

  array_fig_carimbada = new int[n_fig_carimbada];
  array_fig_comprada = new int [n_fig_comprada];

  for(i=0;i<n_fig_carimbada;i++){
    cin >> array_fig_carimbada[i];
  }

  for(i=0;i<n_fig_comprada;i++){
    cin >> array_fig_comprada[i];
  }

  sort(array_fig_comprada,array_fig_comprada+n_fig_comprada);

  int count =0;
  for(i=0; i <n_fig_carimbada; i++){
    if(!binary_search(array_fig_comprada, array_fig_comprada+n_fig_comprada,array_fig_carimbada[i])){
      count++;
    }
  } 
  
  cout << count << endl;

  delete[] array_fig_comprada;
  delete [] array_fig_carimbada;
    return 0;

}
