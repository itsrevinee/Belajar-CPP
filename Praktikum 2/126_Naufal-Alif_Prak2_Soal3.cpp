#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a, b, c, x;
    cout << "Masukkan nilai A: ";
    cin >> a;
    cout << "Masukkan nilai B: ";
    cin >> b;
    cout << "Masukkan nilai C: ";
    cin >> c;
    cout << "Masukkan nilai batas dari 3 Angka tersebut: ";
    cin >> x;

    if(a % 3 == 0) {
        result *=3;
        cout << result << endl;
    }
    return 0;