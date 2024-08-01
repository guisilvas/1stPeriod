// Escreva um programa que leia um número N e calcule o fatorial desse valor. O fatorial de um número N é dado por N!=1⋅2⋅3⋅…⋅(N-1)⋅N

// Entrada: Um linha contendo um número inteiro.

// Saida: Um linha contendo o fatorial do número.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, a=1;
    printf("Insira um numero inteiro: ");
    scanf("%d",&N);

    while(N>0)
    {
        a*=N;
        N--;
    }
    
    printf("%d",a);

    return 0;
}