//
// Created by dencesun on 2018/12/12.
//

#ifndef CPLUSPLUSPRIMER_EX07_41_H
#define CPLUSPLUSPRIMER_EX07_41_H

#include "../util.h"

class Sales_data;

std::istream& read(std::istream& is, Sales_data& item);
std::ostream& pring(std::ostream& os , const Sales_data& item);
Sales_data add(const Sales_data& lhs, const Sales_data& rhs);

class Sales_data {
    friend std::istream& read(std::istream& is, Sales_data& item);
    friend std::ostream& print(std::ostream& os, const Sales_data& item);
    friend Sales_data add(const Sales_data& lhs, const Sales_data& rhs);

public:
    Sales_data(const std::string& s, unsigned n, double p):
            bookNo(s),
            units_sold(n),
            revenue(p)
    {
        std::cout << "Sales_data(const std::string& s, unsigned n, double p)" << std::endl;
    }

    Sales_data() : Sales_data("", 0, 0.0f) {
        std::cout << "Sales_data()" << std::endl;
    }

    Sales_data(const std::string& s):Sales_data(s, 0, 0.0f) {
        std::cout << "Sales_data(const std::string& s)" << std::endl;
    }

    Sales_data(std::istream& is);

    std::string get_isbn() const {return bookNo;}
    unsigned get_units_sold() const {return units_sold;};
    double get_revenue() const {return revenue;}
    Sales_data& combine(const Sales_data& item);

private:
    inline double avg_price() const;

private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

//
//class Book {
//public:
//    Book(unsigned no, std::string name, std::string author, std::string pubdate) :
//            no_(no),
//            name_(name),
//            author_(author),
//            pubdate_(pubdate)
//    {
//
//    }
//    Book() : Book(0, " ", "", "") {}
//    Book(std::istream& is) : Book(0, "","", "") {is>>no_>>name_>>author_>>pubdate_;}
//private:
//    unsigned no_;
//    std::string name_;
//    std::string author_;
//    std::string pubdate_;
//};

void test_ex07_41();
#endif //CPLUSPLUSPRIMER_EX07_41_H
