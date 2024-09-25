#include <iostream>
using namespace std;

int main()
{
    cout << "Program deret Fibonacci" << endl;

    cout << "Masukkan nilai ke-n : ";
    int fn, fn1, fn2, n, jumlah;
    cin >> n;
    fn1 = 1;
    fn2 = 0;
    jumlah = ;
    cout << fn2 << " ";
    cout << fn1 << " ";
    for (int i = 1; i < n-1; i++)
    {
        fn = fn1 = fn2;
        cout << fn << " ";
        fn2 = fn1;
        fn1 = fn;
        jumlah += fn;
    }
    cout << "Jumlah Deret = " << jumlah;
    cout << endl;
    return 0;
}
