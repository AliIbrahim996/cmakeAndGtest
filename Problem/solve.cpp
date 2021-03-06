#include "solve.h"

std::pair<int,std::string> Solver::solve424A14(const std::string &hamstersPosition) {
    int numberOfStandingHamster = 0,
        numberOfSittingHamster = 0,
        localMin , minMinutes = 0,size = hamstersPosition.length();
    std::string hamstersPositionLocal =  hamstersPosition;
    for (int i = 0; i < size; i++) {
      if (hamstersPosition[i] == 'X')
          numberOfStandingHamster++;
      else
          numberOfSittingHamster++;
  }
  if (numberOfStandingHamster < size / 2) {
    minMinutes = size / 2 - numberOfStandingHamster;
    localMin = minMinutes;
    for (int i = 0; i < size && localMin > 0; i++)
      if (hamstersPosition[i] == 'x') {
        hamstersPositionLocal[i] = 'X';
        localMin--;
      }
  } else if (numberOfSittingHamster < size / 2) {
    minMinutes = size / 2 - numberOfSittingHamster;
    localMin = minMinutes;
    for (int i = 0; i < size && localMin > 0; i++)
      if (hamstersPosition[i] == 'X') {
        hamstersPositionLocal[i] = 'x';
        localMin--;
      }
  }
  std::pair<int,std::string> p(minMinutes,hamstersPositionLocal);
  return p;
}