#include <vector>

#include "myfunctions.hpp"

std::vector<int> make_vector(int v, int n)
{
    return std::vector<int>(n, v);
}

int sum(int x, int y)
{
    return x + y;
}
