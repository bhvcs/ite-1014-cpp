#include <iostream>
#include "my_string2.h"

MyString2::MyString2(){
    str = "";
}
MyString2::MyString2(const MyString2& b){
    str = b.str;
}
MyString2 MyString2::operator+(const MyString2& b){
    MyString2 my_string;
    my_string.str = str + b.str;
    return my_string;
}
MyString2 MyString2::operator*(const int b){
    MyString2 my_string;
    my_string.str = "";
    for( int i =0; i < b; i++){
        my_string.str += str;
    }
    return my_string;
}
std::ostream& operator<<(std::ostream& out, MyString2& my_string){
    out << my_string.str << std::endl;
    return out;
}
std::istream& operator>>(std::istream& in, MyString2& my_string){
    in >> my_string.str;
    return in;
}

