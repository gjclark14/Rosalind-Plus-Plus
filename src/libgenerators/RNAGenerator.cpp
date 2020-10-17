//
// Created by gc on 10/17/20.
//

#include "RNAGenerator.h"
#include "random"

std::string RNAGenerator::generate_RNA() {
    std::string random_dna_string;

    std::random_device rd;      // obtain a random number from hardware
    std::mt19937 gen(rd());     // seed the generator
    std::uniform_int_distribution<> max_range(RNAGenerator::MIN, RNAGenerator::MAX);   // inclusive

    const int MAX_RANGE = max_range(gen);
    std::uniform_int_distribution<> symbol_range(0,3);
    for(int i = 0; i < MAX_RANGE; i++) {
        switch (symbol_range(gen)) {
            case 0:
                random_dna_string += 'A';
                break;
            case 1:
                random_dna_string += 'C';
                break;
            case 2:
                random_dna_string += 'G';
                break;
            case 3:
                random_dna_string += 'T';
                break;
        }
    }
    return random_dna_string;
}
