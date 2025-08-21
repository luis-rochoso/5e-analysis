#include <iostream>
#include "src/player.h"
using namespace std;

int main() {
    Player p1{};
    short num{};

    cout << "Digite o número correspondente à classe: ";
    cin >> num;
    

    cout << "Digite o número correspondente à raça: ";
    cin >> num;


    cout << "\nDigite os valores dos atributos: \nForça: ";
    cin >> p1.str;
    cout << "Destreza: ";
    cin >> p1.dex;
    cout << "Constituição: ";
    cin >> p1.con;
    cout << "Inteligência: ";
    cin >> p1.intel;
    cout << "Sabedoria: ";
    cin >> p1.wis;
    cout << "Carisma: ";
    cin >> p1.cha;

    cout << "\nDigite o nível do personagem: ";
    cin >> p1.level;

    // switch (p1.playerClass)
    // {
    // case artificer:
    //     cout << "oi" << endl;
    //     break;
    
    // default:
    //     break;
    // }
    return 0;
}