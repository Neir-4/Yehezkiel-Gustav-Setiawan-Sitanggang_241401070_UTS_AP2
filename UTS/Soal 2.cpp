#include <iostream>
using namespace std;

int main() {
    system("CLS");
    
    int kode;
    int jmlh = 0;
    cout << "Masukkan kode 3 digit mainan : ";
    cin >> kode;

    if (kode >= 100 && kode <= 999) {
        string kstring = to_string(kode); 
        jmlh = (kstring[0]- '0') + (kstring[1]- '0') + (kstring[2]- '0');
        cout <<"Jumlah digit : " << jmlh << endl;
        cout <<"Kode Berhasil! Mainan akan terbuka ";
    } else {
        cout << "Kode salah\n";
        cout << "Coba lagi ya dek ya\n";
    }
}
