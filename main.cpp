#include <iostream>
#include "src/player.h"

int main() {
    Player p1{};
    short num{};

    std::cout << "Digite o número correspondente à classe: ";
    std::cin >> num;
    p1.playerClass == num;

    std::cout << "Digite o número correspondente à raça: ";
    std::cin >> num;
    p1.playerRace == num;

    std::cout << "\nDigite os valores dos atributos: \nForça: ";
    std::cin >> p1.str;
    std::cout << "Destreza: ";
    std::cin >> p1.dex;
    std::cout << "Constituição: ";
    std::cin >> p1.con;
    std::cout << "Inteligência: ";
    std::cin >> p1.intel;
    std::cout << "Sabedoria: ";
    std::cin >> p1.wis;
    std::cout << "Carisma: ";
    std::cin >> p1.cha;

    std::cout << "\nDigite o nível do personagem: ";
    std::cin >> p1.level;
    return 0;
}