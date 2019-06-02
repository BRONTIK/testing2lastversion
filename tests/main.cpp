#include "digits_test.h"
#include "c1n_tests.h"
#include "ch_tests.h"

#include <gtest/gtest.h>

int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
