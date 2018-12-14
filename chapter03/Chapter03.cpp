//
// Created by dencesun on 2018/12/3.
//

#include "Chapter03.h"

void ex3_02a() {
    std::string input;

    while(getline(std::cin, input)) {
        std::cout << input << std::endl;
    }
}

void ex3_02b() {

    std::string word;

    while (std::cin>>word) {
        std::cout << word << std::endl;
    }
}

void ex3_04a() {
    std::string str1, str2;

    while (std::cin>>str1>>str2) {
        if (str1 == str2) {
            std::cout << "str1 equqls str2" << std::endl;
        } else if (str1 > str2) {
            std::cout << "str1 is bigger and str1 = " << str1 << std::endl;
        } else {
            std::cout << "str2 is bigger and str2 = " << str2 << std::endl;
        }
    }
}

void ex3_04b() {
    std::string str1, str2;

    while (std::cin>>str1>>str2) {
        auto l1 = str1.size();
        auto l2 = str2.size();

        if (l1 == l2) {
            std::cout << "str1's length equals str2's" << std::endl;
        } else if (l1 > l2) {
            std::cout << "str1 is longer and str1 == " << str1 << std::endl;
        } else {
            std::cout << "str2 is longer and str2 == " << str2 << std::endl;
        }
    }
}

void ex3_05a() {
    std::string largeStr;
    std::string str;

    while (std::cin>>str) {
        largeStr += str;
    }

    std::cout << "largeStr is: " << largeStr << std::endl;
}

void ex3_05b() {
    std::string largeStr;
    std::string str;

    while (std::cin >> str) {
        if (largeStr.empty()) {
            largeStr += str;
        } else {
            largeStr += " " + str;
        }
    }

    std::cout << "largeStr is: " << largeStr << std::endl;
}

void ex3_06() {
    std::string str;

    while(getline(std::cin, str)) {
        std::cout << "str = " << str << std::endl;
        for (char &c : str) {
            c = 'X';
        }
        std::cout << "str = " << str << std::endl;
    }
}

void ex3_08() {
    std::string str;

    while (getline(std::cin, str)) {
        std::cout << "str = " << str << std::endl;

        decltype(str.size()) i = 0;
        while (i < str.size()) {
            str[i] = 'x';
            ++i;
        }
        std::cout << "str = " << str << std::endl;

        for (i = 0; i<str.size(); ++i) {
            str[i] = '*';
        }
        std::cout << "str = " << str << std::endl;
    }
}

void ex3_10() {
    std::string str;

    while (getline(std::cin, str)) {
        for (auto c : str) {

            if (!ispunct(c)) {
                std::cout << c;
            }
        }
    }
}

void ex3_14() {
    std::vector<int> vec;
    int n;

    while (std::cin>>n) {
        vec.push_back(n);
    }

    for (auto n : vec) {
        std::cout << n << std::endl;
    }
}

void ex3_15() {
    std::vector<std::string> svec;
    std::string str;

    while(std::cin>>str) {
        svec.push_back(str);
    }
}

void ex3_16() {
    std::vector<int> v1;
    std::cout << "{\n \"v1\":{\"size\":\""<<v1.size()<<"\",\"value\":[";
    for (auto i : v1) {
        std::cout << i << ",";
    }
    if (!v1.empty()) std::cout << "\b";
    std::cout << "]}" << std::endl;

    std::vector<int> v2(10);
    std::cout << "{\n \"v2\":{\"size\":\""<<v2.size()<<"\",\"value\":[";
    for (auto i : v2) {
        std::cout << i << ",";
    }
    if (!v2.empty()) std::cout << "\b";
    std::cout << "]}" << std::endl;

    std::vector<int> v3(10, 42);
    std::cout << "{\n \"v3\":{\"size\":\""<<v3.size()<<"\",\"value\":[";
    for (auto i : v3) {
        std::cout << i << ",";
    }
    if (!v3.empty()) std::cout << "\b";
    std::cout << "]}" << std::endl;

    std::vector<int> v4{10};
    std::cout << "{\n \"v4\":{\"size\":\""<<v4.size()<<"\",\"value\":[";
    for (auto i : v4) {
        std::cout << i << ",";
    }
    if (!v4.empty()) std::cout << "\b";
    std::cout << "]}" << std::endl;

    std::vector<int> v5{10, 42};
    std::cout << "{\n \"v5\":{\"size\":\""<<v5.size()<<"\",\"value\":[";
    for (auto i : v5) {
        std::cout << i << ",";
    }
    if (!v5.empty()) std::cout << "\b";
    std::cout << "]}" << std::endl;

    std::vector<std::string> v6{10};
    std::cout << "{\n \"v6\":{\"size\":\""<<v6.size()<<"\",\"value\":[";
    for (auto i : v6) {
        if (i.empty())
            std::cout << "(null)" << ",";
    }
    if (!v6.empty()) std::cout << "\b";
    std::cout << "]}" << std::endl;

    std::vector<std::string> v7{10, "hi"};
    std::cout << "{\n \"v7\":{\"size\":\""<<v7.size()<<"\",\"value\":[";
    for (auto i : v7) {
        std::cout << i << ",";
    }
    if (!v7.empty()) std::cout << "\b";
    std::cout << "]}\n}" << std::endl;
}

