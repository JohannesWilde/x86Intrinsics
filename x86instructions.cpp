#include "x86instructions.hpp"

std::div_t X86Instructions::idiv(int const dividend, int const divisor)
{
    return std::div(dividend, divisor);
}

std::lldiv_t X86Instructions::idiv(long long const dividend, long long const divisor)
{
    return std::div(dividend, divisor);
}
