enum Class {
    artificer, barbarian, bard, cleric, druid, fighter, monk,
    paladin, ranger, rogue, sorcerer, warlock, wizard
};

enum Race {
    dragonborn, dwarfHill, dwarfMountain, elfDrow, elfHigh, elfWood,
    gnomeForest, gnomeRock, halfElf, halfOrc, halflingLightfoot,
    halflingStout, human, tiefling
};

class Player {
    Class playerClass;
    Race playerRace;
    

    public:
    short level{};
    short str{};
    short dex{};
    short con{};
    short intel{};
    short wis{};
    short cha{};
    Player();
    Player(Class playerClass, Race playerRace, short level);
    void chooseClass(int cNum);
    void chooseRace(int rNum);
};