// Odev: Programın başlangıcında şifre adında bir değişken tanımlayınız.
// Daha sonra kullanıcı programı çalıştırdığında şifreyi isteyiniz.
//  Şifre doğru ise ekrana «Hoşgeldiniz», şifre hatalı ise «Hatalı Şifre» yazan C++ kodunu yazınız.

#include <iostream>

using namespace std;

int main() {
    // Şifre ve kullanıcının gireceği şifre için değişkenleri oluşturalım.
    string sifre = "fds32ai@4e";
    string girilen_sifre;

    // Kullanıcıdan şifre isteyelim
    cout << "Lutfen şifre girin." << endl;
    cout << "Sifre: ";
    cin >> girilen_sifre;

    // Girilen şifre, doğru şifreye eşit değilse, "Hatalı Şifre" diyip çık.
    if (girilen_sifre != sifre) {
        cout << "Hatalı şifre."  << endl;
        return 0;
    }

    // Buradan sonraki kodumuz yalnızca girilen şifre, doğru şifreye eşitse çalışacaktır.
    cout << "Hoşgeldiniz." << endl;
}
