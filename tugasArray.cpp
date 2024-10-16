#include <iostream>
using namespace std;
int main() {
    int angka[5];

    cout << "Masukkan 5 angka: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Angka ke-" << i+1 << ": ";
        cin >> angka[i];
    }

    // Mencari nilai tertinggi
    int maxValue = angka[0];
    for (int i = 1; i < 5; i++) {
        if (angka[i] > maxValue) {
            maxValue = angka[i];
        }
    }

    cout << "Nilai tertinggi adalah: " << maxValue << endl;

    // Input nilai yang ingin dicari
    int cari;
    cout << "\nMasukkan angka yang ingin diperiksa: ";
    cin >> cari;

    bool ada = false;
    for (int i = 0; i < 5; i++) {
        if (angka[i] == cari) {
            cout << "\nAngka " << cari << " ditemukan di indeks ke-" << i << endl;
            ada = true;
        }
    }

    if (!ada) {
        cout << "\nAngka " << cari << " tidak ditemukan." << endl;
    }

    return 0;
}
