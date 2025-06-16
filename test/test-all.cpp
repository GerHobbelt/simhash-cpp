#include <gtest/gtest.h>

#if defined(BUILD_MONOLITHIC)
#define main      simhash_tests_main
#endif

extern "C"
int main(int argc, const char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
