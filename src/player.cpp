#include <iostream>
#include "player.h"

Player::Player() {
    playerClass = nullClass;
    playerRace = nullRace;
    level = 1;
    str = 0;
    dex = 0;
    con = 0;
    intel = 0;
    wis = 0;
    cha = 0;
};

void chooseClass(int cNum) {
    switch (cNum) {
        case 1: Player::playerClass = artificer; break;
        case 2: Player::playerClass = barbarian; break;
        case 3: Player::playerClass = bard; break;
        case 4: Player::playerClass = cleric; break;
        case 5: Player::playerClass = druid; break;
        case 6: Player::playerClass = fighter; break;
        case 7: Player::playerClass = monk; break;
        case 8: Player::playerClass = paladin; break;
        case 9: Player::playerClass = ranger; break;
        case 10: Player::playerClass = rogue; break;
        case 11: Player::playerClass = sorcerer; break;
        case 12: Player::playerClass = warlock; break;
        case 13: Player::playerClass = wizard; break;

        default: Player::playerClass = nullClass; break;
    }
}