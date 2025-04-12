#include <iostream>
using namespace std;

int main(){
    system("CLS");
    int k1,k2,k3,plus;

    cout<<"Deaktivasi Nuklir : "<<endl;
    cout<<"Masukkan Kode 1 : "; cin>>k1;
    cout<<"Masukkan Kode 2 : "; cin>>k2;
    cout<<"Masukkan Kode 3 : "; cin>>k3;
    plus = k1 + k2+ k3;

    if (k1>=50 && k2>=50 && k3>=50){
        if (plus>=200){
            cout<<"Aman"<<endl;
            cout<<"Nuklir telah dinonaktifkan\n";
            cout<<"Kerja Bagus\n";
        } else {
            cout<<"Bahaya"<<endl;
            cout<<"Nuklir nak meletop";
        }
    } else {
        cout<<"Bahaya"<<endl;
        cout<<"Nuklir nak meletop";
    }
}