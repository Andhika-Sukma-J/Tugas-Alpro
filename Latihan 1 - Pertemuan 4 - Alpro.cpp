#include <iostream>
#include <string>
using namespace std;

string dapatkanFaktor(int num) {
    string faktor = "(Faktor: ";
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            faktor += to_string(i) + " ";
        }
    }
    faktor += ")";
    return faktor;
}
bool isPrima(int num){
    if (num <=1) return false;
    int faktor = 0;
    for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0) return false;
        }
    return true;
}

int main (){
    int batas, jumlahGanjil = 0, jumlahGenap = 0, jumlahPrima = 0;

    cout << "Masukan batas: ";
    cin >> batas;

    cout << "Bilangan Ganjil: ";
    for (int i = 1; i <= batas; i++)
        {
            if (i % 2 !=0)
            {
                cout << i << " " << dapatkanFaktor(i) << " ";
                jumlahGanjil++;
            }
        }
    cout << "\nJumlah Bilangan Ganjil: " << jumlahGanjil << endl;

    cout << "Bilangan Genap: ";
    for (int i = 1; i <= batas; i++)
        {
            if (i % 2 == 0)
            {
                cout << i << " " << dapatkanFaktor(i) << " ";
                jumlahGenap++;
            }
        }
    cout << "\nJumlah Bilangan Genap: " << jumlahGenap << endl;

    cout << "Bilangan Prima: ";
    for (int i =1; i <= batas; i++)
        {
            if (isPrima(i))
            {
                    cout << i << " " << dapatkanFaktor(i) << " ";
                    jumlahPrima++;
            }
        }
    cout << "\nJumlah Bilangan Prima: " << jumlahPrima << endl;

    return 0;
}
