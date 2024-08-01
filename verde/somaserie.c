// Faça um algoritmo para determinar o valor de S dado pela série
// S = 1/1 + 3/2 + 5/3 + 7/4 + 9/5 +⋯
// onde o número de termos da série é fornecido pelo usuário.

// Entrada: Uma linha contendo o número de termos da série.

// Saida: Uma linha contendo o valor da soma com duas casas decimais.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float s=0, num=1, den=1;
    
    printf("Enter the number of terms in serie: ");
    scanf("%d",&n);

    for(int i=0; i<n; ++i)
    {
        s+=num/den;
        num+=2;
        den++;
    }
    printf("%.2f",s);

    return 0;
}