#include <stdio.h>

int funcPalindrome(int nombre) {
    int original = nombre;
    int inverse = 0;

    while (nombre != 0) {
        int dernierChiffre = nombre % 10;
        inverse = inverse * 10 + dernierChiffre;
        nombre /= 10;
    }

    return (original == inverse) ? 1 : 0;

}

int main() {
    int nombre;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre);


    if (funcPalindrome(nombre))
        printf("%d est un nombre palindrome.\n", nombre);
    else
        printf("%d n'est pas un nombre palindrome.\n", nombre);

    return 0;
}
