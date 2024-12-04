#include <iostream>

using namespace std;

int main() {
    int sayi1, sayi2;

    cout << "Hos geldin, devam etmek icin enter'a bas.";
    cin.get();

    cout << "Ilk sayiyi gir: ";
    cin >> sayi1;

    cout << "Ikinci sayiyi gir: ";
    cin >> sayi2;

    cout << "Sayilarin carpimi: " << (sayi1 - 1) * (sayi2 - 1) << endl;
}
