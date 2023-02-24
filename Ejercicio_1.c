//1.Elabora un programa que lea un número entero y muestre todos sus factores. 
#include<stdio.h>
int main(){
    int numero;
    printf("Ingresa un numero entero para encontar sus factores\n");
    scanf("%d",&numero);
    if(numero>=0){
        printf("Los factores de %d son:\n",numero);
        for(int i=1;i<=numero;i++){
            if(numero%i==0)
            printf("%d-",i);
        }
    }else{
        printf("ERROR SOLO INGRESAR NUMEROS POSITIVOS");
    }

    return 0;
}
