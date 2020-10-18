//
// Created by gc on 10/17/20.
//

#include "gtest/gtest.h"
#include "../../src/libgenerators/REVCGenerator.h"

namespace REVC {
    bool contains_only_nucleotides(const std::string &dna);
}

//
TEST(REVC_Generator, generate_REVC) {
    std::string dna_string = REVCGenerator::generate();
    ASSERT_TRUE(REVC::contains_only_nucleotides(dna_string));

}

bool REVC::contains_only_nucleotides(const std::string &dna){
    for(const char c: dna)
        if (c != 'A' and c != 'C' and c != 'G' and c != 'T')
            return false;
    return true;
}
