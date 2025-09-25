//
// Created by Kilian on 25.09.25.
//

#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string input = "99+42";
    std::stringstream stream(input);
    int number_1, number_2;
    char op;
    stream >> number_1 >> op >> number_2;
    std::cout << number_1 + number_2 << std::endl;

    return 0;
}