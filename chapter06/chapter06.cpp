//
// Created by dencesun on 2018/12/6.
//
#include "chapter06.h"

void ex6_10(int* const lhs, int* const rhs) {
    auto tmp = *lhs;
    *lhs = *rhs;
    *rhs = tmp;
}

bool ex6_17a(const std::string& str){
    for (auto c : str) {
        if (isupper(c)) return true;
    }
    return false;
}

const std::string& ex6_17b(std::string &str) {
    for (auto& c : str) {
        if (isupper(c)) c = tolower(c);
    }

    return str;
}

void ex06_22(const int*& lhs, const int*& rhs) {
    auto tmp = lhs;
    lhs = rhs;
    rhs = tmp;
}

int ex06_27(const std::initializer_list<int>& il) {
    int sum = 0;

    for (auto e : il) {
        sum += e;
    }

    return sum;
}

void ex06_33(Iter begin, Iter end) {
    if (begin != end) {
        std::cout << *begin << " ";
        ex06_33(std::next(begin), end);
    }
}

std::string ex06_42(size_t ctr, const std::string& world, const std::string &ending) {
    return (ctr>1)?world+ending:world;
}

void ex06_47(std::vector<int>& vec) {
#ifdef NDEBUG
    std::cout << "vector size: " << vec.size() << std::endl;
#endif
    if (!vec.empty()) {
        auto tmp = vec.back();
        vec.pop_back();
        ex06_47(vec);
        std::cout << tmp << " ";
    }
}