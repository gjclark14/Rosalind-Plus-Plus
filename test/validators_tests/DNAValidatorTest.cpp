//
// Created by gc on 10/17/20.
//

#include "gtest/gtest.h"
#include "fstream"
#include "../../src/validators/DNAValidator.h"
#include "../../src/libcalculators/DNACalculator.h"

#define infile "../../input_txt/rosalind_dna.txt"
#define output "217 210 221 212"


TEST(DNA_Validator, validate) {
    std::ifstream fin;
    std::string rosalind_dna_string;
    fin.open(infile);
    getline(fin, rosalind_dna_string);

    ASSERT_TRUE(DNAValidator::validate(DNACalculator::calculate(rosalind_dna_string), output));

}
