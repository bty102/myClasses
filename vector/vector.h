#pragma once
#include <iostream>
#include <cmath>
#include <istream>
#include <ostream>
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
        friend std::istream & operator >>(std::istream &inp, vector &v);
        friend std::ostream & operator <<(std::ostream &out, const vector &v);
    private:
        int dim;
        double *x;
};
//std::istream & operator >>(std::istream &inp, vector &v);
//std::ostream & operator <<(std::ostream &out, const vector &v);
