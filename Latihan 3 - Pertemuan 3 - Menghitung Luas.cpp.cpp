#include <iostream>
using namespace std;

int main() {
    int pilihan;
    double sisi, panjang, lebar, alas, tinggi, luas;

    cout << "Pilih bentuk bangun datar untuk menghitung luas:" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "Masukkan pilihan (1-3): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            // Luas Persegi
            cout << "Masukkan panjang sisi perseginya: ";
            cin >> sisi;
            luas = sisi * sisi;
            cout << "Luas persegi adalah: " << luas << endl;
            break;

        case 2:
            // Luas Persegi Panjang
            cout << "Masukkan panjangnya: ";
            cin >> panjang;
            cout << "Masukkan lebarnya: ";
            cin >> lebar;
            luas = panjang * lebar;
            cout << "Luas persegi panjang adalah: " << luas << endl;
            break;

        case 3:
            // Luas Segitiga
            cout << "Masukkan alas segitiganya: ";
            cin >> alas;
            cout << "Masukkan tinggi segitiganya: ";
            cin >> tinggi;
            luas = 0.5 * alas * tinggi;
            cout << "Luas segitiga adalah: " << luas << endl;
            break;

        default:
            // Pilihan tidak valid
            cout << "Pilihan tidak valid!" << endl;
            break;
    }

    return 0;
}
