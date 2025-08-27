#include <iostream>
#include "../src/player.hpp"
using namespace std;

// compile com g++ ./tests/playerInfoTest.cpp ./src/player.cpp -o ./tests/playerInfoTest.out

int main() {
    Player p1;
    short aux{};

    
    cout << "Digite o número correspondente à classe: ";
    cin >> aux;
    p1.chooseClass(aux);
        
    cout << "Digite o número correspondente à raça: ";
    cin >> aux;
    p1.chooseRace(aux);

    cout << "Digite o nível do personagem: ";
    cin >> aux;
    p1.setLevel(aux);

    p1.setScores(8, 16, 14, 10, 16, 8);
    p1.infoDump();

    return 0;
}