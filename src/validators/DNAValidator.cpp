//
// Created by gc on 10/10/20.
//

#include <iostream>
#include "DNAValidator.h"
#include "../libcalculators/DNACalculator.h"

bool DNAValidator::validate(std::string generated_string, std::string output) {
    return generated_string == output;
}
