//
// Created by dencesun on 2018/12/12.
//

#ifndef CPLUSPLUSPRIMER_EX07_43_H
#define CPLUSPLUSPRIMER_EX07_43_H

#include "../util.h"

class NoDefault {
public:
    NoDefault(int i) {}
};

class C {
public:
    C(): def(0) {}
private:
    NoDefault def;

};

#endif //CPLUSPLUSPRIMER_EX07_43_H
