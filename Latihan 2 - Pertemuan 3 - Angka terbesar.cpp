#include <iostream>
using namespace std;

int main(){
        int angka1,angka2,angka3;
        // Masukkan angka
            cout << "Masukkan angka pertama:"<<endl;
            cin >> angka1;
            cout << "Masukkan angka kedua:"<<endl;
            cin >> angka2;
            cout << "Masukkan angka ketiga:"<<endl;
            cin >> angka3;

        // Mencari yang terbesar
        int terbesar;
            if ( angka1 >= angka2 && angka1 >= angka3 ){
            terbesar = angka1;
            }else if ( angka2 >= angka1 && angka2 >= angka3 ){
            terbesar = angka2;
            }else {
            terbesar = angka3;
            }
        // Angka terbesar
        cout << "Angka terbesar adalah: " << terbesar << endl;

    return 0;
}
