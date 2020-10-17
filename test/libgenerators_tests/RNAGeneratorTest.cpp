//
// Created by gc on 10/10/20.
//

#include "iostream"

#include "gtest/gtest.h"
#include "../../src/libgenerators/RNAGenerator.h"

bool contains_only_nucleotides(const std::string &dna);

//
TEST(RNA_Generator, generate_RNA) {
    std::string dna_string = RNAGenerator::generate_RNA();
    const int SIZE = dna_string.size();
    ASSERT_TRUE(SIZE >= RNAGenerator::get_MIN());
    ASSERT_TRUE(SIZE <= RNAGenerator::get_MAX());
    ASSERT_TRUE(contains_only_nucleotides(dna_string));

}

bool contains_only_nucleotides(const std::string &dna){
    for(const char c: dna)
        if (c != 'A' and c != 'C' and c != 'G' and c != 'T')
            return false;
   return true;
}