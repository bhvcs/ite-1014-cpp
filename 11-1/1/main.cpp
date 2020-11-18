#include <iostream>
#include "my_string.h"

int main(){
    std::string command, c1, c2, c3;
    int num;
    MyString m1, m2, m3;
    std::cin >> command;
    if( command == "new" ){
        std::cout << "enter a" << std::endl;
        std::cin >> m1;

        std::cout << "enter b" << std::endl;
        std::cin >> m2;
    }
    while(1){
        std::cin >> c1;
        if( c1 == "a" ){
            std::cin >> c2;
            if( c2 == "+" ){
                std::cin >> c3;
                if( c3 == "b" ){
                    m3 = m1 + m2;
                    std::cout << m3;
                    }
            }
            else if( c2 == "*" ){
                std::cin >> num;
                m3 = m1 * num;
                std::cout << m3;
            }
        }
        else if( c1 == "b"){
            std::cin >> c2;
            if( c2 == "*"){
                std::cin >> num;
                m3 = m2 * num;
                std::cout << m3;
            }
        }
        else if( c1 == "quit" ){
            break;
        }
    }
    return 0;
}