void ex3_17() {
    std::vector<std::string> svec;
    std::string word;

    while(std::cin>>word) svec.push_back(word);
    for (auto& str : svec) {
        for (auto c : str) {
            c = toupper(c);
        }
    }

    for (decltype(svec.size()) i = 0; i<svec.size(); ++i) {
        std::cout << svec[i] << std::endl;
    }
}

void check(const std::vector<int>& vec) {
    if (vec.empty()) {
        std::cout << "size: 0, no values" << std::endl;
    }
    else {
        std::cout << "size:" << vec.size() << "; values:";
        for (auto it = vec.begin(); it != vec.end(); ++it) {
            std::cout << *it << ",";
        }
        std::cout << "\b."<<std::endl;
    }
}

void check(const std::vector<std::string> &svec) {
    if (svec.empty())
        std::cout << "size: 0, no values" << std::endl;
    else {
        std::cout << "size:" << svec.size() << "; values:";
        for (auto it = svec.begin(); it != svec.end(); ++it) {
            if ((*it).empty()) {
                std::cout << "(null)" << ",";
            }
            else {
                std::cout << *it << ",";
            }
        }
        std::cout << "\b."<< std::endl;
    }
}

void ex3_21() {
    std::vector<int> v1;
    std::vector<int> v2(10);
    std::vector<int> v3(10, 42);
    std::vector<int> v4{10};
    std::vector<int> v5{10, 42};
    std::vector<std::string> v6{10};
    std::vector<std::string> v7{10, "hi"};

    check(v1);
    check(v2);
    check(v3);
    check(v4);
    check(v5);
    check(v6);
    check(v7);
}

void ex3_22() {
    std::vector<std::string> text;

    text.push_back("hello ");
    text.push_back("world ");
    text.push_back("I ");
    text.push_back("am ");
    text.push_back("a ");
    text.push_back("programmer.");

    for (auto it = text.begin(); it != text.end(); ++it) {
        for (auto& c : *it) {
            c = toupper(c);
        }
        std::cout << *it << std::endl;
    }
}

void ex3_23() {
    std::vector<int> vec(10, 3);

    std::cout << "input" << std::endl;
    for (auto it = vec.cbegin(); it != vec.cend(); ++it) {
        std::cout << *it << ",";
    }
    std::cout << "\b." << std::endl;

    for (auto it = vec.begin(); it != vec.end(); ++it) {
        *it = 2*(*it);
    }

    std::cout << "result" << std::endl;
    for (auto it = vec.cbegin(); it != vec.cend(); ++it) {
        std::cout << *it << ",";
    }
    std::cout << "\b." << std::endl;
}

void ex3_24(){
    std::vector<int> vec{1,2,3,4,5,6,7,8,9};

    if (vec.empty()) {
        std::cout << "vec is empty" << std::endl;
        return ;
    }
    else if (vec.size() == 1) {
        std::cout << *vec.cbegin() << "has no adjacent element" <<  std::endl;
    }

    for (auto it = vec.cbegin(); it+1 != vec.cend(); ++it) {
        std::cout << *it + *(it+1) << " ";
    }
    std::cout << "\b." << std::endl;

    for (auto beg = vec.cbegin(), end = vec.cend()-1; beg <= end; beg++, end--) {
        std::cout << *beg + *end << " ";
    }
    std::cout << "\b." << std::endl;
}

void ex3_25() {
    std::vector<unsigned> scores(11, 0);
    unsigned grade;

    while(std::cin>>grade){
        if (grade <= 100) {
            ++(*(scores.begin() + grade/10));
        }
    }
    for (auto score : scores) {
        std::cout << score << " ";
    }
    std::cout << "\b." << std::endl;
}

void ex3_31() {
    int arr[10];

    for (size_t i = 0; i<10; ++i) {
        arr[i] = i;
    }

    for (auto e : arr) {
        std::cout << e << ",";
    }
    std::cout << "\b." << std::endl;
}

void ex3_32() {
    int arr1[10];
    int arr2[10];

    for (size_t i = 0; i<10; ++i) arr1[i] = i;
    for (size_t i = 0; i<10; ++i) arr2[i] = arr1[i];

    std::vector<int> vec1(10);
    for (auto it = vec1.begin(); it != vec1.end(); ++it) *it = it -vec1.begin();

    std::vector<int> vec2(vec1);
    for (auto e : vec2) std::cout << e << ",";
    std::cout << "\b." << std::endl;
}

