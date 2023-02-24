//Escribe un programa que pida al usuario un valor. 
//Si éste es positivo, deberá calcular la suma de todos los números impares entre 0 y el número. 
//Si el número es negativo, deberá calcular la suma de todos los números impares entre el número y 0.
#include <stdio.h>
int main()
{
int limite,i,suma;
  suma=0;
  printf("Escribe el limite superior\n");
  scanf("%d",&limite);
  if(limite>0){
    for(i=1;i<=limite;i+=2)
      {
        
        suma+=i;
        printf("%d\t",i);
        }
    printf("\nLa suma de los numeros impares son %d",suma);
    }
  else if(limite<0){
    for(i=-1;i>=limite;i-=2)
      {
        suma+=i;
        printf("%d\t",i);
        }
    printf("\nLa suma de los numeros inpares son %d",suma);
    }
  else
    printf("numero 0");

  }
