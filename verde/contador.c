// Enquanto o valor -1 não for digitado, leia os números fornecidos pelo usuário. No final, exiba quantos números foram digitados e quantas vezes o número 5 foi digitado.

// Entrada: N linhas representando números inteiros, sendo que a ultima linha é número -1. (invalido).

// Saída: Uma linha contendo o total de números digitados e a quantidade de números 5 digitados.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, cont=0, five=0;
    scanf("%d",&x);

    while(x!=-1)
    {
        scanf("%d",&x);
        if(x==5)
        {
            five++;
        }
        cont++;
    }

    printf("%d %d",cont,five);

    return 0;
}