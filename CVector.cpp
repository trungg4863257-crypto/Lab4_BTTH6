#include "CVector.h"

// Constructor
CVector::CVector(int n) {

    soChieu = n;

    data = new double[soChieu];

    for (int i = 0; i < soChieu; i++) {
        data[i] = 0;
    }
}

// Copy constructor
CVector::CVector(const CVector& other) {

    soChieu = other.soChieu;

    data = new double[soChieu];

    for (int i = 0; i < soChieu; i++) {
        data[i] = other.data[i];
    }
}

// Destructor
CVector::~CVector() {
    delete[] data;
}

// =
CVector& CVector::operator=(const CVector& other) {

    if (this != &other) {

        delete[] data;

        soChieu = other.soChieu;

        data = new double[soChieu];

        for (int i = 0; i < soChieu; i++) {
            data[i] = other.data[i];
        }
    }

    return *this;
}

// +
CVector CVector::operator+(const CVector& other) const {

    CVector temp(soChieu);

    for (int i = 0; i < soChieu; i++) {
        temp.data[i] = data[i] + other.data[i];
    }

    return temp;
}

// -
CVector CVector::operator-(const CVector& other) const {

    CVector temp(soChieu);

    for (int i = 0; i < soChieu; i++) {
        temp.data[i] = data[i] - other.data[i];
    }

    return temp;
}

// Nhân vô hướng
double CVector::operator*(const CVector& other) const {

    double tong = 0;

    for (int i = 0; i < soChieu; i++) {
        tong += data[i] * other.data[i];
    }

    return tong;
}

// >>
istream& operator>>(istream& in, CVector& v) {

    cout << "Nhap so chieu: ";
    in >> v.soChieu;

    delete[] v.data;

    v.data = new double[v.soChieu];

    for (int i = 0; i < v.soChieu; i++) {

        cout << "Thanh phan [" << i << "]: ";
        in >> v.data[i];
    }

    return in;
}

// <<
ostream& operator<<(ostream& out, const CVector& v) {

    out << "(";

    for (int i = 0; i < v.soChieu; i++) {

        out << v.data[i];

        if (i != v.soChieu - 1)
            out << ", ";
    }

    out << ")";

    return out;
}
