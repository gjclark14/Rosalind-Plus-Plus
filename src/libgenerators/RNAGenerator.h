//
// Created by gc on 10/17/20.
//

#ifndef ROSALINDPP_RNAGENERATOR_H
#define ROSALINDPP_RNAGENERATOR_H

#include <string>

namespace RNAGenerator {
    // Generated string will have MIN <= size <= MAX
    static const int MAX = 1000;
    static const int MIN = 750;

    std::string generate_RNA();

    int get_MAX();
    int get_MIN();

};


#endif //ROSALINDPP_RNAGENERATOR_H
