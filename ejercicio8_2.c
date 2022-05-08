#include <stdio.h>

int main(){
  int n;
//Verificacion de entrada
  do {
    printf("Ingrese un numero mayor a 0:\n");
    scanf("%d",&n);
  } while(n<0);

//Creacion del vector
  int vector[n*2];
  for(int i=0;i<(n*2);i=i+2){
    printf("Rellene con coordenadas del tipo (x y):\n");
    scanf("%d %d",&vector[i],&vector[i+1]);
  }

//Como el vector esta de manera [x1,y1,x2,y2...xn,yn], se debe ordenar en pares a la vez
  for(int i=0,aux,auxy;i<(n*2);i=i+2){
    int minx=i, miny=i+1;
//Ordenando el vector de menor a mayor, una variable para cada menor en x, y
    for(int j=i+2;j<(n*2);j=j+2){
      if((vector[j]<vector[minx])||(vector[j+1]<vector[miny])){
        minx=j;
        miny=j+1;
      }
    }
//Swap para x, swap para y
    aux=vector[minx];
    auxy=vector[miny];
    vector[minx]=vector[i];
    vector[miny]=vector[i+1];
    vector[i]=aux;
    vector[i+1]=auxy;
  }
//imprimiendo en pantalla
  for(int i=0;i<n*2;i=i+2){
    printf("%d %d\n",vector[i],vector[i+1]);
  }
  return(0);

}
