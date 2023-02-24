//3.Escribe un programa que simule el lanzamiento de un dado.
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int veces,ran,j,valor,contador1,contador2,contador3,contador4,contador5,contador6;
contador1=0;
contador2=0;
contador3=0;
contador4=0;
contador5=0;
contador6=0;
  
  time_t time1;
  srand((unsigned)time(&time1));

  printf("Cuantas veces quieres lanzar el dado?\n");
  scanf("%d",&veces);

  printf("Que valor te interesa\n");
  scanf("%d",&valor);

  if(valor>=7 || valor<=0)
    printf("Error ese valor no aparece en el dado");
  else
  {
    for(j=1;j<=veces;j++)
      {
        ran=(rand()%6)+1;
        printf("\n%d",ran);
        if(ran==1)
          contador1++;
        else if(ran==2)
        contador2++;
        else if(ran==3)
        contador3++;
        else if(ran==4)
          contador4++;
        else if(ran==5)
          contador5++;
        else
          contador6++;
        }
    if(valor==1)
      printf("\n=>El %d cayo %d veces<=",valor,contador1);
    else if(valor==2)
       printf("\n=>El %d cayo %d veces<=",valor,contador2);
    else if(valor==3)
       printf("\n=>El %d cayo %d veces<=",valor,contador3);
    else if(valor==4)
       printf("\n=>El %d cayo %d veces<=",valor,contador4);
    else if(valor==5)
       printf("\n=>El %d cayo %d veces<=",valor,contador5);
    else
       printf("\n=>El %d cayo %d veces<=",valor,contador6);
    }
}
