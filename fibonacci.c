#include <stdio.h>
#include <locale.h>

int Fibonacci(int n) {
    int a = 0, b = 1, next = a + b;
    
    if (n == 0 || n == 1) {
        return 1;
    }

    while (next <= n) {
        if (next == n) {
            return 1;
        }
        a = b;
        b = next;
        next = a + b;
    }

    return 0;
}

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil"); // Configura a língua para português do Brasil

    int num;
    printf("Informe um número: ");
        scanf("%d", &num);

    if (Fibonacci(num)) {
        printf("O número %d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("O número %d NÃO pertence à sequência de Fibonacci.\n", num);
    }

    return 0;
}
