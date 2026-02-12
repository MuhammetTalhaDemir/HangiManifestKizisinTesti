#include <stdio.h>

int main() {
    char *isimler[] = {"Gecersiz", "Hilal", "Zoktay", "Lidya", "Sueda", "Esin", "Mina"};
    int secim;

    printf("Hangi manifest kizisin? (1-6): ");
    scanf("%d", &secim);

    if (secim >= 1 && secim <= 6) {
        printf("Sectigin kisi: %s\n", isimler[secim]);
    } else {
        printf("Listede boyle biri yok!\n");
    }

    return 0;
}