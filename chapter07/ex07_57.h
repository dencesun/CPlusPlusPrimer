//
// Created by dencesun on 2018/12/12.
//

#ifndef CPLUSPLUSPRIMER_EX07_57_H
#define CPLUSPLUSPRIMER_EX07_57_H

#include "../util.h"

class Account {
public:
    Account(std::string owner, double amount):owner(owner), amount(amount) {}
    Account() : Account("", 0) {};
    void calculate() {amount += amount*interestRate;}
    static double rate() {return interestRate;}
    static void rate(double newRate) {interestRate = newRate;}

private:
    std::string owner;
    double amount;
    static double interestRate;
    static constexpr double todayRate = 43.03;
    static double initRate() {return todayRate;}
};


class Example {
public:
    static constexpr double rate = 6.5;
    static constexpr int vecSize = 20;
    static std::vector<double> vec;
//    double arr[vecSize];
};


double Account::interestRate = initRate();
std::vector<double> Example::vec = std::vector<double>(19, 0);

#endif //CPLUSPLUSPRIMER_EX07_57_H
