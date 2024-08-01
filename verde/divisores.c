// Um pesquisador precisa saber o número de divisores de um número dado. Por exemplo, 660 tem 24 divisores: 1, 2, 3, 4, 5, 6, 10, 11, 12, 15, 20, 22, 30, 33, 44, 55, 60, 66, 110, 132, 165, 220, 330, 660.

// A fatoração de 660 em fatores primos é: 22 x 3 x 5 x 11. Então o número de divisores é calculado pelo produtos dos expoentes acrescentados de um: (2 + 1) x (1 + 1) x (1 + 1) x (1 + 1) = 24.

// Um outro exemplo é o número 50, que tem 6 divisores. De fato, 50 = 2 x 52, portanto o número de divisores é (1+1) x (2+1) = 6.

// Entrada: A entrada consiste de uma linha contendo um inteiro N. Saida: Seu programa deve escrever uma única linha na saída, contendo um único número inteiro, a quantidade de divisores de N.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a integer number: ");
    scanf("%d",&n);

    return 0;
}