#include "x86instructions.hpp"

std::div_t X86Instructions::idiv(std::int32_t dividend, std::int32_t const divisor)
{
    static_assert(sizeof(int) == sizeof(std::int32_t));
    return std::div(dividend, divisor);
}

std::lldiv_t X86Instructions::idiv(std::int64_t const dividend, std::int64_t const divisor)
{
    static_assert(sizeof(long long int) == sizeof(std::int64_t));
    return std::div(dividend, divisor);
}
