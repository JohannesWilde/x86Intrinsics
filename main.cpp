// https://en.cppreference.com/w/cpp/numeric/math/div

#include "x86instructions.hpp"

#include <format>
#include <iostream>

#include <intrin.h>
#include <immintrin.h>

int main()
{
    _div_t const dv = X86Instructions::idiv(5, 3);

    // _div_t const dv = std::div((int)5, (int)3);

    // _lldiv_t const lldv = std::div((long long int)5, (long long int)3);

    return 0;
}
