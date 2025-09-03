#ifndef PLAYER_H
#define PLAYER_H
#include <string>
// Definição do tipo "Classe" (todas oficiais)
enum Class {
    nullClass, artificer, barbarian, bard, cleric, druid, fighter, monk,
    paladin, ranger, rogue, sorcerer, warlock, wizard
};

// Definição do tipo "Raça" (todas do PHB)
enum Race {
    nullRace, dragonborn, dwarfHill, dwarfMountain, elfDrow, elfHigh, elfWood,
    gnomeForest, gnomeRock, half_Elf, half_Orc, halflingLightfoot,
    halflingStout, human, tiefling
};

// Definição da classe "Player" que representa um personagem jogável
class Player {
    Class playerClass{};
    Race playerRace{};

    short level{};
    short prof{};
    short str{};
    short dex{};
    short con{};
    short intel{};
    short wis{};
    short cha{};

    public:
    
    // Construtor padrão de Player
    Player();

    /** 
     * Método para determinar a classe de um player a partir
     * de seu inteiro correspondente.
     * @param cNum Inteiro correspondente à classe
     */
    void chooseClass(short cNum);

    /** 
     * Método para determinar a raça de um player
     * a partir de seu inteiro correspondente.
     * @param rNum Inteiro correspondente à raça 
     */
    void chooseRace(short rNum);

    /** Método para definir o nível de um player
     * @param lNum Valor do nível 1 <= lNum <= 20
     */
    void setLevel(short lNum);

    /**
     * Método para definir o bônus de proficiência de um player
     * @param level Nível do player
    */
    void setProf(short level);

    /** Método para definir todos os atributos de um player de uma vez
     * @param strV Valor da Força
     * @param dexV Valor da Destreza
     * @param conV Valor da Constituição
     * @param intelV Valor da Inteligência
     * @param wisV Valor da Sabedoria
     * @param chaV Valor do Carisma
     */
    void setScores(short strV, short dexV, short conV, short intelV, short wisV, short chaV);

    /** Método para checar a classe de um player
     * @return Classe do player
     */
    Class getClass();

    /** Método para checar a raça de um player
     * @return Raça do player
     */
    Race getRace();

    /** Método para checar o nível de um Player
     * @return Nível do player
     */
    short getLevel();

    /**
     * Método para checar o bônus de proficiência de um Player
     * @return Bônus de proficiência do Player
    */
    short getProf();

    /** Método para checar a Força de um Player
     * @return Força do Player
     */
    short getStr();

    /** Método para checar a Destreza de um Player
     * @return Destreza do Player
     */
    short getDex();

    /** Método para checar a Constituição de um Player
     * @return Constituição do Player
     */
    short getCon();

    /** Método para checar a Inteligência de um Player
     * @return Inteligência do Player
     */
    short getIntel();

    /** Método para checar a Sabedoria de um Player
     * @return Sabedoria do Player
     */
    short getWis();

    /** Método para checar o Carisma de um Player
     * @return Carisma do Player
     */
    short getCha();

    /** Método que retorna o nome em português da classe de um Player
     * @return Nome da classe em português
     */
    std::string sayClass();

    /** Método que retorna o nome em português da raça de um Player
     * @return Nome da raça em português
     */
    std::string sayRace();

    /** Imprime todas as informações sobre um player
     */
    void infoDump();
};


#endif