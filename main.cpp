#include <iostream>
#include <solve.h>
const auto IOS = std::ios::sync_with_stdio(false);                                                              
const std::string endl  = "\n";

int main(int argc, char* argv[]) {
  IOS;
  std::cin.tie(0);
  std::cout.tie(0);

  int n;
  std::cin >> n;
  std::string hamstersPosition;
  std::cin >> hamstersPosition;
  
  Solver s;
  int minMinutes = s.solve424A14(hamstersPosition);
  std::cout << minMinutes << endl;
  std::cout << hamstersPosition;
}
