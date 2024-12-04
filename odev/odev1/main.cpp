// Bu ödev kullanıcıdan bir sayı girmesini ister ve kullanıcının girdiği sayı yüksekliğinde dik üçgen çizer

#include <iostream>

using namespace std;

int main() {
    // Kullanıcıdan üçgenin yüksekliğini iste
    cout << "Lutfen dik ucgenin yuksekligi icin bir sayi giriniz: ";
    int ucgen_yuksekligi;
    cin >> ucgen_yuksekligi;

    // Yükseklik boyunca en düşükten en yükseğe doğru döngü kur
    for (int i = 0; i < ucgen_yuksekligi; i++) {
        // Yükseklik sayıları üzerinde döngü kurarak konsola * yazdır
        for(int j = 0; j <= i; j++) {
            cout << "a";
        }

        // Her döngü sonunda bir alt satıra geçmek için satır sonu ekle
        cout << endl;
    }
}
