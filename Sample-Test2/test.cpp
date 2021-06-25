#include "sampleTest.h"
class SolverTest : public  ::testing::Test {
protected:
    Solver s;
    std::string hamstersPosition, testHamstersPosition;
    std::pair<int,std::string> p;

    
};
TEST_F(SolverTest, test1) {
    testHamstersPosition = "xxXx";
    hamstersPosition = "XxXx";
    p.first = 1;
    p.second = hamstersPosition;
    ASSERT_EQ(p, s.solve424A14(testHamstersPosition));
};

TEST_F(SolverTest, test2) {
    testHamstersPosition = "XX";
    hamstersPosition = "xX";
    p.first = 1;
    p.second = hamstersPosition;
    ASSERT_EQ(p, s.solve424A14(testHamstersPosition));
};

TEST_F(SolverTest, test3) {
    testHamstersPosition = "xXXxXx";
    hamstersPosition = "xXXxXx";
    p.first = 0;
    p.second = hamstersPosition;
    ASSERT_EQ(p, s.solve424A14(testHamstersPosition));
};