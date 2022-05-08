#include <stdio.h>

int main(){
/*Para sacar el determinante voy a ocupar la formula de leibniz,
la formula consiste en ocupar las permutaciones del numero n de una matriz nxn,
las perutaciones crean un patron, este patron las multiplica y esta se restan o suman con la sig multiplicacion.
como aun no podemos calcular una permutacion, cree una matriz con todas las permutaciones de 4 numeros.
Definicion de la formula denotamos al elemento de la matriz Aij como fila i y columna j,
la permutacion 1,0,3,2 daria el siguiente patron, A01 * A10 * A23 * A42*/

  int permutaciones[24][4]={0,1,2,3, 0,1,3,2, 0,2,3,1, 0,2,1,3, 0,3,1,2, 0,3,2,1,
                            1,0,3,2, 1,0,2,3, 1,2,0,3, 1,2,3,0, 1,3,2,0, 1,3,0,2,
                            2,0,1,3, 2,0,3,1, 2,1,3,0, 2,1,0,3, 2,3,0,1, 2,3,1,0,
                            3,0,2,1, 3,0,1,2, 3,1,0,2, 3,1,2,0, 3,2,1,0, 3,2,0,1};

//Matriz a ocupar
  int matriz[4][4];

//Una variable para almacenar las multiplicaciones de las permutaciones, y la variable determinante guarda la suma o la resta respectivamente
  int multiplicaciones=1, determinante=0;

//rellendando la matriz
  for(int i=0;i<4;++i){
    for(int j=0;j<4;++j){
      printf("Ingrese su numero de la fila %d columna %d: ",i,j);
      scanf("%d",&matriz[i][j]);
    }
  }

/*Primer ciclo que hace las 24 permutaciones*/
  for(int i=0; i<24; ++i){
/*Segundo ciclo que, toma la fila y la mentiene y las columnas son las permutaciones, caso ejemplo matriz[0][permutaciones[0][0]]== matriz[0][0]*/
    for(int j=0; j<4; ++j){
      multiplicaciones *= matriz[j][permutaciones[i][j]];
    }
/*Las permutaciones las ordenen de tal manera que, los numeros pares son los que suman la multiplicacion de las permutaciones
 y los numeros impares restan estas*/
    if(i%2 == 0){
      determinante+=multiplicaciones;
      multiplicaciones=1;
    }
    if(i%2 != 0){
      determinante-=multiplicaciones;
      multiplicaciones=1;
    }
  }
//Output del determinante
  printf("%d\n",determinante);


return(0);
}
