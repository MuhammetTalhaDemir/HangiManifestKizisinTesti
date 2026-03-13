#include <stdio.h>
#include <windows.h>
#include <string.h>

char soru_sor(int sira, const char *metin, const char *siklar);
void sonucu_goster(int puanlar[]);
int tekrar_baslat();
void manifest_baslik();
void geri_sayim(int n);

int main() {
    int tekrar;
    int puanlar[6]; 
    char cevap;

    const char *sorular[] = {
        "Soru 1: Bir pazar sabahi planin iptal olsa tepkin ne olur?",
        "Soru 2: Arkadas grubunda biri agladiginda ilk ne yaparsin?",
        "Soru 3: Hayatindaki en buyuk motivasyon kaynagin nedir?",
        "Soru 4: Gruba yeni bir kizi dahil ederken senin icin en onemli kriter nedir?",
        "Soru 5: Sence gruptaki en \"ikonik\" an hangisidir?",
        "Soru 6: Sinavdan beklediginden dusuk aldiginda ne hissedersin?"
    };

    const char *siklar[] = {
        "A)\"Vardir bir hayir\" deyip meditasyonuma devam ederim.\nB) Planin neden iptal oldugunu adim adim sorgular, mantikli bir aciklama beklerim.\nC) Zaten cok yorgundum, uyumak icin harika bir firsat!\nD) Iptal eden kisiye biraz bozulurum ama hemen baska bir arkadasimi ararim.\nE) Evde kalmisken dolabimi duzenler, gelecek haftanin planini yaparim. \nF) Madem disari cikmiyoruz, ben de evde en sik pijama takimimla bakim yaparim.\n",
        "A) Yanina gidip sarilirim ve ona yuksek enerji vermeye calisirim.\nB) Aglamasina neden olan sorunu cozmek icin hemen bir strateji gelistiririm.\nC) Onu dinlerim ama ne diyecegimi bilemedigim icin sadece yaninda susarim.\nD) Onu guldurecek bir espri yapar veya en sevdigi tatliyi ismarlarim.\nE) Onunla beraber ben de duygulanirim, cok hassas biriyimdir.\nF) \"Aglama, makyajin akacak\" diyerek onu aynanin karsisina gotururum.\n",
        "A) Ruhsal huzura ermek ve evrenle uyum icinde yasamak.\nB) Her zaman en iyisi olmak ve zekamla takdir edilmek\nC) Hicbir seye mecbur kalmadan, canimin istedigi gibi yasamak.\nD) Populer olmak ve girdigim her ortamda iz birakmak.\nE) Kontrolu elimde tutmak ve hayatimi kusursuz yonetmek. \nF)Luks bir yasam surmek ve her seyin en kalitelisine sahip olmak.\n",
        "A) Aura temizligi ve pozitif bakis acisi.\nB) Grubun entelektuel seviyesini dusurmemesi.\nC) Kafa dengi olmasi ve bizi darlamamasi.\nD) Eglenceli olmasi ve ortamlarda bizi rezil etmemesi.\nE) Tarz sahibi olmasi ve grubun estetigine uyum saglamasi.\nF) Gruba uyum saglamasi ve enerjimizi bozmamasi.\n",
        "A) Hep beraber toplu manifest yapip dileklerimizin kabul oldugu gun.\nB) Zor bir durumda kalip zekice bir planla isin icinden siyrildigimiz an.\nC) Hic planlamadan kendimizi bir anda baska bir sehirde buldugumuz gun.\nD) Herkesin bizi konustugu o meshur dogum gunu partisi.\nE) Herkesin birbirine soz verip grubun kurallarini belirledigi o ilk gece.\nF) Hepimizin en sik hallerimizle o meshur fotografi cekindigimiz an.\n",
        "A) \"Bu sinav beni yansitmiyor, evrenin baska bir plani var\" derim.\nB) Hangi soruda neden hata yaptigimi sabaha kadar analiz ederim.\nC) \"Aman canim, bir sinavdan ne olur\" deyip hayatima bakarim.\nD) Hocaya itiraz etmek icin bin tane bahane bulurum.\nE) Bir sonraki sinavda bu hatayi yapmamak icin yeni bir ders programi hazirlarim.\nF) Moralim bozulur, gidip kendime moral alisverisi yaparim.\n"
    };

    manifest_baslik(); 

    do {
        for(int i = 0; i < 6; i++) puanlar[i] = 0;

        Sleep(1000);
        geri_sayim(3);
        Sleep(1000);

        for (int i = 0; i < 6; i++) {
            cevap = soru_sor(i + 1, sorular[i], siklar[i]);
            
            if (cevap >= 'a' && cevap <= 'z') cevap -= 32;
            
            int index = cevap - 'A'; 
            puanlar[index]++;
        }

        sonucu_goster(puanlar);

        Sleep(1000);
        tekrar = tekrar_baslat();

        printf("\n");

    } while (tekrar == 1);

    Sleep(1000);
    printf("Sonraki Teste Gorusmek Uzere Iyi Gunler!\n");

    return 0;
}

