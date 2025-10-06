#include <iostream>
#include <cstdlib>
#include "../lib/diceRolling.hpp"
#include "../lib/damage.hpp"
int main() {
    srand(time(0));
    std::cout << roll(d4) << std::endl;
    return 0;
}