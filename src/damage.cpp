#include "damage.hpp"

float dieAvg(Die dice) {
    return (dice / 2) + 0.5;
}

Attacker::Attacker(Player pc, Skill modifier, Die dmgDie) {
    switch (modifier) {
        case str:
        toHit = 2 + ((pc.getStr() - 10) / 2);
        dmg.value = dieAvg(dmgDie) + ((pc.getStr() - 10) / 2);

        default:
        toHit = 2;
        dmg.value = dieAvg(dmgDie);
    }
}