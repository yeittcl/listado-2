#include <stdio.h>

int main(){
//Entrada
  int n;
  printf("Ingrese un numero:\n");
  scanf("%d",&n);

//Creacion del array
  int vectorOriginal[n];
  for(int i=0;i<n;++i){
    printf("Ingrese numeros a rellenar:\n");
    scanf("%d",&vectorOriginal[i]);
  }

//Ordenando el arreglo de menor a mayor
  for(int i=0,min,aux;i<n;++i){
    min=i;
    for(int j=i+1;j<=n-1;++j){
      if(vectorOriginal[j]<vectorOriginal[min]){
        min=j;
      }
    }
    aux=vectorOriginal[min];
    vectorOriginal[min]=vectorOriginal[i];
    vectorOriginal[i]=aux;
  }

//Como el array esta ordenado de menor a mayor, solo debo imprimir los pares de forma normal
  for(int i=0;i<n;++i){
    if(vectorOriginal[i]%2==0){
      printf("%d ",vectorOriginal[i]);
    }
  }
  printf("\n");

//De igual manera como esta de menor a mayor, los impares los imprimos hacia "atras" en el arreglo
  for(int i=n-1;i>=0;--i){
    if(vectorOriginal[i]%2 != 0){
      printf("%d ",vectorOriginal[i]);
    }
  }
  printf("\n");
return(0);
}
