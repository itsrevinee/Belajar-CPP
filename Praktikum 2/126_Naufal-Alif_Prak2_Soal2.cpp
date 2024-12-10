#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout << "Masukkan nilai x: ";
    cin >> x;
    cout << "Masukkan nilai y: ";
    cin >> y;

    if (x > 0 && y > 0) {
        cout << "(" << x << ", " << y << ") berada di Kuadran I" << endl;
    } else if (x < 0 && y > 0) {
        cout << "(" << x << ", " << y << ") berada di Kuadran II" << endl;
    } else if (x < 0 && y < 0) {
        cout << "(" << x << ", " << y << ") berada di Kuadran III" << endl;
    } else if (x > 0 && y < 0) {
        cout << "(" << x << ", " << y << ") berada di Kuadran IV" << endl;
    }

    else if (x == 0 && y == 0) {
        cout << "(" << x << ", " << y << ") berada di Pusat" << endl;
    }

    else if (y == 0 && x != 0) {
        cout << "Sumbu X" << endl;
    }

    else if (x == 0 && y != 0) {
        cout << "Sumbu Y" << endl;
    }
    return 0;
}