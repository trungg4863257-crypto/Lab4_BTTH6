#include "CVector.h"

int main() {

    CVector v1, v2;

    cout << "Nhap vector thu nhat:\n";
    cin >> v1;

    cout << "\nNhap vector thu hai:\n";
    cin >> v2;

    cout << "\nVector 1: ";
    cout << v1 << endl;

    cout << "Vector 2: ";
    cout << v2 << endl;

    // +
    cout << "\nTong hai vector:\n";
    cout << v1 + v2 << endl;

    // -
    cout << "\nHieu hai vector:\n";
    cout << v1 - v2 << endl;

    // *
    cout << "\nTich vo huong:\n";
    cout << v1 * v2 << endl;

    return 0;
}
