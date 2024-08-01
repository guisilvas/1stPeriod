// Escreva um programa que receba dois números inteiros e imprima todos os números primos entre os números recebidos.

// O primeiro número lido deve ser menor que o segundo.

// Número primo
// Um número é classificado como primo se ele é maior do que um e é divisível apenas por um e por ele mesmo. Apenas números naturais são classificados como primos.

// Entrada: dois valores inteiros.

// Saida: Um linha contendo todos números primos no intervalo.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1, x2;
    scanf("%d %d",&x1,&x2);

    for(int i=x1+1;i<x2;++i)
    {
        if((i==2)||(i==3)||((i%2!=0)&&(i%3!=3)))
        {
            printf("%d ",i);
        }
    }

    return 0;
}