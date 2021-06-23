#include "solve.h"

void Solver::solve424A14(int&n,int&numberOfStandingHamster,int&minMinutes,int&numberOfSittingHamster,char*hamstersPosition){

  int localMin;
  if (numberOfStandingHamster < n / 2) {
      minMinutes = n / 2 - numberOfStandingHamster;
      localMin = minMinutes;
      for (int i = 0; i < n && localMin > 0; i++)
          if (hamstersPosition[i] == 'x' ) {
              hamstersPosition[i] = 'X';
              localMin--;
          }
  }else if (numberOfSittingHamster < n / 2) {
    minMinutes = n / 2 - numberOfSittingHamster;
    localMin = minMinutes;
    for(int i=0;i<n && localMin>0;i++)
      if (hamstersPosition[i] == 'X' ) {
        hamstersPosition[i] = 'x';
        localMin--;
      }
  } 
}
