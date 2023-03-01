#include "my_lib.hpp"

/**
 * @brief Prints out hello world and tests JSON lib.
 * 
 */
void sayHello(void)
{
    std::cout << "Hello World!" << "\n";
}


/**
 * @brief Calculates the factorial value of the given argument
 * 
 */
std::uint32_t factorial(std::uint32_t number)
{
    return number <= 1 ? 1 : factorial(number - 1) * number;
}