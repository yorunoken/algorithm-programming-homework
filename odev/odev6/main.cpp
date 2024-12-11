// Bilgisayar rastgele (0,100) aralığında bir sayı üretmeli, kullanıcı ise bu sayıyı doğru tahmin etmeye çalışmalıdır.
// Tahminler yanlış ise kullanıcı doğru cevaba yönlendirilmelidir.

# include <iostream>

using namespace std;

int main() {
    // Program için kullanacağımız değişkenleri belirleyelim
    int tahmini_sayi = rand() % 100 + 1;
    int tahmin;
    // Bu değişken sadece QOL olsun diye koydum, aslında oyun için gerek yok.
    int raunt = 1;

    // Oyuncuyu karşıla
    cout << "##############" << endl
    << "Merhaba, rastgele sayı tahmin oyununa hoş geldiniz." << endl
    << "Kazanmak için aklımdaki sayıyı tahmin etmelisiniz." << endl
    << "Her yanlış tahmininzde size tuttuğum sayıdan küçük veya büyük olduğunu söyleyeceğim." << endl
    << "##############" << endl << endl
    << "Başlamak için enter tuşuna basın." << endl;

    // Okumasını ve enter'a basmasını bekle
    cin.get();

    while (true) {
        // Raunt başı
        cout << "Raunt " << raunt << endl
        << "Bir rakam tahmin et: ";

        // Tahminini al
        cin >> tahmin;

        // Tahmin edilen sayıyı kontrol et
        if (tahmin > tahmini_sayi) {
            cout << "Verdiğiniz sayı çok yüksek!" << endl << endl;
        } else if (tahmin < tahmini_sayi) {
            cout << "Verdiğiniz sayı çok düşük!" << endl << endl;
        }

        if (tahmin == tahmini_sayi) {
            cout << "Kazandın! Tuttuğum sayı: " << tahmini_sayi << endl;
            break;
        }

        // Oyuncu kaçıncı rauntta olduğunu bilsin diye raunt değişkenini arttır.
        raunt++;
    }
}
