//
// Created by gc on 10/17/20.
//

#include "RNACalculator.h"

// replaces all occurrences of 'T' in input with 'U'
std::string RNACalculator::calculate(const std::string &input) {
    const int MAX = input.size();
    std::string output = input;
    for(int i = 0; i < MAX; i++) {
        if(input.at(i) == 'T') {
            output.at(i) = 'U';
        }
    }
    return output;
}
