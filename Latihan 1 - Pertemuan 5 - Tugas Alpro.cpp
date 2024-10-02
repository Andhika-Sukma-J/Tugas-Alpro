#include <iostream>
using namespace std;

int pokok(int jamKerja) {
    return jamKerja * 7500;
}

int lembur(int jamKerja) {
    if (jamKerja > 8) {
        return (jamKerja - 8) * 7500 * 1.5;
    }
    return 0;
}

int makan(int jamKerja) {
    if (jamKerja >= 9) {
        return 10000;
    }
    return 0;
}

int transport(int jamKerja) {
    if (jamKerja >= 10) {
        return 13000;
    }
    return 0;
}

int main() {
    string NIP, Nama;
    int jamKerja;

    cout << "Masukkan NIP: ";
    cin >> NIP;
    cout << "Masukkan Nama: ";
    cin.ignore();
    getline(cin, Nama);
    cout << "Masukkan jumlah jam kerja: ";
    cin >> jamKerja;

    int gajiPokok = pokok(jamKerja);
    int uangLembur = lembur(jamKerja);
    int uangMakan = makan(jamKerja);
    int uangTransport = transport(jamKerja);

    cout << "\n--- Rincian Gaji Karyawan ---" << endl;
    cout << "NIP         : " << NIP << endl;
    cout << "Nama        : " << Nama << endl;
    cout << "Gaji Pokok  : Rp. " << gajiPokok << endl;
    cout << "Lembur      : Rp. " << uangLembur << endl;
    cout << "Uang Makan  : Rp. " << uangMakan << endl;
    cout << "Transport   : Rp. " << uangTransport << endl;

    return 0;
}
