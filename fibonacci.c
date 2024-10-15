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
    setlocale(LC_ALL, "Portuguese_Brazil"); // Configura a l�ngua para portugu�s do Brasil

    int num;
    printf("Informe um n�mero: ");
        scanf("%d", &num);

    if (Fibonacci(num)) {
        printf("O n�mero %d pertence � sequ�ncia de Fibonacci.\n", num);
    } else {
        printf("O n�mero %d N�O pertence � sequ�ncia de Fibonacci.\n", num);
    }

    return 0;
}