char soru_sor(int sira, const char *metin, const char *siklar) {
    char secim;
    int gecerli = 0;

    do {
        printf("\n%s\n%s\nCevabiniz (A-F): ", metin, siklar);
        scanf(" %c", &secim);

        getchar();

        if ((secim >= 'A' && secim <= 'F') || (secim >= 'a' && secim <= 'f')) {
            gecerli = 1;
        } else {
            printf("\n!!! HATALI GIRIS !!!\nLutfen sadece A, B, C, D, E veya F harflerinden birini giriniz.\n");
        }
    } while (gecerli == 0);
    return secim;
}

void sonucu_goster(int puanlar[]) {
    const char *isimler[] = {"Hilal", "Esin", "Lidya", "Mina", "Zoktay", "Sueda"};
    int max = -1;
    int kazanan_index = 0;

    for (int i = 0; i < 6; i++) {
        if (puanlar[i] > max) {
            max = puanlar[i];
            kazanan_index = i;
        }
    }

    Sleep(1000);
    printf("\nTest Sonucu Hesaplaniyor...\n");
    Sleep(1000);
    geri_sayim(3);
    Sleep(1000);
    printf("\nSONUC: %s!\n", isimler[kazanan_index]);
}

int tekrar_baslat() {
    char secim;
    while(1) { 
        printf("\nTekrar denemek ister misin? (E/H): ");
        scanf(" %c", &secim);
        
        if (secim == 'E' || secim == 'e') return 1;
        if (secim == 'H' || secim == 'h') return 0;
        
        printf("\n!!! Sadece 'E' (Evet) veya 'H' (Hayir) giriniz !!!\n");
    }
}

void geri_sayim(int n) {
    if (n == 1) {
        printf("%d...\n", n);
        return; 
    }
    printf("%d...\n", n);
    Sleep(1000); 
    geri_sayim(n - 1);
}

void manifest_baslik() {
    printf("  _   _                   _    __  __             _  __           _      _  __                       ___  \n");
    printf(" | | | | __ _ _ __   __ _(_)  |  \\/  | __ _ _ __ (_)/ _| ___  ___| |_   | |/ /_ _____ ___ _ __ _    |__ \\ \n");
    printf(" | |_| |/ _` | '_ \\ / _` | |  | |\\/| |/ _` | '_ \\| | |_ / _ \\/ __| __|  | ' /| |_  / / __| | '_ \\     / / \n");
    printf(" |  _  | (_| | | | | (_| | |  | |  | | (_| | | | | |  _|  __/\\__ \\ |_   | . \\| |/ /| \\__ \\ | | | |   |_|  \n");
    printf(" |_| |_|\\__,_|_| |_|\\__, |_|  |_|  |_|\\__,_|_| |_|_|_|  \\___||___/\\__|  |_|\\_\\_/___|_|___/_|_| |_|   (_)  \n");
    printf("                    |___/                                                                                    \n");
    Sleep(1000);
    printf("\n                                    --- TEST BASLIYOR --- \n\n");
}