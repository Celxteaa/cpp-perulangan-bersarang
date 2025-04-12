#include <iostream>

using namespace std;

int main() {
    int tinggi;
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;

    for (int i = 0; i < tinggi; i++) {
        // Membuat spasi sebelum bintang
        for (int j = 0; j < tinggi - i - 1; j++) {
            cout << " ";
        }

        // Mencetak bintang
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << "*";
        }

        // Pindah ke baris berikutnya
        cout << endl;
    }

    return 0;
}