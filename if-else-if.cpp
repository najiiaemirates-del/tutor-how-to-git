#include <iostream>
using namespace std;
main(){
    string lampu;
    cout << "Warna lampu: " << endl;
    cin >> lampu;
    if (lampu == "hijau") {
        cout << "JALAN" << endl;
    } else if (lampu == "kuning") {
        cout << "HATI-HATI" << endl;
    } else {
        cout << "BERHENTI" << endl;
    }
    return 0;

}