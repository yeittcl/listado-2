#include <stdio.h>

int main(){
//n numero de grupos
//k cantidad de androides en un grupo

  int n,k;
  scanf("%d",&n);
  scanf("%d",&k);
  
//booma es un array que guarda la cantidad de boomas para cada grupo
//survivors son los androides vivos, boomaLefts las bombas que quedaron
  int booma[n];
  int survivors=0, boomaLeft=0;

//Rellenando el array
  for(int i=0;i<n;++i){
    scanf("%d",&booma[i]);
  }

//ciclo que recorre el array y compara cada elemento con la cantidad de androides
  for(int i=0;i<n;++i){
//Si la cantidad de bombas es mayor a la de androides, sobraran bombas
    if(booma[i]>=k){
      boomaLeft+=(booma[i]-k);
    }
//Si la cantidad de bombas es menor a la de andorides, quedaran androides vivos
    if(booma[i]<k){
      survivors+=(k-booma[i]);
    }
  }
  
//Output de sobrevivientes y bombas que quedaron
  printf("%d %d",boomaLeft, survivors);
}
