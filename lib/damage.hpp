#ifndef DAMAGE_H
#define DAMAGE_H
#include "player.hpp"
#include "diceRolling.hpp"
enum Skill {
    str = 1, dex, con, intel, wis, cha
};

enum DmgType {
    acid, bludgeoning, cold, fire, force, lightning, necrotic,
    piercing, poison, psychic, radiant, slashing, thunder
};

struct Damage {
    Die dice;
    float value {};
    DmgType type {};
    bool magic {false};
};

class Attacker {
    short toHit {};
    Damage dmg;

    public:

    /** 
    * Construtor parametrizado para um ataque
    * @param pc Player de referência
    * @param modifier Indicador de qual atributo usar no ataque
    * @param dmgDie Dado de dano do ataque
    * @param type Tipo de dano do ataque
    */
    Attacker(Player pc, Skill modifier, Die dmgDie, DmgType type);

    /**
     * Realiza uma jogada de ataque
     * @return Resultado da rolagem de ataque
     */
    int atkRoll();
};

class Saver {
    short cd;
    short targets {1};
    Damage dmg;
};

#endif