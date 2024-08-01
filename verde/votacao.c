// Em uma eleição presidencial existem quatro candidatos. Os votos são informados por meio de código. Os códigos utilizados são: 1 – Candidato 1 2 – Candidato 2 3 – Candidato 3 4 – Candidato 4 5 – Voto nulo 6 – Voto branco

// Faça um programa que calcule e mostre: • o total de votos para cada candidato; • o total de votos nulos; • a porcentagem de votos em branco sobre o total de votos. Para finalizar o conjunto de votos digitados, deve-se informar o código zero.

// Entrada: N linhas contendo um número inteiro que representa o voto de cada cidadão, sendo que o conteúdo da última linha é 0 (zero). Atenção, pois podem existir números diferentes dos códigos (1,2,3,4,5,6) utilizados.

// Saida: Três linhas, sendo que a primeira linha contem os votos dos candidatos 1,2,3 e 4 respectivamente. A segunda linha contém o total de votos nulos. A terceira linha contém o percentual de votos brancos em relação ao total de votos.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void menu();

int main()
{
    int x, candidate1=0, candidate2=0, candidate3=0, candidate4=0, nullVote=0;
    float whiteVote=0.0;
    menu();
    scanf("%d",&x);
    while(x!=0)
    {
        switch(x)
        {
            case 1:
                candidate1++;
                break;
            case 2:
                candidate2++;
                break;
            case 3:
                candidate3++;
                break;
            case 4:
                candidate4++;
                break;
            case 5:
                nullVote++;
                break;
            case 6:
                whiteVote++;
                break;
            default:
                printf("Please, insert a valid option.\n\n");
        }
        system("pause");
        system("clear");
        menu();
        scanf("%d",&x);
    }

    printf("%d %d %d %d\n",candidate1,candidate2,candidate3,candidate4);
    printf("%d\n",nullVote);
    printf("%.2f\n",((whiteVote*100)/(candidate1+candidate2+candidate3+candidate4+nullVote+whiteVote)));
    
    return 0;
}

void menu()
{
    printf("Insert one of this opitions:\n\t1 - Candidate 1\n\t2 - Candidate 2\n\t3 - Candidate 3\n\t4 - Candidate 4\n\t5 - Null\n\t6 - White\n\t0 - Quit\n\nVote: ");
}
