//
// Created by gc on 10/10/20.
//

#ifndef ROSALINDPP_DNAGENERATOR_H
#define ROSALINDPP_DNAGENERATOR_H


#include <string>

namespace DNAGenerator {
    // Generated string will have MIN <= size <= MAX
    static const int MAX = 1000;
    static const int MIN = 750;

    std::string generate_DNA();

    int get_MAX();
    int get_MIN();

};


#endif //ROSALINDPP_DNAGENERATOR_H
