#include <iostream>
using namespace std;

int main(){
    int A, B;
    cout << "Masukkan angka yang ingin kamu pilih (A): ";
    cin >> A;
    cout << "Masukkan angka yang ingin kamu pilih (B): ";
    cin >> B;
    cout << "Sebelum diswap: A = " << A << " dan B = " << B;

    A = A + B; 
    B = A - B;
    A = A - B;
    cout << "\nSesudah diswap: A = " << A << " dan B = " << B << endl;
    return 0;
}