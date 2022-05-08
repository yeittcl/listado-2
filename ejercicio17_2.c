//Raul Zapata Villalobos - 2019900803
//Ejercicio resuleto individualmente
//Usuario Timus: Raul Zapata

#include <stdio.h>

int main(){
  //Entrada
  int n;
  scanf("%d",&n);
  int monitor[n][n];
  int count=0,count2=1;

  //Rellenando la matriz
  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      scanf("%d",&monitor[i][j]);
    }
  }
  //While que va tomando la cantidad de diagonales de la matriz
  while (count<=((n-1)*2)+1){
    if(count<n){
      //Las primeras diagonales antes de la diagonal del centro
      for(int i=count,j=0;i>=0;--i,++j){
          printf("%d ",monitor[i][j]);
      }
    }
    if(count>=n){
      //Las ultimas diagonales despues de la diagonal del centro
      for(int k=count2, s=n-1; s>=count2;++k,--s){
        printf("%d ",monitor[s][k]);
      }
      ++count2;
    }
    ++count;
  }

  return(0);
}
