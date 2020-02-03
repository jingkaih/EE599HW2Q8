#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::vector<int> vect = {637, 231, 123, 43, 69, 43, 900, 10, 7, 21, 99, 0, 500};
    solution.SortThenRearrange(vect);
    for(auto x : vect)
    {
        std::cout << x <<' ';
    }

    return EXIT_SUCCESS;
}