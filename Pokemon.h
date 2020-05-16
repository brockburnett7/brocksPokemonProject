#ifndef POKEMON_H
#define POKEMON_H
#include <iostream>
#include <string>
using namespace std;

class Pokemon {
    public:
        Pokemon();
        Pokemon(int ID, string name, string type1, string type2, int evolution, int catchRate);
        ~Pokemon();
    
    private:
        string pokeName;
        int pokeID; 
        string pokeType1;
        string pokeType2;
        int evolveLevel;
        int catchDifficulty;

};
#endif