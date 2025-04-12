#include <iostream>
using namespace std;

int main()  {
    system("CLS");
    int hitung=1,i=0;
    string buku;

    cout<<"Masukkan DaftarJudul buku : "; getline(cin,buku);
    while (i<=buku.length()) {
        if (buku[i] == ' ') {
            hitung++;
        }
        i++;
    }
    cout<<"Jumlah Judul Buku: "<<hitung;
}