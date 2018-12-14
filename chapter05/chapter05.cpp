//
// Created by dencesun on 2018/12/6.
//

#include "chapter05.h"

void ex5_24() {
    int a, b;
    std::cin >> a >> b;

    if (b == 0) {
        throw std::runtime_error("divisor is 0");
    }

    std::cout << static_cast<double> (a) / b << std::endl;

}

void ex5_25() {
    int a, b;

    std::cout << "input two integers: ";
    while (std::cin >> a >> b) {
        try {
            if (b == 0) {
                throw std::runtime_error("divisor is 0");
            }
            std::cout << static_cast<double> (a) / b << std::endl;
            std::cout << "input two integers: " << std::endl;
        } catch (std::runtime_error err) {
            std::cout << err.what();
            std::cout << "\n try again? n/y" << std::endl;
            char c;
            std::cin >> c;

            if (!std::cin || c == 'n') {
                break;
            }
        }
    }

    return ;
}