#include "sampleTest.h"
class SolverTest : public  ::testing::Test {
protected:
    Solver s;
    std::string hamstersPosition, testHamstersPosition;
};
TEST_F(SolverTest, test1) {
    testHamstersPosition = "xxXx";
    hamstersPosition = "XxXx";
    ASSERT_EQ(1, s.solve424A14(testHamstersPosition));
    ASSERT_EQ(hamstersPosition, testHamstersPosition);
};

TEST_F(SolverTest, test2) {
    testHamstersPosition = "XX";
    hamstersPosition = "xX";
    ASSERT_EQ(1, s.solve424A14(testHamstersPosition));
    ASSERT_EQ(hamstersPosition, testHamstersPosition);
};

TEST_F(SolverTest, test3) {
    testHamstersPosition = "xXXxXx";
    hamstersPosition = "xXXxXx";
    ASSERT_EQ(0, s.solve424A14(testHamstersPosition));
    ASSERT_EQ(hamstersPosition, testHamstersPosition);
};