add_executable(src main.cpp
        libcalculators/DNACalculator.cpp
        libcalculators/DNACalculator.h
        libgenerators/DNAGenerator.cpp
        libgenerators/DNAGenerator.h
        validators/DNAValidator.cpp
        validators/DNAValidator.h
        libcalculators/RNACalculator.cpp libcalculators/RNACalculator.h libgenerators/RNAGenerator.cpp libgenerators/RNAGenerator.h validators/RNAValidator.cpp validators/RNAValidator.h)

set(libgenerators_SRCS
        libgenerators/DNAGenerator.h
        libgenerators/DNAGenerator.cpp
        libgenerators/RNAGenerator.cpp libgenerators/RNAGenerator.h)

set(libcalculators_SRCS
        libcalculators/DNACalculator.h
        libcalculators/DNACalculator.cpp
        libcalculators/RNACalculator.cpp libcalculators/RNACalculator.h)

set(validators_SRCS
        validators/DNAValidator.h
        validators/DNAValidator.cpp
        validators/RNAValidator.cpp validators/RNAValidator.h)

# this makes a library out of libgenerators
add_library(libgenerators STATIC
        ${libgenerators_SRCS})
add_library(libcalculators STATIC
        ${libcalculators_SRCS})
add_library(validators STATIC
        ${validators_SRCS})
