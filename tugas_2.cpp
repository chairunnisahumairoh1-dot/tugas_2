#include <iostream>
using namespace std;

int main() {
    int soto = 0;
    int rawon = 0;
    int total = 0;
    char pilih;

    cout << "==============================" << endl;
    cout << "        MENU MAKANAN" << endl;
    cout << "==============================" << endl;
    cout << "Soto  : Rp15.000" << endl;
    cout << "Rawon : Rp20.000" << endl;
    cout << "==============================" << endl;

    // Pesanan Soto
    cout << "Mau pesan Soto? (y/n): ";
    cin >> pilih;

    if (pilih == 'y' || pilih == 'Y') {
        cout << "Jumlah Soto: ";
        cin >> soto;
    }

    // Pesanan Rawon
    cout << "Mau pesan Rawon? (y/n): ";
    cin >> pilih;

    if (pilih == 'y' || pilih == 'Y') {
        cout << "Jumlah Rawon: ";
        cin >> rawon;
    }

    // Hitung total
    total = (soto * 15000) + (rawon * 20000);

    // Nota
    cout << endl;
    cout << "==============================" << endl;
    cout << "        STRUK PEMBELIAN" << endl;
    cout << "==============================" << endl;

    if (soto > 0) {
        cout << "Soto  : " << soto << " x Rp15.000" << endl;
    } else {
        cout << "Soto  : 0" << endl;
    }

    if (rawon > 0) {
        cout << "Rawon : " << rawon << " x Rp20.000" << endl;
    } else {
        cout << "Rawon : 0" << endl;
    }

    cout << "------------------------------" << endl;
    cout << "Total : Rp" << total << endl;
    cout << "==============================" << endl;

    system("pause");

    return 0;
}
