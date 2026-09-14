#include <iostream>
using namespace std;
int main(){
    int kode;
    int uang;
    int harga = 0;
    int kembalian;

    cout << "VENDING MACHINE" << endl;
    cout << "Pilihan minuman:\n1. Air mineral (Rp. 4000)\n2. Teh botol (Rp. 6000)\n 3. Kopi susu (Rp. 10000)\n" << endl;
    cout << "Pilh kode minuman (1-3): " << endl;
    cin >> kode;
    switch (kode)
    {
    case 1:
        harga = 4000;
        cout << "Air mineral anda berhasil dipesan" << endl;
        break;
    case 2:
        harga = 6000;
        cout << "Teh botol anda berhasil dipesan" << endl;
        break;
    case 3:
        harga = 10000;
        cout << "Kopi susu anda berhasil dipesan" << endl;
        break;
    default:
        cout << "Kode minuman tidak valid!" << endl;
        return 0;
    }
    cout << "scan barcode gopay anda untuk melakukan pembayaran, nominal gopay anda: " << endl;
    cin >> uang;
    if (uang < harga){
        cout << "Transaksi gagal!" << endl;
        cout << "Nominal saldo tidak mencukupi " << harga - uang << endl; 
    } else { 
        cout << "Transaksi berhasil!" << endl;

    }
    return 0;
}