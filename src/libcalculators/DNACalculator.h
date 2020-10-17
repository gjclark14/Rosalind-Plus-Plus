//
// Created by gc on 10/10/20.
//

#ifndef ROSALINDPP_DNACALCULATOR_H
#define ROSALINDPP_DNACALCULATOR_H


#include <string>

namespace DNACalculator {

    int count(const char &symbol, const std::string &string_to_count_from);

    std::string calculate(const std::string &string_to_count_from);

};


#endif //ROSALINDPP_DNACALCULATOR_H
