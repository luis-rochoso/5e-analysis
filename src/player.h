enum Class {
    artificer, barbarian, bard, cleric, druid, fighter, monk,
    paladin, ranger, rogue, sorcerer, warlock, wizard
};

enum Race {
    dragonborn, dwarfHill, dwarfMountain, elfDrow, elfHigh, elfWood,
    gnomeForest, gnomeRock, halfElf, halfOrc, halflingLightfoot,
    halflingStout, human, tiefling
};

struct Player {
    Class playerClass;
    Race playerRace;
    short level{};
    short str{};
    short dex{};
    short con{};
    short intel{};
    short wis{};
    short cha{};
};