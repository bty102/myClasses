#include "vector.h"
vector::vector() {
    dim = 0;
    x = NULL;
}
vector::vector(int dim) {
    if(dim > 0) {
        this->dim = dim;
        x = new double[dim];
        for(int i = 0; i <= dim-1; i++) {
            x[i] = 0;
        }
    }
    else
        vector();
}
void vector::input() {
    for(int i = 0; i <= dim-1; i++) {
        std::cin >> x[i];
    }
}
void vector::show() {
    for(int i = 0; i <= dim-1; i++) {
        std::cout << x[i] << " ";
    }
    std::cout << std::endl;
}
double & vector::operator [](int i) {
    return x[i];
}
double & vector::operator ()(int i) {
    return x[i];
}
vector vector::operator ++() {
    for(int i = 0; i <= dim-1; i++) {
        x[i] += 1;
    }
    return *this;
}

vector vector::operator ++(int) {
    vector tmp;
    tmp.operator=(*this);
    for(int i = 0; i <= dim-1; i++) {
        x[i] += 1;
    }
    return tmp;
}
vector vector::operator --() {
    for(int i = 0; i <= dim-1; i++) {
        x[i] -= 1;
    }
    return *this;
}
vector vector::operator --(int) {
    vector tmp;
    tmp.operator=(*this);
    for(int i = 0; i <= dim-1; i++) {
        x[i] -= 1;
    }
    return tmp;
}
vector vector::operator +(const vector &v) {
    vector t;
    if(dim != v.dim) return t;
    t.dim = dim;
    t.x = new double[dim];
    for(int i = 0; i <= dim-1; i++) {
        t.x[i] = x[i] + v.x[i];
    }
    return t;
}
vector vector::operator -(const vector &v) {
    vector h;
    if(dim != v.dim) return h;
    h.dim = dim;
    h.x = new double[dim];
    for(int i = 0; i <= dim-1; i++) {
        h.x[i] = x[i] - v.x[i];
    }
    return h;
}
vector & vector::operator =(const vector &v) {
    dim = v.dim;
    delete [] x;
    x = new double[dim];
    for(int i = 0; i <= dim-1; i++) {
        x[i] = v.x[i];
    }
    return *this;
}
bool vector::operator ==(const vector &v) {
    if(dim != v.dim) return false;
    for(int i = 0; i <= dim-1; i++) {
        if(x[i] != v.x[i])
            return false;
    }
    return true;
}
bool vector::operator !=(const vector &v) {
    if(*this == v) return false;
    return true;
}
double vector::operator !() {
    double tmp = 0;
    for(int i = 0; i <= dim-1; i++) {
        tmp += x[i]*x[i];
    }
    return sqrt(tmp);
}
std::istream & operator >>(std::istream &inp, vector &v) {
    std::cout << "dim: ";
    inp >> v.dim;
    delete [] v.x;
    v.x = new double[v.dim];
    for(int i = 0; i <= v.dim-1; i++) {
        inp >> v.x[i];
    }
    return inp;
}
std::ostream & operator <<(std::ostream &out, const vector &v) {
    out << "(";
    for(int i = 0; i <= v.dim-2; i++) {
        out << v.x[i] << ", ";
    }
    out << v.x[v.dim-1] << ")\n";
    return out;
}
