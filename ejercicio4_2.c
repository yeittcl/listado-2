//Raul Zapata Villalobos - 2019900803
//Ejercicio resuelto individualmente

#include <stdio.h>

int main(){
  /*Divisores es mi badera para saber si un numero es primo o no*/
  int n,divisor=0;
  //Verificacion de entrada,los numeros primos solo son naturales
  do {
    printf("Ingrese un numero natural:\n");
    scanf("%d",&n);
  } while(n<=0);

  /*Ciclo para saber cuantos divisores tiene cada numero*/
  for(int i=1;i<=n;++i){
    if(n%i==0){
      divisor=divisor+1;
    }
  }
  /*Como los numeros primos solo tienen 2 divisores
  si es asi es primo, si no es Compuesto*/
  if(divisor>2){
    printf("Compuesto\n");
  }else{
    printf("Primo\n");
  }
  return(0);
}
