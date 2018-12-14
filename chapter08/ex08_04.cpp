//
// Created by dencesun on 2018/12/13.
//
#include "ex08_04.h"

void read_file_to_vec(const std::string& file_name, std::vector<std::string>& vec) {
    std::ifstream ifs(file_name);

    if (ifs) {
        std::string buf;
        while (std::getline(ifs, buf)) {
            vec.push_back(buf);
//            std::cout << buf << std::endl;
        }
    }
    else {
        std::cerr << "open file failed" << std::endl;
    }
}

void test_08_04() {
    std::vector<std::string> vec;
//    std::string file_name("/Users/dencesun/Documents/CPlusPlusPrimer/data/book.txt");
    std::string file_name("./data/book.txt");
    read_file_to_vec(file_name, vec);

    for (const auto& item : vec) {
        std::cout << item << std::endl;
    }
}
