#include <iostream>
using namespace std;

int main(){
    int A, T; // A sebagai Alas dan T sebagai Tinggi
    cout << "Masukkan alas Segitiga: ";
    cin >> A;
    cout << "Masukkan tinggi Segitiga: ";
    cin >> T;

    int luas = 0.5 * A * T;
    cout << "Luas Segitiga: " << luas << endl; 
    return 0;
}