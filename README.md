# Hangi Manifest Kızısın? (C Projesi) 🚀 | v0.6

Bu proje, Erciyes Üniversitesi Bilgisayar Mühendisliği 1. sınıf öğrencisi olarak C dilini öğrenirken geliştirdiğim, kullanıcıya çeşitli sorular sorarak Manifest grubunun hangi üyesinin karakter tipine sahip olduğunu bulan eğlenceli bir testtir.

## 🛠️ Teknik Özellikler
* **Dil:** C
* **Kütüphaneler:** `<stdio.h>`, `<windows.h>`, `<string.h>`
* **Veri Yapıları:** **Paralel Diziler (Parallel Arrays)** kullanılarak sorular, şıklar ve sonuçlar dinamik olarak yönetilir.
* **Algoritma Mantığı:** Kullanıcı girdileri ASCII matematiği ile dizi indekslerine dönüştürülür ve "Maximum Search" algoritması ile sonuç hesaplanır
* **Modüler Tasarım:** Fonksiyon bazlı mimari kullanılarak `main` fonksiyonu sadeleştirilmiş ve her görev (soru sorma, puan hesaplama) ayrı fonksiyonlara atanmıştır.
* **Döngü Yönetimi:** `do-while` mekanizması ile sonsuz döngü ve kullanıcı kontrollü çıkış.
* **Hafıza Kullanımı:** Statik bellek yönetimi tercih edilerek düşük kaynak tüketimi sağlanmıştır.

## 📈 Gelişim Süreci
Projenin Git geçmişinde görüleceği üzere, kod temel mantıktan modüler fonksiyonel yapıya kadar evrilmiştir. v0.6 güncellemesiyle birlikte; paralel diziler ve string yönetimi ile test sistemi güncellendi. Sorular ve şıklar paralel diziler kullanılarak optimize edildi. Puanlar dizisi ve en büyük sayı algoritması ile sonuç hesaplama mantığı eklendi. Karakter dizileri üzerinden isim eşleşmeleri sağlandı.
- **Daha fazla detay için blog yazım:**[v0.6 Güncellemesi](https://muhammettalhademir.com/blog/manifest-v06)

## 💻 Nasıl Çalıştırılır?
1. Kodun `.c` dosyasını indirin.
2. Bir C derleyicisi (GCC gibi) ile derleyin.
3. Oluşan dosyayı çalıştırarak testi çözmeye başlayın!

---
**Muhammet Talha Demir** tarafından geliştirilmiştir.