#include <iostream>
using namespace std;

int main ()
{
    int n ;

    while (true)
        {
        cout<< "Masukan tinggi piramida :";
        cin>> n;

        int i,j,k;

        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n  ; j++)
                {
                    cout << " " ;
                }
            for (int j = 1 ; j <= 2 * i - 1 ; j++)
                {
                    cout << "*";
                }
        cout << endl;
        }
    }

    return 0;
}
