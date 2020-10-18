//
// Created by gc on 10/17/20.
//

#include "REVCCalculator.h"

// returns the reverse complement
/*
 * RULES:
 * A <-> T
 * C <-> G
 * Reverse it
 */
std::string REVCCalculator::calculate(const std::string &input) {
    std::string reverse;
    const int SIZE = input.length();

    // reverse
    for(int i = SIZE - 1; i >=0; i--)
        reverse += input.at(i);

    // and compliment
    for(int i = 0; i < SIZE; i++) {
        switch (reverse.at(i)) {
            case 'A' :
                reverse.at(i) = 'T';
                break;
            case 'C' :
                reverse.at(i) = 'G';
                break;
            case 'G' :
                reverse.at(i) = 'C';
                break;
            case 'T' :
                reverse.at(i) = 'A';
                break;
        }
    }

    return reverse;
}
