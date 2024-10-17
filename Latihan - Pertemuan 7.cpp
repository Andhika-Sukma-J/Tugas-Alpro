#include <iostream>
using namespace std;

int main()
{
    int jumlah;
    cout << "Masukkan berapa angka yang ingin di periksa: ";
    cin >> jumlah;

    int array[jumlah];

    for (int i = 0; i < jumlah; i++)
    {
        cout << "Masukkan angka ke- " << (i + 1) << ":" << " ";
        cin >> array[i];
    }

    int NilaiTertinggi = array[0];
    for (int i = 0; i < jumlah; i++)
        {
            if (array[i] > NilaiTertinggi)
            {
                NilaiTertinggi = array[i];
            }
        }
    cout << "Nilai tertingginya adalah: " <<NilaiTertinggi << endl;

    int CariAngka;
    cout << "Masukkan angka yang ingin diperiksa: ";
    cin >> CariAngka;

    bool ditemukan = false;
    int indeks;
    for (int i = 0; i < jumlah; i++)
    {
        if (array[i] == CariAngka)
        {
            ditemukan = true;
            indeks = i;
            break;
        }
    }

    if (ditemukan)
    {
        cout << "Angka " << CariAngka << " ditemukan di indeks " << indeks << "." << endl;
    }else
    {
        cout << "Angka " << CariAngka << " tidak ditemukan." << endl;
    }

    cout << endl;
    cout << "Nama: Andhika Sukma Jiwatama"<< endl;
    cout << "NIM : 2410631170130";
    cout << endl;

    return 0;
}