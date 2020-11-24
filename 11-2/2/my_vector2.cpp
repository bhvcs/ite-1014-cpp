#include <iostream>
#include "my_vector2.h"

MyVector2::MyVector2(){
    length = 0;
    a = new double[length];
}
MyVector2::MyVector2(int length){
    this-> length = length;
    a = new double[length];
}
MyVector2::MyVector2(const MyVector2& mv){
    length = mv.length;
    a = new double[length];//
    a = mv.a;
}
MyVector2::~MyVector2(){
    delete a;
}
MyVector2 MyVector2::operator+(const MyVector2& b){
    MyVector2 my_vector(length);
    for( int i = 0; i < length; i++){
        (my_vector.a)[i] = a[i] + (b.a)[i];
    }
    return my_vector;
}
MyVector2 MyVector2::operator-(const MyVector2& b){
    MyVector2 my_vector(length);
    for( int i = 0; i < length; i++){
        (my_vector.a)[i] = a[i] - (b.a)[i];
    }
    return my_vector;
}

MyVector2 MyVector2::operator+(const int b){
    MyVector2 my_vector = MyVector2(length);

    for( int i=0; i < length; i++){
        my_vector.a[i] = a[i] + b;

    }

    return my_vector;
}

MyVector2 MyVector2::operator-(const int b){
    MyVector2 my_vector(length);
    for( int i = 0; i < length; i++){
        (my_vector.a)[i] = a[i] - b;
    }
    return my_vector;
}
std::ostream& operator<<(std::ostream& out, MyVector2& b){
    for( int i = 0; i < b.length; i++){
        out << (b.a)[i] << " ";
    }
    return out;
}
std::istream& operator>>(std::istream& in, MyVector2& b)
{
    for( int i = 0; i < b.length; i++){
        in >> (b.a)[i];
    }
    return in;
}
