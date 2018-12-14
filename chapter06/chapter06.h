//
// Created by dencesun on 2018/12/6.
//

#ifndef CPLUSPLUSPRIMER_CHAPTER06_H
#define CPLUSPLUSPRIMER_CHAPTER06_H

#include "../util.h"

#define NDEBUG

using Iter = std::vector<int>::iterator;

void ex6_10(int* const lhs, int* const rhs);
bool ex6_17a(const std::string &str);
const std::string& ex6_17b(std::string& str);
void ex06_22(const int*& lhs, const int*& rhs);
int ex06_27(const std::initializer_list<int> &il);
void ex06_33(Iter begin, Iter end);
std::string ex06_42(size_t ctr, const std::string& world, const std::string &ending = "s");
inline bool ex06_44(const std::string& s1, const std::string &s2) {return s1.size() < s2.size();}
void ex06_47(std::vector<int> &vec);

#endif //CPLUSPLUSPRIMER_CHAPTER06_H
