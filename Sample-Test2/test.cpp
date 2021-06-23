#include "sampleTest.h"
Solver s;
int n, numberOfStandingHamster = 0, minMinutes = 0, testMinMinutes = 0,
numberOfSittingHamster = 0;
char* hamstersPosition = new char[n];
char* testHamstersPosition = new char[n];

void setter(int n, char* hamstersPosition) {
    for (int i = 0; i < n; i++) {
        if (hamstersPosition[i] == 'X')
            numberOfStandingHamster++;
        else
            numberOfSittingHamster++;
    }
}
TEST(problemsolve424A14, test1) {
    n = 4;
    testHamstersPosition[0] = 'x';
    testHamstersPosition[1] = 'x';
    testHamstersPosition[2] = 'X';
    testHamstersPosition[3] = 'x';
    setter(n, testHamstersPosition);
    hamstersPosition[0] = 'X';
    hamstersPosition[1] = 'x';
    hamstersPosition[2] = 'X';
    hamstersPosition[3] = 'x';
    minMinutes = 1;
    s.solve424A14(n, numberOfStandingHamster, testMinMinutes, numberOfSittingHamster,
        testHamstersPosition);
    ASSERT_EQ(minMinutes, testMinMinutes);
    for (int i = 0; i < n; i++)
        ASSERT_EQ(hamstersPosition[i], testHamstersPosition[i]); 
}
