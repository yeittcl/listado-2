//Raul Zapata Villalobos - 2019900803
//Ejercicio resuelto individualmente

#include <stdio.h>

int main(){
  int cantidad;
//Verificacion de entrada
  do {
    printf("Ingrese un numero no negativo:\n");
    scanf("%d",&cantidad);
  } while(cantidad<=0);
//Rellenando mi array
  int v[cantidad-1];
  for(int i=0;i<cantidad;++i){
    printf("Ingrese sus numeros:\n");
    scanf("%d",&v[i]);
  }
//Ordeno mi array de menor a mayor
  for(int i=0,min,aux;i<cantidad;++i){
    min=i;
    for(int j=i+1;j<=cantidad-1;++j){
      if(v[j]<v[min]){
        min=j;
      }
    }
    aux=v[min];
    v[min]=v[i];
    v[i]=aux;
  }
//Calculando el promedio con un ciclo
  int prom=0, mediana;
  for(int i=0;i<cantidad;++i){
    prom = prom + v[i];
  }
//Ocupando la definicion de mediana en caso de que n sea Impar
  if(cantidad%2!=0){
    mediana=v[(cantidad-1)/2];
//Ocupando la definicion de la mediana en caso de que n sea par
  }else{
    mediana=(v[cantidad/2]+v[(cantidad/2)-1])/2;
  }

  printf("El minimo es: %d\n",v[0]);
  printf("El Maximo es: %d\n",v[cantidad-1]);
  printf("El primedio es: %d\n",prom/cantidad);
  printf("La mediana es: %d\n",mediana );

  return(0);
}
