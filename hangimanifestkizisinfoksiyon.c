#include <stdio.h>

char soru_sor(int sira, char *metin, char *siklar);
void sonucu_goster(int hilal_puan, int sueda_puan, int mina_puan, int lidya_puan, int esin_puan, int zoktay_puan);

int main() {
    int tekrar;
    int hilal_puan = 0, sueda_puan = 0, mina_puan = 0, lidya_puan = 0, esin_puan = 0, zoktay_puan = 0;
    char cevap;

        
    printf("\nHANGI MANIFEST KIZISIN TESTI\n\n");

  do {

    cevap = soru_sor(1, "Soru 1: Bir pazar sabahi planin iptal olsa tepkin ne olur?", 
                         "A)\"Vardir bir hayir\" deyip meditasyonuma devam ederim.\nB) Planin neden iptal oldugunu adim adim sorgular, mantikli bir aciklama beklerim.\nC) Zaten cok yorgundum, uyumak icin harika bir firsat!\nD) Iptal eden kisiye biraz bozulurum ama hemen baska bir arkadasimi ararim.\nE) Evde kalmisken dolabimi duzenler, gelecek haftanin planini yaparim. \nF) Madem disari cikmiyoruz, ben de evde en sik pijama takimimla bakim yaparim.\n");
        switch (cevap) {
            case 'A': case 'a': hilal_puan++; break;
            case 'B': case 'b': esin_puan++; break;
            case 'C': case 'c': lidya_puan++; break;
            case 'D': case 'd': mina_puan++; break;
            case 'E': case 'e': zoktay_puan++; break;
            case 'F': case 'f': sueda_puan++; break;            
        }

    cevap = soru_sor(2, "Soru 2: Arkadas grubunda biri agladiginda ilk ne yaparsin?", 
                         "A) Yanina gidip sarilirim ve ona yuksek enerji vermeye calisirim.\nB) Aglamasina neden olan sorunu cozmek icin hemen bir strateji gelistiririm.\nC) Onu dinlerim ama ne diyecegimi bilemedigim icin sadece yaninda susarim.\nD) Onu guldurecek bir espri yapar veya en sevdigi tatliyi ismarlarim.\nE) Onunla beraber ben de duygulanirim, cok hassas biriyimdir.\nF) \"Aglama, makyajin akacak\" diyerek onu aynanin karsisina gotururum.\n");
        switch (cevap) {
            case 'A': case 'a': hilal_puan++; break;
            case 'B': case 'b': esin_puan++; break;
            case 'C': case 'c': lidya_puan++; break;
            case 'D': case 'd': mina_puan++; break;
            case 'E': case 'e': zoktay_puan++; break;
            case 'F': case 'f': sueda_puan++; break;            
        }

    cevap = soru_sor(3, "Soru 3: Hayatindaki en buyuk motivasyon kaynagin nedir?", 
                         "A) Ruhsal huzura ermek ve evrenle uyum icinde yasamak.\nB) Her zaman en iyisi olmak ve zekamla takdir edilmek\nC) Hicbir seye mecbur kalmadan, canimin istedigi gibi yasamak.\nD) Populer olmak ve girdigim her ortamda iz birakmak.\nE) Kontrolu elimde tutmak ve hayatimi kusursuz yonetmek. \nF)Luks bir yasam surmek ve her seyin en kalitelisine sahip olmak.\n");
        switch (cevap) {
            case 'A': case 'a': hilal_puan++; break;
            case 'B': case 'b': esin_puan++; break;
            case 'C': case 'c': lidya_puan++; break;
            case 'D': case 'd': mina_puan++; break;
            case 'E': case 'e': zoktay_puan++; break;
            case 'F': case 'f': sueda_puan++; break;            
        }

    cevap = soru_sor(4, "Soru 4: Gruba yeni bir kizi dahil ederken senin icin en onemli kriter nedir?", 
                         "A) Aura temizligi ve pozitif bakis acisi.\nB) Grubun entelektuel seviyesini dusurmemesi.\nC) Kafa dengi olmasi ve bizi darlamamasi.\nD) Eglenceli olmasi ve ortamlarda bizi rezil etmemesi.\nE) Tarz sahibi olmasi ve grubun estetigine uyum saglamasi.\nF) Gruba uyum saglamasi ve enerjimizi bozmamasi.\n");
        switch (cevap) {
            case 'A': case 'a': hilal_puan++; break;
            case 'B': case 'b': esin_puan++; break;
            case 'C': case 'c': lidya_puan++; break;
            case 'D': case 'd': mina_puan++; break;
            case 'E': case 'e': zoktay_puan++; break;
            case 'F': case 'f': sueda_puan++; break;           
        }

    cevap = soru_sor(5, "Soru 5: Sence gruptaki en \"ikonik\" an hangisidir?", 
                         "A) Hep beraber toplu manifest yapip dileklerimizin kabul oldugu gun.\nB) Zor bir durumda kalip zekice bir planla isin icinden siyrildigimiz an.\nC) Hic planlamadan kendimizi bir anda baska bir sehirde buldugumuz gun.\nD) Herkesin bizi konustugu o meshur dogum gunu partisi.\nE) Herkesin birbirine soz verip grubun kurallarini belirledigi o ilk gece.\nF) Hepimizin en sik hallerimizle o meshur fotografi cekindigimiz an.\n");
        switch (cevap) {
            case 'A': case 'a': hilal_puan++; break;
            case 'B': case 'b': esin_puan++; break;
            case 'C': case 'c': lidya_puan++; break;
            case 'D': case 'd': mina_puan++; break;
            case 'E': case 'e': zoktay_puan++; break;
            case 'F': case 'f': sueda_puan++; break;            
        }

    cevap = soru_sor(6, "Soru 6: Sinavdan beklediginden dusuk aldiginda ne hissedersin?", 
                         "A) \"Bu sinav beni yansitmiyor, evrenin baska bir plani var\" derim.\nB) Hangi soruda neden hata yaptigimi sabaha kadar analiz ederim.\nC) \"Aman canim, bir sinavdan ne olur\" deyip hayatima bakarim.\nD) Hocaya itiraz etmek icin bin tane bahane bulurum.\nE) Bir sonraki sinavda bu hatayi yapmamak icin yeni bir ders programi hazirlarim.\nF) Moralim bozulur, gidip kendime moral alisverisi yaparim.\n");
        switch (cevap) {
            case 'A': case 'a': hilal_puan++; break;
            case 'B': case 'b': esin_puan++; break;
            case 'C': case 'c': lidya_puan++; break;
            case 'D': case 'd': mina_puan++; break;
            case 'E': case 'e': zoktay_puan++; break;
            case 'F': case 'f': sueda_puan++; break;          
        }
    

    sonucu_goster(hilal_puan, sueda_puan, mina_puan, lidya_puan, esin_puan, zoktay_puan);

    printf("\nTekrar denemek ister misin? Evet icin 1, Hayir icin 0 girirniz: ");
    scanf("%d", &tekrar);

    printf("\n");

    hilal_puan = 0; sueda_puan = 0; mina_puan = 0; lidya_puan = 0; esin_puan = 0; zoktay_puan = 0;

    } while (tekrar == 1);
    
    printf("Sonraki Teste Gorusmek Uzere Iyi Gunler!\n");

    return 0;
}

