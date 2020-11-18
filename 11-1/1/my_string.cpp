#include <iostream>
#include "my_string.h"

MyString& MyString::operator=(const MyString& b){
    str = b.str;
    return (*this);
}
MyString MyString::operator+(const MyString& b){
    MyString my_string;
    my_string.str = str + b.str;
    return my_string;
}
MyString MyString::operator*(const int b){
    MyString my_string;
    my_string.str = "";
    for( int i =0; i < b; i++){
        my_string.str += str;
    }
    return my_string;
}
std::ostream& operator<<(std::ostream& out, MyString& my_string){
    out << my_string.str << std::endl;
    return out;
}
std::istream& operator>>(std::istream& in, MyString& my_string){
    in >> my_string.str;
    return in;
}


