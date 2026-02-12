#include <stdio.h>

int main() {
    int sayi;
    
    printf("Lutfen bir sayi giriniz(1-6):");
    scanf("%d", &sayi);

    switch (sayi) {
        case 1:
            printf("hilal\n");
            break;
        case 2:
            printf("zoktay\n");
            break;
        case 3:
            printf("lidya\n");
            break;
        case 4:
            printf("sueda\n");
            break;
        case 5:
            printf("esin\n");
            break;
        case 6:
            printf("mina\n");
            break;

        default:
            printf("Gecersiz bir numara girdiniz!\n");
            break;
    }
    
    return 0;
}