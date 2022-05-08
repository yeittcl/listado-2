#include <stdio.h>

int main(){
//Entrada
  int n;
  printf("Ingrese un numero:\n");
  scanf("%d",&n);
  
//Creacion del vector
  int vector[n];
  for(int i=0;i<n;++i){
    printf("Rellene con numeros enteros:\n");
    scanf("%d",&vector[i]);
  }

//El primer elemento se mantiene, el segundo va variando dependiendo del primero y el tercero ordena los numeros que sobran
  for(int i=0;i<(n-2);++i){
    for(int j=i+1;j<n-1;++j){
      for(int s=j+1;s<n;++s){
        printf("%d %d %d\n", vector[i],vector[j],vector[s] );
      }
    }
  }

  return(0);
}
