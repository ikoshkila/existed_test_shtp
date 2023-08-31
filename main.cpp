#include "header.h"
#include <iostream>

int main(){
    int a,b;
    std::cin >> a;
    std::cin >> b;
    std::cout << sum(a,b) << "\n";
    std::string c,d;
    std::cin.ignore();
    getline(std::cin, c);
    getline(std::cin, d);
    std::cout << concat(c,d);
}