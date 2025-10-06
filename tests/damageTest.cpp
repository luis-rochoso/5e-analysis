#include <iostream>
#include <cstdlib>
#include "../lib/damage.hpp"
// #include "../lib/player.hpp"
// #include "../lib/diceRolling.hpp"
// compile com g++ ./tests/damageTest.cpp ./src/player.cpp -o ./tests/damageTest.out
int main() {
    srand(time(0));
    Player p1 = {};
    p1.setScores(8, 10, 13, 14, 16, 20);
    p1.setLevel(1);

    Attacker shillelagh (p1, wis, d8, bludgeoning);
    std::cout << "Valarash ataca com o bordão místico!\nAtaque: " << shillelagh.atkRoll() << "\n"
                                                    << "Dano: " << shillelagh.damageRoll() << std::endl;
    return 0;
}