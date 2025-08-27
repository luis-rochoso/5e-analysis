#ifndef DAMAGE_H
#define DAMAGE_H

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
};

class Saver {
    short cd;
    short targets {1};
    Damage dmg;
};

#endif