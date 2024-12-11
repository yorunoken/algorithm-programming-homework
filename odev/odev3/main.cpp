// Odev: Kullanıcının girdiği iki sayıdan küçüğünü bulup,
// tek mi çift mi olduğunu ekrana yazdıran C++ kodunu yazınız.

#include  <iostream>

using namespace std;

int main() {
    int sayi1, sayi2;

    cout << "İlk sayıyı girin: ";
    cin >> sayi1;

    cout << "İkinci sayıyı girin: ";
    cin >> sayi2;

    if (sayi1 == sayi2) {
        cout << "İki sayı birbine eşittir, lütfen birbirine eşit olmayan sayılar seçiniz." << endl;
        return 0;
    }

    int kucuk_sayi = sayi1 > sayi2 ? sayi2 : sayi1;

    if (kucuk_sayi % 2 == 0) {
        cout << "En küçük sayı: " << kucuk_sayi << ", Çifttir." << endl;
    } else {
        cout << "En küçük sayı: " << kucuk_sayi << ", Tektir." << endl;
    }
}
