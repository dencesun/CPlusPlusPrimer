//#include "chapter03/Chapter03.h"
//#include "chapter04/chapter04.h"
//#include "chapter05/chapter05.h"
//#include "chapter06/chapter06.h"
//#include "chapter07/chapter07.h"
#include "chapter07/ex07_41.h"
#include "chapter07/ex07_43.h"
#include "chapter07/ex07_57.h"
#include "chapter08/ex08_04.h"
#include "chapter08/ex08_05.h"
#include "chapter08/ex08_13.h"
int main(int argc, char** argv) {
    std::cout << "begin to run programming..." << std::endl;
////
////    test_08_04();
////    test_ex08_05();
//    std::vector<std::string> vec;
//    std::string file_name = "./data/book.txt";
//
//    std::ifstream ifs(file_name);
//
//    if (!ifs) {
//        std::cerr << "no data " << std::endl;
//    }
//    std::string buf;
//    while (std::getline(ifs, buf)) {
//        vec.push_back(buf);
//    }
//
//    for (auto item : vec) {
//        std::istringstream iss(item);
//        std::string word;
//        while (iss>>word) {
//            std::cout << word << std::endl;
//        }
//    }
    test_ex08_13();
    return 0;
}