#include <iostream>
#include <solve.h>
using namespace std;
#define IOS                                                                    \
  ios::sync_with_stdio(false);                                                 \
  cin.tie(0);                                                                  \
  cout.tie(0);
#define endl "\n"

int main(int argc, char* argv[]) {
  IOS;
  int n, numberOfStandingHamster = 0, minMinutes = 0,
         numberOfSittingHamster = 0;
  cin >> n;
  char *hamstersPosition = new char[n];
  for (int i = 0; i < n; i++) {
      cin >> hamstersPosition[i];
      if (hamstersPosition[i] == 'X')
          numberOfStandingHamster++;
      else
          numberOfSittingHamster++;
  }
  Solver s;
  s.solve424A14(n,numberOfStandingHamster,minMinutes,numberOfSittingHamster,hamstersPosition);
  cout << minMinutes << endl;
    for (int i = 0; i < n; i++)
    cout << hamstersPosition[i];
}
