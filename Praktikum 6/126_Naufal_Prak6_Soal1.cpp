    #include <iostream>
    #include <fstream>
    using namespace std;

    void swapDlu(int* a, int* b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }

    int main() {
        fstream file("SwapSkibidi.txt", ios::in | ios::out);
        if (!file) {
            cerr << "Gimana caranya mau ngeswap kalau misalnya filenya aja gada  :skull:a" << endl;
            return 1;
        }

        string result = "";
        int a, b;


        while (file >> a >> b) {
            swapDlu(&a, &b);
            result += to_string(a) + " " + to_string(b) + "\n";
        }


        file.clear();
        file.seekp(0);
        file << result;
        file.close();

        cout << "File berhasil diedit!" << endl;
        return 0;
    }
