#include <iostream>
#include "my_vector.h"

MyVector::MyVector(){
    length = 0;
    a = new double[length];
}
MyVector::MyVector(int length){
    this-> length = length;
    a = new double[length];
}
MyVector::~MyVector(){
    delete a;
    //check delete form
}
MyVector& MyVector::operator=(const MyVector& b){
    length = b.length;
    a = new double[length];
    for(int i = 0; i < length; i++){
        a[i] = b.a[i];
    }
    return (*this);
}
MyVector MyVector::operator+(const MyVector& b){
    MyVector my_vector(length);
    for( int i = 0; i < length; i++){
        (my_vector.a)[i] = a[i] + (b.a)[i];
    }
    return my_vector;
}
MyVector MyVector::operator-(const MyVector& b){
    MyVector my_vector(length);
    for( int i = 0; i < length; i++){
        (my_vector.a)[i] = a[i] - (b.a)[i];
    }
    return my_vector;
}

MyVector MyVector::operator+(const int b){
    MyVector my_vector = MyVector(length);

    for( int i=0; i < length; i++){
        my_vector.a[i] = a[i] + b;
        
    }
    
    return my_vector;
}

MyVector MyVector::operator-(const int b){
    MyVector my_vector(length);
    for( int i = 0; i < length; i++){
        (my_vector.a)[i] = a[i] - b;
    }
    return my_vector;
}
std::ostream& operator<<(std::ostream& out, MyVector& b){
    for( int i = 0; i < b.length; i++){
        out << (b.a)[i] << " ";
    }
    return out;
}
std::istream& operator>>(std::istream& in, MyVector& b)
{
    for( int i = 0; i < b.length; i++){
        in >> (b.a)[i];
    }
    return in;
}
