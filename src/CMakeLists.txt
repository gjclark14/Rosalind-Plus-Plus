add_executable(src main.cpp
        libcalculators/DNACalculator.cpp
        libcalculators/DNACalculator.h
        libgenerators/DNAGenerator.cpp
        libgenerators/DNAGenerator.h)


set(libgenerators_SRCS
        libgenerators/DNAGenerator.cpp
        libgenerators/DNAGenerator.h validators/DNAValidator.cpp validators/DNAValidator.h)

# this makes a library out of libgenerators
add_library(libgenerators STATIC
        ${libgenerators_SRCS})
