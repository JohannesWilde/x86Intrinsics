// https://en.cppreference.com/w/cpp/numeric/math/div

#include "x86instructions.hpp"

#include <format>
#include <iostream>

#include <intrin.h>
#include <immintrin.h>

int main()
{
    std::div_t const dv0 = X86Instructions::idiv(5, 3);

    std::lldiv_t const dv1 = X86Instructions::idiv((long long int)5, (long long int)3);

    return 0;
}
