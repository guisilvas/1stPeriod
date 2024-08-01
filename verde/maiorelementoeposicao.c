// Faça um algoritmo que leia um vetor de N posições de números inteiros e imprima o maior elemento do vetor e sua posição no vetor. Caso exista mais de um elemento cujo valor seja o maior dentre todos, imprima a posição do último elemento encontrado. N é lido pelo algoritmo.

// Entrada: A entrada é composta por duas linhas. A primeira linha contém um inteiro que representa o tamanho do vetor (N). A segunda linha contém N inteiros que representa o conteúdo do array.

// Saída: Um única linha contendo o maior elemento e sua respectiva posição.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, bigger=0;
    printf("Enter the array lenth: ");
    scanf("%d",&n);

    int arr[n];

    for(int i=1; i<=n; ++i)
    {
        printf("Enter int of pos %d: ",i);
        scanf("%d",&arr[n]);
        if(arr[i]>arr[bigger])
        {
            bigger=i;
        }
    }
    printf("%d %d",arr[bigger],bigger);

    return 0;
}