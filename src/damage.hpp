#ifndef DAMAGE_H
#define DAMAGE_H
#include "player.hpp"

enum Die {
    d4 = 4, d6 = 6, d8 = 8, d10 = 10, d12 = 12
};

float dieAvg(Die dice);

enum Skill {
    str = 1, dex, con, intel, wis, cha
};

enum DmgType {
    acid, bludgeoning, cold, fire, force, lightning, necrotic,
    piercing, poison, psychic, radiant, slashing, thunder
};

struct Damage {
    float value;
    DmgType type;
    bool magic {false};
};

class Attacker {
    short toHit;
    Damage dmg;

    public:

    /** Construtor parametrizado para um ataque
    @param pc Player de referência
    @param modifier Indicador de qual atributo usar no ataque
    @param dmgDie Dado de dano do ataque    
    */
    Attacker(Player pc, Skill modifier, Die dmgDie);
};

class Saver {
    short cd;
    short targets {1};
    Damage dmg;
};

#endif