#include <iostream>
using namespace std;

long long faktorial(int n) {
    if (n <= 1)
        return 1;
    return n * faktorial(n - 1);
}

long long kombinasi(int n, int r) {     
    return faktorial(n) / (faktorial(r) * faktorial(n - r));
}

int main() {
    int n, r;

    cin >> n;
    cin >> r;

    cout << "Faktorial dari " << n << ": " << faktorial(n) << endl;
    cout << "Hasil Kombinasi (" << n << ", " << r << ") " << kombinasi(n, r) << endl;

    return 0;
}
