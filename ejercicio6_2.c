#include <stdio.h>

int main(){
  int n;
  //Verificacion de entrada
  do {
    printf("Ingrese un numero entero no negativo:\n");
    scanf("%d",&n);
  } while(n<0);


/*Creo dos vectores, el vector v1 guardara la primera linea del triangulo [1,0,..0]
el segundo vector sera de solo 0s [0,0,0...0] y sera para guardar la suma del anterior*/
  int v1[n+1],v2[n+1];
  for(int i=0;i<=n;++i){
    if(i==0){
      v1[i]=1;
    }else{
      v1[i]=0;
    }
    v2[i]=0;
  }

/*El primer ciclo es para el numero del triangulo que se quiere saber*/
  for(int i=0;i<n;++i){
/*El segundo ciclo hace la suma del array anterior, segun la deficion de triangulo de pascal
y guarda las sumas en el segundo array, el que originalmente era de 0*/
    for(int j=0;j<=n;++j){
//Condicional para que el primer elemento del array sea siempre un 1
      if(j==0){
        v2[j]=v1[0];
      }else{
        v2[j]=v1[j-1]+v1[j];
      }
    }
/*Tercer ciclo que imprime el segundo array, de manera fancy*/
    for(int k=0;k<=n;++k){
      printf("%d ",v2[k]);
    }
    printf("\n");
/*Cuarto ciclo que sobrescribe lo del segundo array sobre el primero, asi v2 siempre recibira la suma de v1*/
    for(int s=0;s<=n;++s){
      v1[s]=v2[s];
    }
  }






}
