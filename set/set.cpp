#include "set.h"
set::set() {
    size = 0;
    elm = NULL;
}
set::set(int size) {
    if(size > 0) {
        this->size = size;
        elm = new double[size];
        for(int i = 0; i <= size-1; i++) {
            elm[i] = 0;
        }
    }
    else
        set();
}
void set::setSize(int size) {
    if(size > this->size) {
        int tmp = this->size;
        this->size = size;
        double *store = new double[tmp];
        for(int i = 0; i <= tmp-1; i++) {
            store[i] = elm[i];
        }
        delete [] elm;
        elm = new double[size];
        for(int i = 0; i <= tmp-1; i++) {
            elm[i] = store[i];
        }
        for(int i = tmp; i <= size-1; i++) {
            elm[i] = 0;
        }
    }
}
int set::getSize() {
    return size;
}
void set::input() {
    for(int i = 0; i <= size-1; i++) {
        std::cin >> elm[i];
    }
}
void set::show() {
    for(int i = 0; i <= size-1; i++) {
        std::cout << elm[i] << " ";
    }
    std::cout << std::endl;
}
bool operator &(const double a, set &A) {
    for(int i = 0; i <= A.size-1; i++) {
        if(A.elm[i] == a)
            return false;
    }
    A.setSize(A.size + 1);
    A.elm[A.size-1] = a;
    return true;
}
bool operator ==(const set &A, const set &B) {
    if(A.size != B.size) return false;
    for(int i = 0; i <= A.size-1; i++) {
        bool survi = false;
        for(int j = 0; j <= B.size-1; j++) {
            if(A.elm[i] == B.elm[j]) {
                survi = true;
                break;
            }
        }
        if(!survi) return false;
    }
    return true;
}
bool operator !=(const set &A, const set &B) {
    if(A == B) return false;
    return true;
}
set operator *(const set &A, const set &B) {
    set G;
    for(int i = 0; i <= A.size-1; i++) {
        for(int j = 0; j <= B.size-1; j++) {
            if(A.elm[i] == B.elm[j]) {
                A.elm[i] & G;
            }
        }
    }
    return G;
}
set operator +(const set &A, const set &B) {
    set H;
    for(int i = 0; i <= A.size-1; i++) {
        A.elm[i] & H;
    }
    for(int i = 0; i <= B.size-1; i++) {
        B.elm[i] & H;
    }
    return H;
}
