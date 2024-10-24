#include <iostream>
#include <string>
#include <sstream> // untuk output ada (-) nya/ sejajar
using namespace std;

// Struktur untuk menyimpan informasi zodiak
struct Zodiak {
    string NamaZodiak;
    int BulanAwal, TanggalAwal;
    int BulanAkhir, TanggalAkhir;
};

// Fungsi untuk menemukan zodiak berdasarkan tanggal dan bulan lahir yang diinput
void MenemukanZodiak(int Tanggal, int Bulan, Zodiak Zodiaks[], int size) {
    for (int i = 0; i < size; i++) {
        if ((Bulan == Zodiaks[i].BulanAwal && Tanggal >= Zodiaks[i].TanggalAwal) ||
            (Bulan == Zodiaks[i].BulanAkhir && Tanggal <= Zodiaks[i].TanggalAkhir)) {
            cout << "Zodiak Anda adalah: " << endl;
            cout << "-> "<< Zodiaks[i].NamaZodiak << endl;
            return;
        }
    }
    cout << "Zodiak tidak ada. Pastikan tanggal dan bulan benar." << endl;
}

// Fungsi untuk memeriksa tanggal
bool IsValidDate(int Tanggal, int Bulan, int Tahun) {
    if (Bulan < 1 || Bulan > 12 || Tanggal < 1) {
        return false; // Bulan/tanggal tidak valid
    }

    // Menentukan jumlah hari di dalam bulan
    int daysInMonth;
    switch (Bulan) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            daysInMonth = 31;
            break;
        case 4: case 6: case 9: case 11:
            daysInMonth = 30;
            break;
        default:
            return false; // Bulan tidak valid
    }

    return Tanggal <= daysInMonth; // Memeriksa apakah tanggal valid dalam bulan yang diberikan
}

int main() {
    // Inisialisasi array Zodiak
    Zodiak Zodiaks[] = {
        {"Capricorn", 12, 22, 1, 19},
        {"Aquarius", 1, 20, 2, 18},
        {"Pisces", 2, 19, 3, 20},
        {"Aries", 3, 21, 4, 19},
        {"Taurus", 4, 20, 5, 20},
        {"Gemini", 5, 21, 6, 20},
        {"Cancer", 6, 21, 7, 22},
        {"Leo", 7, 23, 8, 22},
        {"Virgo", 8, 23, 9, 22},
        {"Libra", 9, 23, 10, 22},
        {"Scorpio", 10, 23, 11, 21},
        {"Sagittarius", 11, 22, 12, 21}
    };

    char pilihan;
    do{
    string input; // untuk menyimpan input tanggal
    cout << "Masukkan Tanggal Anda Spawn ke bumi ^w^" << endl;
    cout << "(dd-mm-yy): ";
    cin >> input;

    // untuk menyimpan tanggal, bulan, dan tahun
    int Tanggal, Bulan, Tahun;

    char separator;
    stringstream ss(input);
    ss >> Tanggal >> separator >> Bulan >> separator >> Tahun;

    // Mengkonversi tahun 2 digit menjadi 4 digit
    if (Tahun < 100) { // Memastikan tahun adalah dua digit
        if (Tahun > 50) {
            Tahun += 1900; // jika input 99, menjadi 1999
        } else {
            Tahun += 2000; // jika input 23, menjadi 2023
        }
    }

    // Validasi inputan dari user
    if (!IsValidDate(Tanggal, Bulan, Tahun)) {
        cout << "Tanggal atau bulan tidak valid!" << endl;
        return 0;
    }

    cout << endl;
    cout << "Ini adalah zodiak sesuai Tanggal Lahir Anda:" << endl;
    cout << " |" << endl;
    cout << " v" << endl;

    // Menampilkan tanggal, bulan, dan tahun
    cout << "Tanggal Lahir Anda: " << endl;
    cout << "-> " << Tanggal << "-" << Bulan << "-" << Tahun << endl;

    // Menemukan dan menampilkan zodiak berdasarkan input
    MenemukanZodiak(Tanggal, Bulan, Zodiaks, sizeof(Zodiaks) / sizeof(Zodiaks[0]));

    cout<<endl;
    cout << "Apakah Anda ingin memeriksa lagi? (y/n): ";
        cin >> pilihan; //siapa tau ingin memeriksa ulang zodiak(misal kepo zodiak org lain hehe:v)

    } while (pilihan == 'y' || pilihan == 'Y');

    cout <<endl;
    cout << " Terimakasih Telah Menggunakan Jasa Saya" << endl;
    cout << "wassalamualaikum warahmatullahi wabarakatuh" << endl;
    cout << endl;

    return 0;
}
