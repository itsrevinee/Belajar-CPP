#include <iostream>
using namespace std;

int testCases(int num, int &i) {
    if (num % 2 == 0) {
        i++;
    }

    if (num == 0) {
        return 2;
    } else if (num == 1) {
        return 3;
    } else if (num % 4 == 0) {
        return num * 3;
    } else {
        return testCases(num - 1, i) + num + testCases(num - 2, i) + num - 1;
    }
}

int main() {
    int a, hasilAkhir, jmlPerulangan;
    cin >> a;
    
    int num[a];
    for (int i = 0; i < a; i++) {
        cin >> num [i];
    }
    
    cout << endl;
    for (int i = 0; i < a; i++) {
        jmlPerulangan = 0;
        hasilAkhir = testCases(num[i], jmlPerulangan);
        cout << "Case #" << i+1 << " : " << hasilAkhir << " " << jmlPerulangan << endl;
    }
    return 0;
}