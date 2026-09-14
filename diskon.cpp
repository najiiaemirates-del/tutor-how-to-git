#include <iostream>
using namespace std;
int main(){
    int belanja;
    float diskon;
    float totalBayar;
    
    cout << "KALKULATOR KASIR TOKO" << endl;
    cout << "Masukkan total belanja (Rp): " << endl;
    cin >> belanja;
    if (belanja < 100000) {
        diskon = 0;
    } else if (belanja < 300000 && belanja >= 100000) {
        diskon = 0.10;
    } else {
        diskon = 0.20;
    }
    totalBayar = belanja - (belanja * diskon);
    cout << "RINGKASAN PEMBAYARAN" << endl;
    cout << "Diskon: " << diskon * 100 << "%" << endl;
    cout << "Potongan: Rp." << belanja * diskon << endl;
    cout << "Total bayar: Rp." << totalBayar << endl;
    
    return 0;
}