//
// Created by dencesun on 2018/12/12.
//

#ifndef CPLUSPLUSPRIMER_EX07_50_H
#define CPLUSPLUSPRIMER_EX07_50_H

#include "../util.h"

class Person {
    friend std::istream& read(std::istream& is, Person& item);
    friend std::ostream& print(std::ostream& os, const Person& item);

public:
    Person() = default;
    Person(std::string& name, std::string& address) : name(name), address(address) {}

    explicit Person(std::istream &is) {read(is, *this);}

    std::string get_name() const {return name;}
    std::string get_address() const {return address};

private:
    std::string name;
    std::string address;
};

std::istream& read(std::istream& is, Person& item) {
    is>>item.name>>item.address;
    return is;
}

std::ostream& print(std::ostream& os, const Person& item) {
    os << item.name << " " << item.address;
    return os;
}


#endif //CPLUSPLUSPRIMER_EX07_50_H
