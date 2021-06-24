#include "sampleTest.h"
Solver s;
int n, numberOfStandingHamster = 0, minMinutes = 0, testMinMinutes,
numberOfSittingHamster = 0;
char* hamstersPosition;
char* testHamstersPosition;

void setter() {
    n = 4;
    hamstersPosition = new char[n];
    testHamstersPosition = new char[n];
    testHamstersPosition[0] = 'x';
    testHamstersPosition[1] = 'x';
    testHamstersPosition[2] = 'X';
    testHamstersPosition[3] = 'x';
   
    for (int i = 0; i < n; i++) {
        if (testHamstersPosition[i] == 'X')
            numberOfStandingHamster++;
        else
            numberOfSittingHamster++;
    }
    hamstersPosition[0] = 'X';
    hamstersPosition[1] = 'x';
    hamstersPosition[2] = 'X';
    hamstersPosition[3] = 'x';
    minMinutes = 1;
}
TEST(problemsolve424A14, test1) {
    setter();
    s.solve424A14(n, numberOfStandingHamster, testMinMinutes, numberOfSittingHamster,
        testHamstersPosition);
    
    ASSERT_EQ(minMinutes, testMinMinutes);
};
TEST(problemsolve424A14, test2) {
    for (int i = 0; i < n; i++)
        EXPECT_EQ(hamstersPosition[i], testHamstersPosition[i]);
};
