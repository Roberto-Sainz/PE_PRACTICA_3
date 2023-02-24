//5.Escribe un programa que muestre por separado cada una de las 6 figuras mostradas. 
//Éstas deberán generarse usando ciclos for.
#include <stdio.h>
int main()
{
int i,j,lim,k;
  lim=5;
  k=5;
  printf("\nI)\n");
  for (i=1;i<=4;i++){
  
    for(j=1;j<=10;j++)
      {
        printf("*");
        }
        printf("\n");
        }
  printf("\nII)\n");
 
/////////////////////////////////////////////////////
   for (i=1;i<=5;i++)
     {
       for(j=1;j<=i;j+=1)
         {
           printf("*");
         }
          printf("\n");  
  }
  printf("\nIII)\n");
  ////////////////////////////////////////
for(j=1;j<=lim;j++)
  {
    for(i=1;i<=lim-j;i++)
      {
        printf(" ");
        }
    for(i=1;i<=j;i+=1)
      {
        printf("*");
        }
    printf("\n");
    }
  printf("\nIV)\n");
//////////////////////////////
  for(j=1;j<=k;j++)
    {
      for(i=1;i<=k-j;i++)
        {
          printf(" ");
          }
      for(i=1;i<=2*j-1;i++)
        {
          printf("*");
          }
      printf("\n");
      }
  printf("\nV)\n");
  ////////////////////////////////////////////
for(j=1;j<=k;j++)
{
  for(i=1;i<=k-j;i++)
  {
    printf(" ");
    }
  for(i=1;i<=2*j-1;i++)
    {
      printf("%d",j);
      }
  printf("\n");
  }
  printf("\nVI)\n");
////////////////////////////////////////////////
  for(j=1;j<=k;j++)
    {
      for(i=1;i<=k-j;i++)
        {
          printf(" ");
          }
      for(i=1;i<=2*j-1;i++)
        {
          printf("=(");
          }
      printf("\n");
      }
  }
  ////////////////////////////////////////////
