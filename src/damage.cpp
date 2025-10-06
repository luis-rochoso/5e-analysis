#include <cstdlib>
#include "../lib/player.hpp"
#include "../lib/damage.hpp"
#include "../lib/diceRolling.hpp"

Attacker::Attacker(Player pc, Skill modifier = str, Die dmgDie = d4, DmgType type = acid) {
    dmg.dice = dmgDie;
    switch (modifier) {
        case str:
        toHit = pc.getProf() + ((pc.getStr() - 10) / 2);
        dmg.value = dieAvg(dmgDie) + ((pc.getStr() - 10) / 2);

        case dex:
        toHit = pc.getProf() + ((pc.getDex() - 10) / 2);
        dmg.value = dieAvg(dmgDie) + ((pc.getDex() - 10) / 2);

        case con:
        toHit = pc.getProf() + ((pc.getCon() - 10) / 2);
        dmg.value = dieAvg(dmgDie) + ((pc.getCon() - 10) / 2);

        case intel:
        toHit = pc.getProf() + ((pc.getIntel() - 10) / 2);
        dmg.value = dieAvg(dmgDie) + ((pc.getIntel() - 10) / 2);

        case wis:
        toHit = pc.getProf() + ((pc.getWis() - 10) / 2);
        dmg.value = dieAvg(dmgDie) + ((pc.getWis() - 10) / 2);

        case cha:
        toHit = pc.getProf() + ((pc.getCha() - 10) / 2);
        dmg.value = dieAvg(dmgDie) + ((pc.getCha() - 10) / 2);

        default:
        toHit = pc.getProf();
        dmg.value = dieAvg(dmgDie);
    }
}

int Attacker::atkRoll() {
    return roll(d20);
}