#include <iostream>
using namespace std;

int main() {
    int soto, rawon;
    int hargaSoto = 15000;
    int hargaRawon = 20000;
    int total;

    cout << "==============================" << endl;
    cout << "        MENU MAKANAN" << endl;
    cout << "==============================" << endl;
    cout << "1. Soto  - Rp15.000" << endl;
    cout << "2. Rawon - Rp20.000" << endl;
    cout << "==============================" << endl;

    cout << "Jumlah Soto  : ";
    cin >> soto;

    cout << "Jumlah Rawon : ";
    cin >> rawon;

    total = (soto * hargaSoto) + (rawon * hargaRawon);

    cout << endl;
    cout << "==============================" << endl;
    cout << "       STRUK PEMBELIAN" << endl;
    cout << "==============================" << endl;
    cout << "Soto  : " << soto << " x Rp15.000" << endl;
    cout << "Rawon : " << rawon << " x Rp20.000" << endl;
    cout << "------------------------------" << endl;
    cout << "Total : Rp" << total << endl;
    cout << "==============================" << endl;

    system("pause");

    return 0;
}
