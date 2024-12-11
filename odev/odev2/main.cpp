// Ödev: Kullanıcının girdiği sayının negatif, pozitif ya da nötr olduğunu bulan C++ kodunu yazınız.

#include  <iostream>

using namespace std;

int main() {
	int sayi;
	cout << "Sayı girin: ";
	cin >> sayi;

	if (sayi == 0) {
    	cout << "Sayı nötrdür" << endl;
	} else if (sayi > 0) {
    	cout << "Sayı pozitiftir" << endl;
	} else {
    	cout << "Sayı negatiftir" << endl;
	}
}
