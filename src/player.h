#ifndef PLAYER_H
#define PLAYER_H

enum Class {
    nullClass, artificer, barbarian, bard, cleric, druid, fighter, monk,
    paladin, ranger, rogue, sorcerer, warlock, wizard
};

enum Race {
    nullRace, dragonborn, dwarfHill, dwarfMountain, elfDrow, elfHigh, elfWood,
    gnomeForest, gnomeRock, halfElf, halfOrc, halflingLightfoot,
    halflingStout, human, tiefling
};

class Player {
    public:
    
    // Construtor padrão de Player
    Player();

    Class playerClass;
    Race playerRace;
    short level{};
    short str{};
    short dex{};
    short con{};
    short intel{};
    short wis{};
    short cha{};

    void chooseClass(int cNum);
    void chooseRace(int rNum);
};

#endif