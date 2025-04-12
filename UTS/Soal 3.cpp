#include <iostream>
using namespace std;

int main() { 
    system("CLS");
    string nama, nim;
    int mk1,mk2,mk3,rata2;

    cout <<"Nama   : "; getline(cin,nama);
    cout <<"NIM    : "; cin>>nim;
    cout <<"Nilai Mata Kuliah : \n";
    cout <<"Algoritma dan Pemrograman       : "; cin>>mk1;
    cout <<"Probabilitas dan Statistika     : "; cin>>mk2;
    cout <<"Sistem Operasi                  : "; cin>>mk3;
    cout <<endl;
    rata2 = (mk1 + mk2 + mk3)/3;

    if (mk1>=60){
        cout<<"Algoritma dan Pemrograman       : Lulus"<<endl;
    } else {
        cout<<"Algoritma dan Pemrograman       : Tidak Lulus. Silakan Ulangi Tahun Depan"<<endl;
    }

        if (mk2>=60){
        cout<<"Probabilitas dan Statistika     : Lulus"<<endl;
    } else {
        cout<<"Probabilitas dan Statistika     : Tidak Lulus. Silakan Ulangi Tahun Depan"<<endl;
    }

        if (mk3>=60){
        cout<<"Sistem Operasi                  : Lulus"<<endl;
    } else {
        cout<<"Sistem Operasi                  : Tidak Lulus. Silakan Ulangi Tahun Depan"<<endl;
    }

    cout<<"Nilai rata-rata semester ini : "<<rata2<<endl;

}