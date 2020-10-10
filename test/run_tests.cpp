//
// Created by gc on 10/10/20.
//

#include "../cmake-build-debug/googletest-src/googletest/include/gtest/gtest.h"

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

