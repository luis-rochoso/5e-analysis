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
}

void Player::chooseClass(short cNum) {
    switch (cNum) {
        case 1: playerClass = artificer; break;
        case 2: playerClass = barbarian; break;
        case 3: playerClass = bard; break;
        case 4: playerClass = cleric; break;
        case 5: playerClass = druid; break;
        case 6: playerClass = fighter; break;
        case 7: playerClass = monk; break;
        case 8: playerClass = paladin; break;
        case 9: playerClass = ranger; break;
        case 10: playerClass = rogue; break;
        case 11: playerClass = sorcerer; break;
        case 12: playerClass = warlock; break;
        case 13: playerClass = wizard; break;

        default: playerClass = nullClass; break;
    }
    return;
}

void Player::chooseRace(short rNum) {
    switch (rNum) {
        case 1: playerRace = dragonborn; break;
        case 2: playerRace = dwarfHill; break;
        case 3: playerRace = dwarfMountain; break;
        case 4: playerRace = elfDrow; break;
        case 5: playerRace = elfHigh; break;
        case 6: playerRace = elfWood; break;
        case 7: playerRace = gnomeForest; break;
        case 8: playerRace = gnomeRock; break;
        case 9: playerRace = half_Elf; break;
        case 10: playerRace = half_Orc; break;
        case 11: playerRace = halflingLightfoot; break;
        case 12: playerRace = halflingStout; break;
        case 13: playerRace = human; break;
        case 14: playerRace = tiefling; break;

        default: playerRace = nullRace; break;
    }
    return;
}

void Player::setLevel(short lNum) {
    level = lNum;
    return;
}

void Player::setScores(short strV, short dexV, short conV, short intelV, short wisV, short chaV) {
    str = strV;
    dex = dexV;
    con = conV;
    intel = intelV;
    wis = wisV;
    cha = chaV;
    return;
}

Class Player::getClass() {
    return playerClass;
}

Race Player::getRace() {
    return playerRace;
}

short Player::getLevel() {
    return level;
}

short Player::getStr() {
    return str;
}

short Player::getDex() {
    return dex;
}

short Player::getCon() {
    return con;
}

short Player::getIntel() {
    return intel;
}

short Player::getWis() {
    return wis;
}

short Player::getCha() {
    return cha;
}

std::string Player::sayClass() {
    switch (playerClass) {
        case artificer: return "Artífice"; 
        case barbarian: return "Bárbaro"; 
        case bard: return "Bardo"; 
        case cleric: return "Clérigo"; 
        case druid: return "Druida"; 
        case fighter: return "Guerreiro"; 
        case monk: return "Monge"; 
        case paladin: return "Paladino"; 
        case ranger: return "Guardião"; 
        case rogue: return "Ladino"; 
        case sorcerer: return "Feiticeiro"; 
        case warlock: return "Bruxo"; 
        case wizard: return "Mago"; 

        default: return "Sem Classe";
    }
}

std::string Player::sayRace() {
    switch (playerRace) {
        case dragonborn: return "Draconato";
        case dwarfHill: return "Anão da Colina";
        case dwarfMountain: return "Anão da Montanha";
        case elfDrow: return "Drow";
        case elfHigh: return "Alto Elfo";
        case elfWood: return "Elfo Silvestre";
        case gnomeForest: return "Gnomo dos Bosques";
        case gnomeRock: return "Gnomo das Rochas";
        case half_Elf: return "Meio-Elfo";
        case half_Orc: return "Meio-Orc";
        case halflingLightfoot: return "Pequenino Pés-Ligeiros";
        case halflingStout: return "Pequenino Robusto";
        case human: return "Humano";
        case tiefling: return "Tiferino";

        default: return "Sem Raça";
    }
}

void Player::infoDump() {
    std::cout << "O jogador é um " << sayClass() << " da raça " << sayRace() << " e de nível " << getLevel() << ".\n";
    std::cout << "Seus atributos são:\n\nForça: " << getStr() << std::endl;
    std::cout << "Destreza: " << getDex() << std::endl;
    std::cout << "Constituição: " << getCon() << std::endl;
    std::cout << "Inteligência: " << getIntel() << std::endl;
    std::cout << "Sabedoria: " << getWis() << std::endl;
    std::cout << "Carisma: " << getCha() << std::endl;
}