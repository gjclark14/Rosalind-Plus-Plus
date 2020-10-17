//
// Created by gc on 10/10/20.
//

#include "iostream"

#include "gtest/gtest.h"
#include "../../src/libgenerators/DNAGenerator.h"

bool contains_only_nucleotides(const std::string &dna);

TEST(DNA_Generator, generate_DNA) {
    std::string dna_string = DNAGenerator::generate_DNA();
    const int SIZE = dna_string.size();
    assert(SIZE >= DNAGenerator::get_MIN());
    assert(SIZE <= DNAGenerator::get_MAX());
    assert(contains_only_nucleotides(dna_string));

}

bool contains_only_nucleotides(const std::string &dna){
    for(const char c: dna)
        if (c != 'A' and c != 'C' and c != 'G' and c != 'T')
            return false;
   return true;
}