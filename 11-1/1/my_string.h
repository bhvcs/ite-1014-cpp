#ifndef __STRING_H__
#define __STRING_H__

#include <iostream>

class MyString
{
public:
    MyString& operator=(const MyString& b);/*{
        str = b.str;
        return (*this);
    }*/
    MyString operator+(const MyString& b);/*{
        str += b.str;
        return (*this);
    }*/
    MyString operator*(const int b);/*{
        str = str * b;
        return (*this);
    }*/
    friend std::ostream& operator<<(std::ostream& out, MyString& my_string);
    friend std::istream& operator>>(std::istream& in, MyString& my_string);

private:
    std::string str;
};

/*std::ostream& operator<<(std::ostream& out, const MyString& my_string){
    out << my_string.str;
    return out;
}
std::istream& operator<<(std::istream& in, const MyString& my_string){
    in >> my_string.str;
    return in;
}
*/

#endif
