// Odev: Kullanıcının girdiği iki sayıdan küçüğünü bulup,
// tek mi çift mi olduğunu ekrana yazdıran C++ kodunu yazınız.

#include  <iostream>

using namespace std;

int main() {
    int sayi1, sayi2;

    cout << "Ilk sayi gir: ";
    cin >> sayi1;

    cout << "Ikinci sayi gir: ";
    cin >> sayi2;

    int en_kucuk_sayi;

    if (sayi1 > sayi2) {
        en_kucuk_sayi = sayi2;
    } else {
        en_kucuk_sayi = sayi1;
    }

    if (en_kucuk_sayi % 2 == 0) {
        cout << "En kucuk sayi: " << en_kucuk_sayi << "Cifttir." << endl;
    } else {
        cout << "En kucuk sayi: " << en_kucuk_sayi << "Tektir." << endl;
    }
}
