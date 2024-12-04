// Ödev: Kullanıcının girdiği sayının negatif, pozitif ya da nötr olduğunu bulan C++ kodunu yazınız.

#include  <iostream>

using namespace std;

int main() {
    int sayi;
    cout << "sayi gir: ";
    cin >> sayi;

    if (sayi == 0) {
        cout << "Sayi notrdur" << endl;
    } else if (sayi > 0) {
        cout << "Sayi pozitiftir" << endl;
    } else {
        cout << "Sayi negatiftir" << endl;
    }
}
