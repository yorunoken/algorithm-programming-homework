// Ödev: Bilgisayar rastgele (0,100) aralığında bir sayı üretmeli, kullanıcı ise bu sayıyı doğru tahmin etmeye çalışmalıdır.
// Tahminler yanlış ise kullanıcı doğru cevaba yönlendirilmelidir.

// time fonksiyonunu kullanabilmek için ctime kütüphanesini ekliyoruz
#include <ctime>
#include <iostream>

using namespace std;

int main() {
    // srand() fonksiyonu ile rand() fonksiyonunun başlangıç değerini ayarlıyoruz.
    // time() fonksiyonunu kullanarak, programın her çalıştırılmasında
    // farklı bir başlangıç değeri elde ediyoruz.
    srand(time(0));

    // rand() % 101 ile 0-100 aralığında rastgele bir sayı üretiyoruz.
    // Not: Eğer 1-100 aralığında bir sayı isteniyorsa `(rand() % 100) + 1 `kullanılabilir.
    // Not 2: Eğer 0-99 aralığında bir sayı isteniyorsa `rand() % 100` kullanılabilir.
    int random_sayi = rand() % 101;

    // Burası Opsiyonel: Kullanıcının hangi rauntta olduğunu göstermek için
    // round sayısının takip edecek bir değişken oluşturuyorum.
    int round = 1;

    // Burdaki döngü koşuluna `true` dediğimizde döngüden manual olarak çıkılmadığı sürece
    // sonsuza kadar devam edecektir.
    while (true) {
        cout << "\nRound " << round << endl;
        cout << "Lutfen 0-100 arasinda bir sayi tahmin ediniz: ";
        int tahmin;
        cin >> tahmin;

        if (tahmin == random_sayi) {
            cout << "Tebrikler! Doğru tahmin ettiniz!" << endl;
            cout << "Toplam " << round << " denemede bildiniz." << endl;
            break; // Doğru tahmin edildiğinde döngüden çık
        }

        if (tahmin < random_sayi) {
            cout << "Daha büyük bir sayı deneyin." << endl;
        } else {
            cout << "Daha küçük bir sayı deneyin." << endl;
        }

        round++; // Her yanlış tahminde round sayısını artır
    }
}
