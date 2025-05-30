// Função recursiva para simular o movimento da torre
void moverTorre(int passos) {
    if (passos > 0) {
        moverTorre(passos - 1);
        printf("Movendo para a direita\n");
    }
}

// Função recursiva para simular o movimento da rainha
void moverRainha(int passos) {
    if (passos > 0) {
        moverRainha(passos - 1);
        printf("Movendo para a esquerda\n");
    }
}

// Movimento diagonal do bispo
void moverBispo() {
    for (int i = 0; i < 5; i++) {
        printf("Diagonal para cima e direita\n");
    }
}

// Movimento típico de cavalo (em L)
void moverCavalo() {
    for (int i = 0; i < 1; i++) {
        printf("Pulando duas casas para cima\n");
        printf("E uma para a direita\n");
    }
}

int main() {
    printf("Movimentos da Torre:\n");
    moverTorre(5);

    printf("\nMovimentos do Bispo:\n");
    moverBispo();

    printf("\nMovimentos da Rainha:\n");
    moverRainha(8);

    printf("\nMovimentos do Cavalo:\n");
    moverCavalo();

    return 0;
}