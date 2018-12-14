//
// Created by dencesun on 2018/12/12.
//

#include "ex07_41.h"

void test_ex07_41() {

    std::cout << "1. default way: " << std::endl;
    std::cout << "--------------" << std::endl;
    Sales_data s1;

    std::cout << "\n2. use std::string as a parameter: " << std::endl;
    std::cout << "--------------" << std::endl;
    Sales_data s2("cpp-primer-5th");

    std::cout << "\n3. complete parameters: " << std::endl;
    std::cout << "--------------" << std::endl;
    Sales_data s3("cpp-primer-5th", 5, 10);

    std::cout << "\n4. use istream as a parameter: " << std::endl;
    Sales_data s4(std::cin);
}


Sales_data::Sales_data(std::istream &is) : Sales_data() {
    std::cout << "Sales_data::Sales_data(std::istream &is)" << std::endl;
    read(is, *this);
}

Sales_data& Sales_data::combine(const Sales_data &item) {
    units_sold += item.units_sold;
    revenue += item.revenue;

    return *this;
}

std::istream& read(std::istream& is, Sales_data& item) {
    double price;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;

    return is;
}

std::ostream& print(std::ostream& os, const Sales_data& item) {
    os << item.get_isbn() << " " << item.get_units_sold() << " " << item.get_revenue() << std::endl;

    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
    Sales_data sum = lhs;
    sum.combine(rhs);

    return sum;
}