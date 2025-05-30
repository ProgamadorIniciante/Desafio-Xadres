#include <stdio.h>

void movimentotorre(int numero)// recursividade dos movimentos da torre.
{
    if (numero >= 1)
    {
        movimentotorre(numero - 1);// movimento tira -1 a cada ação da torre.
        printf("Direita\n");
    }   
}

void movimentorainha(int numero)// recursividade dos movimentos da rainha.
{
    if (numero >=1)
    {
        movimentorainha(numero -1);// movimento tira -1 a cada ação da rainha.
        printf("Esquerda\n");
    }
    
}

void movimentobispo(int numero)// recursividade dos movimentos da bispo.
{
    int bispoV, bispoH;// variável do bispo
    // loop aninhado para o bispo se mover na diagonal.
    for (bispoV = 1; bispoV <= 5; bispoV++)// loop para o bispo mover para cima 5 vezes.
    {
        for (bispoH = 0; bispoH <= 1; bispoH++)// loop para o bispo mover uma vez.
        {
            printf("Direita ");// printf para o movimento do bispo.
            break;
        }
        printf("Cima\n");// printf para o movimento do bispo.
    }
}


int main() {
    
    printf("Torre: \n");

    // loop recursividade da torre.
    int torre = 5;
    movimentotorre(torre);
    
    printf("\n");

    int bispo;// variável do bispo
    // recursividade do bispo.
    printf("Bispo: \n");
    movimentobispo(bispo);

    printf("\n");

    int rainha = 8;// variável da rainha.
    // recursividade para a rainha.
    printf("Rainha: \n");
    movimentorainha(rainha);

    printf("\n");

    printf("Cavalo: \n");

    int cavaloV = 0, cavaloH = 0;
    // loop aninhados para o cavalo.
    while (cavaloH <= 1)// loop para o cavalo ir para a direita uma vez.
    {
        do//loop para o cavalo ir para cima 2 vezes.
        {
            printf("Cima\n");// printf do movimento do cavalo.
            cavaloV++;
        } while (cavaloV <= 1);

        printf("Direita\n");// printf do movimento do cavalo.
        cavaloH++;
        break;
    }
 
    return 0;
}
