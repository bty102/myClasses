#pragma once
#include <iostream>
#include <cmath>
class vector {
    public:
        vector();
        vector(int dim);
        void input();
        void show();
        double & operator [](int i);
        double & operator ()(int i);
        vector & operator =(const vector &v);
        vector operator ++();
        vector operator ++(int);
        vector operator --();
        vector operator --(int);
        vector operator +(const vector &v);
        vector operator -(const vector &v);
        //vector & operator =(const vector &v);
        bool operator ==(const vector &v);
        bool operator !=(const vector &v);
        double operator !();
    private:
        int dim;
        double *x;
};
