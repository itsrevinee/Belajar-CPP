#include <iostream>
using namespace std;

//Input terdiri dari 1 baris yang mengandung dua angka N dan M .
int main(){
    int N, M, loop;
    cin >> N >> M;

    loop = 0;
    M = M - N;
    while (loop <= M) {
        cout << N + loop << endl;
        loop++;
        }

        return 0;
    }