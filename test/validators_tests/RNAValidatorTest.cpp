//
// Created by gc on 10/17/20.
//

#include "gtest/gtest.h"
#include "fstream"
#include "../../src/validators/RNAValidator.h"
#include "../../src/libcalculators/RNACalculator.h"

#define infile "../../input_txt/rosalind_rna.txt"
#define output "GUUAGCGGCUAUGUCCGUAAAACACGGUACAGGCCGGCGCGAAGGGUCAAAGACGAUAUUUCACCGGUGUCGGCGUCACUGAUGGCAUCACACGUGGGUCACCUGUUUUAGGUUUGUGGUACCGAAGUAUGCAGAUUCAAAAAAAAACGCAUGGCCGACGUGUCGACCGGUGGGAUGAGAGACGUGCUAAGGUUUAUACGCAACACGGUUUUAGAUGAUAGUACCCGAUUCCCCGCUCGACAACAUCGUCUUUCCAAUUUUCUCGAGUUCGAGUCGGAAAUUGUAGUUGGGUUGACACUAUCUUUGACCCGGUUUAAGGGCGCAUCCGGCCGGCGUAAAGAAGGUCACCCACACUGUAGAGUAUUAGUAAGUUGCUGCCGUAUACUGCGUUUCUUAUUAUCUCUUAUAAAUGGCAGAUCAAAAUCAACAACCUCAACCGAACAUCUGAUUUGGAUUCACCUACCAGCUCAAGGUGAAGCGGUGGGCCAGUCGUAGUAGUUGUUGUAUACUAUAUUUUCUUGAUACAGGCCUACUAAACCAUCGCAACGUCUGUGACUACAAAUUCAGUGGAUUGGAGCAGAGACCACAAGUACGCAUUUUGACUGAUCAACGCUACGGCGGUCAACGGCCAGCGCGCUAUAUCCGCGCAGGUGCAACCUUGUCCCUUUACCGGGACACCUUCGGGUCGUAUCUUACGCGGAAGACUUGAGGUCUUAUUACCUGUGUUAGUUCGUUGCAAUUUCACCGCAUAAGCAAUAGGAUUGGGACGGUAGCUUCCAUUGCUAGCGCAGAGGAUCGUUAAGCAUCUUACAAUGACAAGUGGCUCCGAACCUCCAUAAACGCUCUAUAGGUCUAUCACACUGAAAACGACCCGCCUGCUGGUCCAUACAUGUUCGAAGCAUGGCCGUUACCCGGUCAAUCGCUUACAUGAUUUAUCGCUUUUCCACAAAUGAAUUAACCGGACGCCGCUACGGUUAGAGUGAC"

TEST(RNA_Validator, validate) {
    std::ifstream fin;
    std::string rosalind_dna_string;
    fin.open(infile);
    getline(fin, rosalind_dna_string);

    ASSERT_TRUE(RNAValidator::validate(RNACalculator::calculate(rosalind_dna_string), output));
}

TEST(RNA_Validator, validate_with_sample) {
    std::string dna = "GATGGAACTTGACTACGTAAATT";
    std::string rna = "GAUGGAACUUGACUACGUAAAUU";

    ASSERT_TRUE(RNAValidator::validate(RNACalculator::calculate(dna), rna));
}