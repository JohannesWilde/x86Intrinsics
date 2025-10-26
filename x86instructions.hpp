#ifndef X86INSTRUCTIONS_HPP
#define X86INSTRUCTIONS_HPP

#include <cstdlib>

class X86Instructions
{
public:
    X86Instructions() = delete;

    static _div_t idiv(int const dividend, int const divisor);
};

#endif // X86INSTRUCTIONS_HPP
