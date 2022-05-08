#include <stdio.h>

int main(){
//n es el limite de nuestra suma
//sum guardara la suma de los numeros 

  int n;
  int sum=0;
  scanf("%d",&n);
//Si el numero es mayor a 0, entonces es una suma normal desde 1 hasta n
  if(n>0){
    for(int i=1;i<=n;++i){
      sum=sum+i;
    }
    printf("%d",sum);
  }
// si el numero es menor a 0, entonces se va sumando los numeros negativos y alfinal se le resta el 1

  if(n<0){
    for(int i=1;i>=n;--i){
      sum=sum+i;
    }
    printf("%d",sum);
  }
// si es 0, la suma da 1
  if(n==0){
    printf("1");
  }

  return(0);
}
