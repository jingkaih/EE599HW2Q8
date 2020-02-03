#include "solution.h"
#include <algorithm>

void Solution::SortThenRearrange(std::vector<int> &vect)
{ 
  std::vector<int> result;
  std::sort(vect.begin(),vect.end());
  if(vect.size() % 2 == 0)
  {
    /*even*/
    int half = vect.size() / 2;
    std::reverse(vect.begin(), vect.begin() + half);
    std::reverse(vect.begin() + half, vect.end());
  }
  else
  {
    /*odd*/
    int half = vect.size() / 2;
    std::reverse(vect.begin(),vect.begin() + half);
    std::reverse(vect.begin() + half + 1, vect.end());
  
  }
}

