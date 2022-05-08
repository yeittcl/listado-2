//Raul Zapata Villalobos - 2019900803
//Ejercicio resuelto individualmente

#include <stdio.h>

int main(){
  int n, final=0;
//verificacion de entrada
  do {
    printf("Ingrese un numero entero:\n");
    scanf("%d",&n);
  } while(n<0);
//la suma de fibonacci es la suma de los dos numeros anteriores
  for(int i=0,first=0,second=1;i<n;++i){
    final=first + second;
    first=second;
    second=final;
    printf("%d\n",final);
  }
  return(0);
}
