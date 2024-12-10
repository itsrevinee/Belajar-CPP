#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int jmlMatkul;
    double jmlNilai[100];

    cout << "Masukkan jumlah Mata Kuliah disini: ";
    cin >> jmlMatkul;


    while (!(0 < jmlMatkul && jmlMatkul <= 100)) {
        cout << "Maaf, input tidak valid. Silahkan coba lagi" << endl;
        cout << "Masukkan jumlah Mata Kuliah disini: ";
        cin >> jmlMatkul;
    }


    cout << "\nMasukkan nilai Mata Kuliah disini:" << endl;
    for (int i = 0; i < jmlMatkul; ++i) {
        cout << "Nilai Ke-" << (i + 1) << ": ";
        cin >> jmlNilai[i];
        

        while (jmlNilai[i] < 0 || jmlNilai[i] > 100) {
            cout << "Mohon masukkan nilai yang valid (0-100): ";
            cin >> jmlNilai[i];
        }
    }

    double total = 0;

    for (int i = 0; i < jmlMatkul; ++i) {
        total += jmlNilai[i];
    }

    double rataRata = total / jmlMatkul;
    string status = (rataRata >= 75) ? "LULUS" : "TIDAK LULUS";

    cout << "\nHasil:\n";
    cout << fixed << setprecision(0) << rataRata << " " << status << endl;

    return 0;
}