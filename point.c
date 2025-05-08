#include <stdio.h>

int main() {
    int x = 10;
    printf("O endereço de x é: %p\n", (void *)&x);
    printf("O valor de x é: %d\n", x);
    return 0;
}