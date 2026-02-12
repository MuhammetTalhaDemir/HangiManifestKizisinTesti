#include <stdio.h>

int main() {
    char *isimler[] = {"Gecersiz", "Hilal", "Zoktay", "Lidya", "Sueda", "Esin", "Mina"};
    int secim, tekrar;
    
    printf("\nHANGI MANIFEST KIZISIN TESTI\n\n");

  do {
    printf("Lutfen 1 ile 6 arasinda bir sayi giriniz(1 ve 6 dahil): ");
    scanf("%d", &secim);

    if (secim >= 1 && secim <= 6) {
        printf("Sectigin kisi: %s\n\n", isimler[secim]);
    
    } else {
        printf("Istenilen araliktan bir sayi secmeniz gerekiyordu. Listede boyle biri yok!\n\n");
    }

        printf("Tekrar denemek ister misin? Evet icin 1, Hayir icin 0 girirniz: ");
        scanf("%d", &tekrar);

    printf("\n");

    } while (tekrar == 1);
    
    printf("Sonraki Teste Gorusmek Uzere Iyi Gunler!\n");

    return 0;
}