char soru_sor(int sira, char *metin, char *siklar) {
    char secim;
    int gecerli = 0;

    do {
        printf("\n%s\n%s\nCevabiniz (A-F): ", metin, siklar);
        scanf(" %c", &secim);

        if ((secim >= 'A' && secim <= 'F') || (secim >= 'a' && secim <= 'f')) {
            gecerli = 1;
        } else {
            printf("\n!!! HATALI GIRIS !!!\nLutfen sadece A, B, C, D, E veya F harflerinden birini giriniz.\n");
        }
    } while (gecerli == 0);
    return secim;
}

    void sonucu_goster(int hilal_puan, int sueda_puan, int mina_puan, int lidya_puan, int esin_puan, int zoktay_puan) {
            int max_puan = hilal_puan;
            int kazanan_kod = 1;

            if (sueda_puan > max_puan) {
                max_puan = sueda_puan;
                kazanan_kod = 2;
            }

            if (mina_puan > max_puan) {
                max_puan = mina_puan;
                kazanan_kod = 3;
            }

            if (lidya_puan > max_puan) {
                max_puan = lidya_puan;
                kazanan_kod = 4;
            }

            if (esin_puan > max_puan) {
                max_puan = esin_puan;
                kazanan_kod = 5;
            }

            if (zoktay_puan > max_puan) {
                max_puan = zoktay_puan;
                kazanan_kod = 6;
            }
        printf("\nTEST SONUCU:\n");
                switch (kazanan_kod) {
                case 1: printf("Hilal!\n"); break;
                case 2: printf("Sueda!\n"); break;
                case 3: printf("Mina!\n"); break;
                case 4: printf("Lidya!\n"); break;
                case 5: printf("Esin!\n"); break;
                case 6: printf("Zoktay!\n"); break;
            }

    }