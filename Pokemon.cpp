#include "Pokemon.h"
#include <iostream>
#include <string>
using namespace std;

Pokemon::Pokemon() {
    pokeID = 0;
    pokeName = "";
    pokeType1 = "";
    pokeType2 = "";
    evolveLevel = 0;
    catchDifficulty = 0;
}

Pokemon::Pokemon(int ID, string name, string type1, string type2, int evolution, int catchRate) {
    pokeID = ID;
    pokeName = name;
    pokeType1 = type1;
    pokeType2 = type2;
    evolveLevel = evolution;
    catchDifficulty = catchRate;
}

Pokemon::~Pokemon() {
    
};