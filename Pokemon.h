#ifndef POKEMON_H
#define POKEMON_H
#include <iostream>
#include <string>
using namespace std;

class Pokemon {
    public:
        Pokemon();
        Pokemon(int ID, string name, string type);
        ~Pokemon();
    
    private:
        int pokeID;
        string pokeName;
        string pokeType;
};
#endif