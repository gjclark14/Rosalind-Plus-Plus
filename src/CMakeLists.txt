add_executable(src main.cpp
        libcalculators/DNACalculator.cpp
        libcalculators/DNACalculator.h
        libgenerators/DNAGenerator.cpp
        libgenerators/DNAGenerator.h
        validators/DNAValidator.cpp
        validators/DNAValidator.h
        )

set(libgenerators_SRCS
        libgenerators/DNAGenerator.h
        libgenerators/DNAGenerator.cpp
        )

set(libcalculators_SRCS
        libcalculators/DNACalculator.h
        libcalculators/DNACalculator.cpp
        )

set(validators_SRCS
        validators/DNAValidator.h
        validators/DNAValidator.cpp
        )

# this makes a library out of libgenerators
add_library(libgenerators STATIC
        ${libgenerators_SRCS})
add_library(libcalculators STATIC
        ${libcalculators_SRCS})
add_library(validators STATIC
        ${validators_SRCS})
