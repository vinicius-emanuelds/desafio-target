#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    char str[100];
    int cont = 0;

    printf("Informe uma string: ");
        fgets(str, sizeof(str), stdin);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            cont++;
        }
    }

    printf("A letra 'a' aparece %d vezes na string.\n", cont);

    return 0;
}