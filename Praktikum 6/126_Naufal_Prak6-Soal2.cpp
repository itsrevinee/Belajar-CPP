#include <iostream>
#include <string>
using namespace std;

struct NilaiIPK
{
    string nama;
    double IPK;
};

int main() {
    int i;
    cout << "Masukkan jumlah Mahasiswa disini : "; cin >> i; cin.ignore();
    NilaiIPK mhs[i];

    for (int j = 0; j < i; j++)
    {
        cout << "Nama : "; getline(cin, mhs[j].nama);
        cout << "IPK  : "; cin >> mhs[j].IPK; cin.ignore();
        if (mhs[j].IPK < 0 || mhs[j].IPK > 4) {
            while(mhs[j].IPK < 0 || mhs[j].IPK > 4) {
                if (mhs[j].IPK < 0) {
                    cout << "Nilai IPK terlalu kecil, harap cek kembali!\n";
                } else {
                    cout << "Nilai IPK terlalu besar, harap cek kembali!\n";
                }
                cout << "IPK  : ";
                cin >> mhs[j].IPK; cin.ignore();
            }
        }
        cout << endl;
    }

    int IPKTertinggi = mhs[0].IPK, ke = 0;
    for (int j = 1; j < i; j++)
    {
        if (IPKTertinggi < mhs[j].IPK)
        {
            IPKTertinggi = mhs[j].IPK;
            ke = j; 
        }
    }   

    cout << endl << mhs[ke].nama;
    cout << endl << mhs[ke].IPK;

 return 0;
}