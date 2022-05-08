//Raul Zapata Villalobos - 2019900803
//Ejercicio resuelto individualmente

#include <stdio.h>

int main(){
  //Entrada de numero n
  int n;
  printf("Ingrese un numero:\n");
  scanf("%d",&n);
  int absisas[n], ordenada[n];//Un arreglo para cada eje
  //Rellenando los arreglos
  for(int i =0; i<n; ++i){
    printf("Ingrese su coordenada x,y\n");
    scanf("%d %d",&absisas[i], &ordenada[i]);
  }
  //ordenando el arreglo de menos a mayor
  for(int i=0,min,aux;i<n;++i){
    min=i;
    for(int j=i+1;j<=n-1;++j){
      if(absisas[j]<absisas[min]){
        min=j;
      }
    }
    aux=absisas[min];
    absisas[min]=absisas[i];
    absisas[i]=aux;
  }
  //ordenando el arreglo de menor a mayor
  for(int i=0,min,aux;i<n;++i){
    min=i;
    for(int j=i+1;j<=n-1;++j){
      if(ordenada[j]<ordenada[min]){
        min=j;
      }
    }
    aux=ordenada[min];
    ordenada[min]=ordenada[i];
    ordenada[i]=aux;
  }

  //Sacando el punto medio
  int puntoMediox,puntoMedioy;
  puntoMediox=absisas[n-1]-absisas[0];
  puntoMedioy=ordenada[n-1]-ordenada[0];
  //Salida
  printf("%d %d\n",puntoMediox, puntoMedioy );

}
