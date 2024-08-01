// Escreva uma programa que leia um número e retorne se esse número é primo ou não.

// Entrada: Uma linha contendo um número inteiro.

// Saida: O texto "Primo" ou "Nao primo"
//prime numbers: 1 (2) (3) 4 (5) 6 (7) 8 9

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);

    if(((n%2!=0)&&(n%3!=0))||(n==2)||(n==3))
    {
        printf("Primo");
    }
    else
    {
        printf("Nao primo");
    }

    return 0;
}