// https://en.cppreference.com/w/cpp/numeric/math/div

#include <cassert>
#include <cmath>
#include <cstdlib>
#include <format>
#include <iostream>

int main()
{
    int const dividend = 1739;
    int const divisor = 29;
    auto dv = std::div(dividend, divisor);

    std::cout << std::format("{0} / {1} = {1} * {2} + {3}", dividend, divisor, dv.quot, dv.rem) << std::endl;

    return 0;
}
