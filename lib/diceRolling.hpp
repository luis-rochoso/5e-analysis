#ifndef DICEROLLING_HPP
#define DICEROLLING_HPP
#include <cstdlib>

enum Die {
    d4 = 4, d6 = 6, d8 = 8, d10 = 10, d12 = 12, d20 = 20
};

float dieAvg(Die dice) {
    return (dice / 2) + 0.5;
}

int roll(Die dice) {
    char min {1};
    char max {dice};
    return (rand() % (max - min + 1)) + min;
}

#endif