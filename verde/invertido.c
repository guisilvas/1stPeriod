// Escreva um programa que receba um número inteiro e imprima os dígitos desse número na ordem inversa.

// Por exemplo, considerando que o número lido foi 4321, deve-se imprimir 1234.

// Entrada: Um número inteiro.

// Saída: Um numero inteiro com os dígitos na ordem inversa.

// Observação: Não pode usar array.
// 5255

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d",&x);

    while(x>0)
    {
        printf("%d",x%10);
        x=(x/10);
    }

    return 0;
}