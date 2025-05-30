#include <stdio.h>

void movimentotorre(int numero)// recursividade dos movimentos da torre.
{
    if (numero >= 1)
    {
        movimentotorre(numero - 1);// movimento que tira -1 a cada ação da torre.
        printf("Direita\n");
    }   
}

void movimentorainha(int numero)// recursividade para os movimentos da rainha.
{
    if (numero >=1)
    {
        movimentorainha(numero -1);// movimento que tira -1 a cada ação da rainha.
        printf("Esquerda\n");
    }
    
}

void movimentobispo(int numero)// recursividade para os movimentos da bispo.
{
    int bispoV, bispoH;// variável para o bispo
    // loop aninhado para o bispo se mover para as diagonais.
    for (bispoV = 1; bispoV <= 5; bispoV++)// loop para o bispo mover para cima 5 vezes.
    {
        for (bispoH = 0; bispoH <= 1; bispoH++)// loop para o bispo se mover uma vez.
        {
            printf("Direita ");// printf para o bispo se mover.
            break;
        }
        printf("Cima\n");// printf para o bispo se mover.
    }
}


int main() {
    
    printf("Torre: \n");

    // loop de recursividade da torre.
    int torre = 5;
    movimentotorre(torre);
    
    printf("\n");

    int bispo; // variável do bispo
    // recursividade para bispo.
    printf("Bispo: \n");
    movimentobispo(bispo);

    printf("\n");

    int rainha = 8;// variável da rainha.
    // recursividade da rainha.
    printf("Rainha: \n");
    movimentorainha(rainha);

    printf("\n");

    printf("Cavalo: \n");

    int cavaloV = 0, cavaloH = 0;
    // loop aninhados do cavalo.
    while (cavaloH <= 1)// loop para o cavalo ir para a direita somente 1 vez.
    {
        do//loop para o cavalo ir para cima somente 2 vezes.
        {
            printf("Cima\n");// printf para o cavala se movimentar.
            cavaloV++;
        } while (cavaloV <= 1);

        printf("Direita\n");// printf para o cavala se movimentar.
        cavaloH++;
        break;
    }
 
    return 0;
}
