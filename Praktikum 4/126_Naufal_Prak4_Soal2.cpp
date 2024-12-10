#include <iostream>
#include <string>
using namespace std;

string hapusVokal(const string& teks) {
    string hasil;
    for (char karakter : teks) {
        if (karakter != 'A' && karakter != 'E' && karakter != 'I' && karakter != 'O' && karakter != 'U' &&
            karakter != 'a' && karakter != 'e' && karakter != 'i' && karakter != 'o' && karakter != 'u') {
            hasil += karakter;
        }
    }
    return hasil;
}

int main() {
    string teks;
    cout << "Masukkan sebuah kalimat/kata: ";
    getline(cin, teks);

    cout << "Berikut kata/kalimat seusai Huruf Vokalnya dihapus: \n" << hapusVokal(teks) << endl;
    return 0;
}