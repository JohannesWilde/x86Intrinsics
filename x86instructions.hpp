#ifndef X86INSTRUCTIONS_HPP
#define X86INSTRUCTIONS_HPP

#include <cstdint>
#include <cstdlib>

class X86Instructions
{
public:
    X86Instructions() = delete;

    static std::div_t idiv(std::int32_t const dividend, std::int32_t const divisor);

    static std::lldiv_t idiv(std::int64_t const dividend, std::int64_t const divisor);
};

#endif // X86INSTRUCTIONS_HPP
