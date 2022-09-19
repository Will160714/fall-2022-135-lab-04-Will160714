#include <iostream>
#include "all.h"

int main(){
    //Task A
    std::string a = box(4,4);
    std::cout <<"Task A\n";
    std::cout << "box(4,4):\n";
    std::cout << std::endl;
    std::cout << a << std::endl;
    std::cout << "------------------\n";

    //Task B
    std::string b = checkerboard(11, 6);
    std::cout <<"Task B\n";
    std::cout << "checkerboard(11,6):\n\n";
    std::cout << b << std::endl;
    std::cout << "------------------\n"; 

    //Task C
    std::string c = cross(8);
    std::cout <<"Task C\n";
    std::cout << "cross(8):\n\n";
    std::cout << c << std::endl;
    std::cout << "------------------\n"; 

    //Task D
    std::string d = lower(6);
    std::cout <<"Task D\n";
    std::cout << "lower(6):\n\n";
    std::cout << d << std::endl;
    std::cout << "------------------\n"; 

    //Task E
    std::string e = upper(5);
    std::cout <<"Task E\n";
    std::cout << "upper(5):\n\n";
    std::cout << e << std::endl;
    std::cout << "------------------\n"; 

    //Task F
    std::string f = trapezoid(12, 5);
    std::cout <<"Task F\n";
    std::cout << "trapezoid(12, 5):\n\n";
    std::cout << f << std::endl;
    std::cout << "------------------\n"; 

    //Task G
    std::string g = check3x3(16, 11);
    std::cout <<"Task G\n";
    std::cout << "check3x3(16, 11):\n\n";
    std::cout << g << std::endl;
    std::cout << "------------------\n"; 

    return 0;
}
