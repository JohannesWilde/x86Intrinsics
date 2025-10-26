#include "x86instructions.hpp"

_div_t X86Instructions::idiv(const int dividend, const int divisor)
{

    return std::div(dividend, divisor);
}
