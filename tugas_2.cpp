#include <iostream>
using namespace std;

int main() {
    int soto, rawon;
    int total;

    cout << "==============================" << endl;
    cout << "        MENU MAKANAN" << endl;
    cout << "==============================" << endl;
    cout << "Soto  : Rp15.000" << endl;
    cout << "Rawon : Rp20.000" << endl;
    cout << "==============================" << endl;

    cout << "Jumlah Soto  (0 jika tidak beli): ";
    cin >> soto;

    cout << "Jumlah Rawon (0 jika tidak beli): ";
    cin >> rawon;

    total = (soto * 15000) + (rawon * 20000);

    cout << endl;
    cout << "==============================" << endl;
    cout << "        STRUK PEMBELIAN" << endl;
    cout << "==============================" << endl;
    cout << "Soto  : " << soto << " x Rp15.000" << endl;
    cout << "Rawon : " << rawon << " x Rp20.000" << endl;
    cout << "------------------------------" << endl;
    cout << "Total : Rp" << total << endl;
    cout << "==============================" << endl;

    system("pause");

    return 0;
}
