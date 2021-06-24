#include "sampleTest.h"

TEST(problemsolve424A14, test1) {
    Solver s;
    std::string hamstersPosition, testHamstersPosition;
    testHamstersPosition = "xxXx";
    hamstersPosition = "XxXx";
    ASSERT_EQ(1, s.solve424A14(testHamstersPosition));
    ASSERT_EQ(hamstersPosition, testHamstersPosition);
};