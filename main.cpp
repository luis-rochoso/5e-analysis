#include <iostream>
#include "./src/player.h"
using namespace std;

int main() {
    Player p1;
    short cNum{};
    short rNum{};
    
    cout << "Digite o número correspondente à classe: ";
    cin >> cNum;
        
    cout << "Digite o número correspondente à raça: ";
    cin >> rNum;

    cout << "Digite o nível do personagem: ";
    cin >> p1.level;

        


    // cout << "\nDigite os valores dos atributos: \nForça: ";
    // cin >> p1.str;
    // cout << "Destreza: ";
    // cin >> p1.dex;
    // cout << "Constituição: ";
    // cin >> p1.con;
    // cout << "Inteligência: ";
    // cin >> p1.intel;
    // cout << "Sabedoria: ";
    // cin >> p1.wis;
    // cout << "Carisma: ";
    // cin >> p1.cha;


    return 0;
}