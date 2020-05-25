#include "MutantStack.hpp"
#include <iostream>

int main(void)
{
    MutantStack<int> stk;

    stk.push(3);
    stk.push(14);
    stk.push(-1);

    for (auto &i : stk)
        std::cout << i++ << std::endl;
    for (const auto &i : stk)
        std::cout << i << std::endl;

    return (0);
}