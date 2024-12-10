#include <iostream>
using namespace std;

int main() {
int num;
cout << "Masukkan angka yang ingin kamu cek: ";
cin >> num;

if (num % 2 == 0) {
    cout << num << " adalah bilangan genap." << endl;
    } else {
    cout << num << " adalah bilangan ganjil." << endl;
    }
    return 0;
}