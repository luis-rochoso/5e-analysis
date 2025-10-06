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
    int bonus;
    float avgDmg {};
    DmgType type {};
    bool magic {false};
};

class Attacker {
    short toHit {};
    Skill attribute;
    Damage dmg;

    public:

    /**
     * Método que define os dados de um ataque com base nos atributos de um jogador
     * @param pc Personagem jogável
     * @param modifier Atributo do ataque
     * @param dmgDie Dado de dano do ataque
     * @param type Tipo de dano do ataque
     */
    void setDmgStats(Player pc, Skill modifier, Die dmgDie, DmgType type) {
        if (modifier == str) {
            toHit = pc.getProf() + ((pc.getStr() - 10) / 2);
            dmg.bonus = (pc.getStr() - 10) / 2;
            dmg.avgDmg = dieAvg(dmgDie) + dmg.bonus;
        }
        else if (modifier == dex) {
            toHit = pc.getProf() + ((pc.getDex() - 10) / 2);
            dmg.bonus = (pc.getDex() - 10) / 2;
            dmg.avgDmg = dieAvg(dmgDie) + dmg.bonus;
        }
        else if (modifier == con) {
            toHit = pc.getProf() + ((pc.getCon() - 10) / 2);
            dmg.bonus = (pc.getCon() - 10) / 2;
            dmg.avgDmg = dieAvg(dmgDie) + dmg.bonus;
        }
        else if (modifier == intel) {
            toHit = pc.getProf() + ((pc.getIntel() - 10) / 2);
            dmg.bonus = (pc.getIntel() - 10) / 2;
            dmg.avgDmg = dieAvg(dmgDie) + dmg.bonus;
        }
        else if (modifier == wis) {
            toHit = pc.getProf() + ((pc.getWis() - 10) / 2);
            dmg.bonus = (pc.getWis() - 10) / 2;
            dmg.avgDmg = dieAvg(dmgDie) + dmg.bonus;
        }
        else if (modifier == cha) {
            toHit = pc.getProf() + ((pc.getCha() - 10) / 2);
            dmg.bonus = (pc.getCha() - 10) / 2;
            dmg.avgDmg = dieAvg(dmgDie) + dmg.bonus;
        }
        else {
            toHit = pc.getProf();
            dmg.bonus = 0;
            dmg.avgDmg = dieAvg(dmgDie);
        }
        return;
    }

    /** 
    * Construtor parametrizado para um ataque
    * @param pc Player de referência
    * @param modifier Indicador de qual atributo usar no ataque
    * @param dmgDie Dado de dano do ataque
    * @param type Tipo de dano do ataque
    */
    Attacker(Player pc, Skill modifier, Die dmgDie, DmgType type) {
        attribute = modifier;
        dmg.dice = dmgDie;
        setDmgStats(pc, modifier, dmgDie, type);
    };

    /**
     * Realiza uma jogada de ataque
     * @return Resultado da rolagem de ataque
     */
    int atkRoll() {
        return roll(d20) + toHit;};

    /**
     * Realiza uma jogada de dano
     * @return Resultado da rolagem de dano
     */
    int damageRoll() {
        return roll(dmg.dice) + dmg.bonus;
    }
};

class Saver {
    short cd;
    short targets {1};
    Damage dmg;
};

#endif