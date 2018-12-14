//
// Created by dencesun on 2018/12/13.
//

#ifndef CPLUSPLUSPRIMER_EX08_13_H
#define CPLUSPLUSPRIMER_EX08_13_H

#include "../util.h"

struct PersonInfo {
    std::string name;
    std::vector<std::string> phones;
};

bool isvalid(const std::string& phone) {
    return std::isdigit(phone[0]);
}

std::string formate(const std::string& phone) {
    return phone.substr(0,3) + "-" + phone.substr(3,3) + "-" + phone.substr(6);
}

void test_ex08_13() {
    std::string file_name("./data/phonenumbers.txt");
    std::vector<PersonInfo> people;
    std::istringstream record;

    std::ifstream ifs(file_name);
    if(!ifs) {
        std::cerr<<"no data" << std::endl;
    }

    std::string buf, word;
    while(std::getline(ifs, buf)) {
        record.clear();
        record.str(buf);
        PersonInfo info;
        record >> info.name;
        while(record>>word) info.phones.push_back(word);
        people.push_back(info);
    }

    for (const auto& entry : people) {
        std::ostringstream formatted, badNums;
        for (const auto& nums : entry.phones) {
            if (!isvalid(nums)) {
                badNums << " " << nums;
            }
            else {
                formatted << " " << formate(nums);
            }
        }
        if (badNums.str().empty()) {
            std::cout << entry.name << " " << formatted.str() << std::endl;
        }
        else {
            std::cerr << "input error" << entry.name << " invalid nubmer(s) " << badNums.str() << std::endl;
        }
    }
}
#endif //CPLUSPLUSPRIMER_EX08_13_H
