#pragma once
#ifndef CVECTOR_H
#define CVECTOR_H

#include <iostream>
using namespace std;

class CVector {
private:
    int soChieu;
    double* data;

public:
    // Constructor
    CVector(int n = 0);

    // Copy constructor
    CVector(const CVector& other);

    // Destructor
    ~CVector();

    // Toán tử gán
    CVector& operator=(const CVector& other);

    // + -
    CVector operator+(const CVector& other) const;
    CVector operator-(const CVector& other) const;

    // Nhân vô hướng
    double operator*(const CVector& other) const;

    // Nhập xuất
    friend istream& operator>>(istream& in, CVector& v);
    friend ostream& operator<<(ostream& out, const CVector& v);
};

#endif
