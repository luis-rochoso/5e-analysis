#include <iostream>
#include <cstdlib>
#include "../lib/damage.hpp"
#include "../lib/player.hpp"
#include "../lib/diceRolling.hpp"
// compile com g++ ./tests/damageTest.cpp ./src/damage.cpp ./src/player.cpp -o ./tests/damageTest.out
int main() {
    srand(time(0));
    Player p1 = {};
    p1.setScores(16, 8, 14, 10, 16, 8);
    p1.setLevel(1);

    Attacker shillelagh (p1, wis, d8, bludgeoning);
    std::cout << "Valarash ataca com o bordão místico!\nAtaque: " << shillelagh.atkRoll() << std::endl;
    return 0;
}