void ex3_35() {
    int arr[10];
    int *pbegin = std::begin(arr);
    int *pend = std::end(arr);

    while (pbegin < pend) {
        *pbegin = 0;
        pbegin++;
    }

    for (auto e : arr) {
        std::cout << e << ",";
    }
    std::cout << "\b." << std::endl;
}

bool compare(const int* pbegin1, const int* pend1, const int* pbegin2, const int* pend2) {
    if ((pend1-pbegin1) != (pend2 - pbegin2)) {
        return false;
    }

    while (pbegin1 != pend1 && pbegin2 != pend2) {
        if (*pbegin1 != *pbegin2) {
            return false;
        }
        pbegin1++;
        pbegin2++;
    }

    return true;
}

void ex3_36() {
    int arr1[3] = {0,1,2};
    int arr2[3] = {0,2,4};

    if (compare(std::begin(arr1), std::end(arr1), std::begin(arr2), std::end(arr2))) {
        std::cout << "the two arrays are equal." << std::endl;
    }
    else {
        std::cout << "the two arrays are not equal." << std::endl;
    }

    std::vector<int> vec1{0,1,2};
    std::vector<int> vec2{0,1,2};

    if (vec1 == vec2) {
        std::cout << "the two vectors are equal." << std::endl;
    }
    else {
        std::cout << "the two vectors are not equal." << std::endl;
    }
}

void ex3_39() {
    std::string str1("sun");
    std::string str2("jack");

    if (str1 == str2) {
        std::cout << "same string" << std::endl;
    } else if (str1 > str2) {
        std::cout << "sun > jack" << std::endl;
    } else {
        std::cout << "sun < jack" << std::endl;
    }

    const char* cs1 = "sun";
    const char* cs2 = "jack";

    auto result = strcmp(cs1, cs2);
    if (result == 0) {
        std::cout << "same string" << std::endl;
    } else if (result > 0) {
        std::cout << "cs1 > cs2" << std::endl;
    } else {
        std::cout << "cs1 < cs2" << std::endl;
    }
}

void ex3_40() {
    const char *cs1 = "hello";
    const char *cs2 = "world";

    size_t  newSize = strlen(cs1) + strlen(" ") + strlen(cs2) + 1;
    char *cs3 = new char[newSize];

    strcpy(cs3,cs1);
    strcat(cs3, " ");
    strcat(cs3, cs2);
    strcat(cs3, ".");

    std::cout << cs3 << std::endl;
}

void ex3_41() {
    int arr[] = {0,1,2,3,4,5,6,7,8,9};

    std::vector<int> vec(std::begin(arr), std::end(arr));

    for (auto e : vec) {
        std::cout << e << ",";
    }
    std::cout << "\b."<< std::endl;
}

void ex3_42() {
    std::vector<int> vec{0,1,2,3,4,5,6,7,8,9};
    int arr[10];

    for (auto i = std::begin(arr); i != std::end(arr); ++i) {
        *i = vec[i-std::begin(arr)];
    }

    for (auto e : arr) {
        std::cout << e << ",";
    }
    std::cout << "\b." << std::endl;
}

void ex3_43() {
    int ia[3][4] = {
            {0,1,2,3},
            {4,5,6,7},
            {8,9,10,11}
    };

    for (const int (&p)[4] : ia) {
        for (auto e : p) {
            std::cout << e << ".";
        }
    }
    std::cout << "\b." << std::endl;

    for (size_t i = 0; i<3; ++i) {
        for (size_t j = 0; j<4; ++j) {
            std::cout << ia[i][j] << ",";
        }
    }
    std::cout << "\b." << std::endl;

    for (int (*p)[4] = ia; p != ia+3; ++p) {
        for (const int *q = *p; q != *p+4; ++q) {
            std::cout << *q << ",";
        }
    }
    std::cout << "\b." << std::endl;
}

void ex3_44() {
    int ia[3][4] = {
        {0,1,2,3},
        {4,5,6,7},
        {8,9,10,11}
    };

    using intArr = int[4];

    for (intArr& p : ia) {
        for (int e : p) {
            std::cout << e << ",";
        }
    }
    std::cout << "\b." << std::endl;

    for (intArr* p = ia; p != ia+3; ++p) {
        for (int *q = *p; q != *p+4; ++q) {
            std::cout << *q << ",";
        }
    }
    std::cout << "\b." << std::endl;
}

void ex3_45() {
    int arr[3][4] = {
            {0,1,2,3},
            {4,5,6,7},
            {8,9,10,11}
    };

    for (auto p = arr; p != arr+3; ++p) {
        for (auto q = *p; q != *p+4; ++q) {
            std::cout << *q << ",";
        }
    }
    std::cout << "\b." << std::endl;

    for (auto &p : arr) {
        for (const auto &q : p) {
            std::cout << q << ",";
        }
    }
    std::cout << "\b." << std::endl;
}