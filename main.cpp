// https://en.cppreference.com/w/cpp/numeric/math/div

#include <cstdlib>
#include <format>
#include <iostream>

#include <intrin.h>
#include <immintrin.h>

int main()
{
    _div_t const dv = std::div((int)5, (int)3);

    return 0;
}
