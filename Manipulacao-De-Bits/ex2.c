#include <stdio.h>

int odd_ones(unsigned int x) {
    int count = 0;
    
    for (int i = 0; i < sizeof(x) * 8; i++) {
        // Verifica se o bit atual é 1
        if (x & 1) {
            count++;
        }
        // Desloca o número para a direita para verificar o próximo bit
        x >>= 1;
    }

    // Verifica se a contagem de bits '1' é ímpar
    return (count & 1);
}

int main() {
    unsigned int v;

    v = 0x01010101;
    printf("%X tem numero %s de bits\n", v, odd_ones(v) ? "impar" : "par");

    v = 0x01030101;
    printf("%X tem numero %s de bits\n", v, odd_ones(v) ? "impar" : "par");

    return 0;
}
