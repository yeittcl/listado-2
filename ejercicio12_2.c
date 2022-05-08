#include <stdio.h>

int main(){
//n el numero de autos que pueden pasar
//k el tiempo transcurrido
//cars es cuantos autos quedan
//mat es un array que guarda cuantos autos hay en cada minuto
  int n,k,cars=0;
  scanf("%d",&n);
  scanf("%d",&k);
  int mat[k];

//rellendando el array
  for(int i=0;i<k;++i){
    scanf("%d",&mat[i]);
  }

//recorro la matriz, si el numero de autos es menor que los que puedes pasar, los autos quedan en 0
//Si es mayor a la que pasan, se restan y se le suman a la cantidad de autos siguiente y se vuelve a iterar para seguir restando si es posible
  for(int i=0;i<k;++i){
    cars=cars+mat[i];
    if(cars>=n){
      cars=cars-n;
    }else{
      cars=cars-cars;
    }
  }
  
//Output la cantidad de autos que quedan alfinal
  printf("%d",cars );
  return(0);
}
