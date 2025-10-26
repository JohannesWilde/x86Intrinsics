#ifndef X86INSTRUCTIONS_HPP
#define X86INSTRUCTIONS_HPP

#include <cstdlib>

class X86Instructions
{
public:
    X86Instructions() = delete;

    static std::div_t idiv(int const dividend, int const divisor);

    static std::lldiv_t idiv(long long int const dividend, long long int const divisor);
};

#endif // X86INSTRUCTIONS_HPP
