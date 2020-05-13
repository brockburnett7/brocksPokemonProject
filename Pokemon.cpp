#include "Pokemon.h"
#include <iostream>
#include <string>
using namespace std;

Pokemon::Pokemon() {
    pokeID = 0;
    pokeName = "";
    pokeType = "";
}

Pokemon::Pokemon(int ID, string name, string type) {
    pokeID = ID;
    pokeName = name;
    pokeType = type;
}
Pokemon::~Pokemon() {
    
};