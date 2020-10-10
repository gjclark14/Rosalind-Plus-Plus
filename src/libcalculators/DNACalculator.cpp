//
// Created by gc on 10/10/20.
//

#include "DNACalculator.h"

int DNACalculator::count(const char &symbol, const std::string &string_to_count_from) {
    int count = 0;
    for(const char c: string_to_count_from)
        if(symbol == c)
            count++;

    return count;
}

std::string DNACalculator::calculate(const std::string &string_to_count_from) {
    int a_count = 0;
    int c_count = 0;
    int g_count = 0;
    int t_count = 0;
    for(const char c : string_to_count_from) {
        switch (c) {
            case 'A':
                a_count++;
                break;
            case 'C':
                c_count++;
                break;
            case 'G':
                g_count++;
                break;
            case 'T':
                t_count++;
                break;
        }
    }

    return std::to_string(a_count) + " " + std::to_string(c_count) + " "
    + std::to_string(g_count) + " " + std::to_string(t_count);
}


