#pragma once
#include <iostream>
//Lop tap hop cac so thuc
class set {
    public:
        set();
        set(int size);
        void setSize(int size);
        int getSize();
        void input();
        void show();
    private:
        int size;
        double *elm;

friend bool operator &(const double a, set &A);//them mot phan tu vao tap hop
friend bool operator ==(const set &A, const set &B);//so sanh 2 tap hop co bang nhau khong
friend bool operator !=(const set &A, const set &B);//so sanh 2 tap hop co khac nhau khong
friend set operator *(const set &A, const set &B);//giao 2 tap hop
friend set operator +(const set &A, const set &B);//hop 2 tap hop
};
//bool operator &(const double a, set &A);
//bool operator ==(const set &A, const set &B);
//bool operator !=(const set &A, const set &B);
//set operator *(const set &A, const set &B);
//set operator +(const set &A, const set &B);
