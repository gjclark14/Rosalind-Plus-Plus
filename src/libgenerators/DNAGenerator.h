//
// Created by gc on 10/10/20.
//

#ifndef ROSALINDPP_DNAGENERATOR_H
#define ROSALINDPP_DNAGENERATOR_H


#include <string>

class DNAGenerator {
private:
    // Generated string will have MIN <= size <= MAX
    static const int MAX = 1000;
    static const int MIN = 750;

public:
    static std::string generate_DNA();

    static int get_MAX();
    static int get_MIN();

};


#endif //ROSALINDPP_DNAGENERATOR_H
