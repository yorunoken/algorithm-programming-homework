// Odev: Kullanıcı sınav ortalamasını girdiği zaman ekrana harf notunu yazdıran C++ kodunu yazınız.
// 90 ve üstü: AA
// 70 ve üstü: BB
// 50 ve üstü: CC
// 50 altı: Başarısız.

#include  <iostream>

using namespace std;

int main() {
    int ortalama;

    cout << "Sınav ortalamanızı giriniz: ";
    cin >> ortalama;

    // Burada >= yapmamiz onemli, cunku 90 ve ustunu istiyor etc
    if (ortalama >= 90) {
        cout << "AA" << endl;
    } else if (ortalama >= 70) {
        cout << "BB" << endl;
    } else if (ortalama >= 50) {
        cout << "CC" << endl;
    } else {
        cout << "Başarısız" << endl;
    }
}
