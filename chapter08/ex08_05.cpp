//
// Created by dencesun on 2018/12/13.
//

#include "ex08_05.h"

void read_file_to_vec(const std::string file_name, std::vector<std::string>& vec) {
    std::ifstream ifs(file_name);

    if (ifs) {
        std::string buf;
        while(ifs >> buf) vec.push_back(buf);
    }
}

void test_ex08_05() {
    std::vector<std::string> vec;
    const std::string file_name("./data/book.txt");

    read_file_to_vec(file_name, vec);

    for (const auto& item : vec) {
        std::cout << item << std::endl;
    }
}
