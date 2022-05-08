//Raul Zapata Villalobos - 2019900803
//Ejercicio resuelto individualmente

#include <stdio.h>

int main(){
  int n, potencia=2;
//Verifiacion de entrada
  do {
    printf("Ingrese un numero no negativo:\n");
    scanf("%d",&n);
  } while(n<0);
//todo numero elevado a 0 es 1
  if(n==0)
    printf("1\n");

//Ciclo para la potencia
  for(int i=1;i<=n;++i){
    printf("%d\n",potencia);
    potencia=potencia*2;
  }
  return(0);
}
